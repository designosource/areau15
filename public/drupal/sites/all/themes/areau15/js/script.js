/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.

  }
};

$(document).ready(function() {
	var stickyNavTop = $('.main-nav').offset().top,
	    height = $('.video').height();

	var stickyNav = function(){
		var scrollTop = $(window).scrollTop();
		if (scrollTop > stickyNavTop && scrollTop > height) { 
		    $('.main-nav').addClass('sticky');
		    $('.pseudo-menu').show();
		} else {
		    $('.main-nav').removeClass('sticky'); 
		    $('.pseudo-menu').hide();
		}
	};
	 
	stickyNav();
	 
	$(window).scroll(function() {
	    stickyNav();
	});


    $("#menu-button").click(function() {
        $("#primary-menu").slideToggle();
    });

    // MUSIC PAUZE AND PLAY
  	//$('#music_play').hide();
  	$('#pause-music').click(function(e) {
      	if ($('#music')[0].paused == false) {
          	$('#music')[0].pause();
          	
          	$('#handlers').attr('src','sites/all/themes/areau15/images/playbtn.png');
  		} else {
          	$('#music')[0].play();
          	
          	$('#handlers').attr('src','sites/all/themes/areau15/images/pauzebtn.png');
      	}
	
	});

});


})(jQuery, Drupal, this, this.document);
