<?php
/**
 * @file
 * site_review_outreach_tags.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function site_review_outreach_tags_taxonomy_default_vocabularies() {
  return array(
    'outreach' => array(
      'name' => 'Outreach',
      'machine_name' => 'outreach',
      'description' => 'Outreach Activities',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
