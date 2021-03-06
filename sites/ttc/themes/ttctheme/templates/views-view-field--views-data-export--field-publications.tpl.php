<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php 
try {
    $writer = new XMLWriter();
    $writer->openMemory();
    $writer->setIndent(true);

    foreach($row->extracted_values['field_field_publications'] as $delta => $publication) {
        // title is a long text field, check for value in array
        $title = isset($publication['field_title']['value']) ? $publication['field_title']['value'] : '';
        $title = filter_xss($title, array());
        if(!$title) $title = '';

        $url = isset($publication['field_url']['value']) ? $publication['field_url']['value'] : '';
        $url_title = isset($publication['field_url']['title']) ? $publication['field_url']['title'] : '';

        $writer->startElement('Publication');
            $writer->writeElement('Title', $title);
            $writer->startElement('LinkoutURLs');
                    $writer->startElement('URL');
                        $writer->writeElement('Href', print_r($url, true));
                        $writer->writeElement('Caption', print_r($url_title, true));
                    $writer->endElement(); //URL
                $writer->endElement(); //LinkoutURLs
        $writer->endElement(); // IncludedPatent/RelatedPatent
    }

    $output = $writer->outputMemory(true);
    print $output;

    $writer->flush();
    unset($writer);
}
catch(Exception $e) {
    watchdog("ttctheme->views-view-field--views-data-export--field-publications.tpl.php",
        $e->getMessage());
}