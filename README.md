Site-Review-D7
==============

Packages a Drupal 7 based profile to create a Website dedicated for NSF LTER Site Reviews 

Every 5 years, a NSF appointed panel visits an LTER site to audit the work done with the
grant funding provided. The panelists usually visit the site, and revise the work. A
flexible agenda is built for the process, with events that happen at a given date time and
place. Participants are listed in a directory with contact information, and a sleught of 
documents are ordered to facilitate the review, including, research summaries, accomplishments
bibliographical citations.  Many documents are enriched with media, such as photos or videos.

Here, you will download a Drupal seven based profile that will facilitate the dissemination
of all the information above. Just drop it in a web enabled folder on a server, or in a host
provider, and install following the usual Drupal profile installation steps.

This site can be adapted for small meetings too.

## Requirements ##

* [Base Drupal 7 requirements](http://drupal.org/requirements)
* PHP 5.3+
* [Drush](http://drush.ws/)
* [Git](http://git-scm.com/)

## Instructions ##

The following instructions assume that you clone this profile into a directory
'above' your web server root. The web server root directory in these examples
is _www_.

### Installing ###

Installing the profile involved 4 steps.

1.  Clone the profile.
2.  Build the profile into your web root.
3.  Create a database for your site to connect to.
4.  Navigate to your site in your web browser to complete the install process.

For the example commands below, 'www' represents the complete path to your site's desired webroot.

Clone the repo:

* `git clone --branch 7.x-1.x git@github.com:lter/site-review-d7.git`

Build the site into your webroot:

* `cd site-review`
* `drush make build-site_review.make www --prepare-install --contrib-destination=profiles/site_review`
