<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */

if($is_front){
    $title = 'Home'; // This is optional ... it removes the default Welcome to @site-name
    drupal_set_title($title);
    $page['content']['system_main']['default_message'] = array(); // This will remove the 'No front page content has been created yet.'
}
?>

    <section class="video">

        <?php if ($site_name || $site_slogan): ?>

            <div class="site-info">
                <img src="sites/all/themes/areau15/images/logo-areau.svg" alt="">
                <!-- 
                <?php if ($site_name): ?>
                    <h1 class="site-name" id="site-name">
                        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
                    </h1>
                <?php endif; ?>

                <?php if ($site_slogan): ?>
                    <div class="site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
                <?php endif; ?>
                -->
                
            </div>

            <div class="header-footer areau-credits">
                <img src="sites/all/themes/areau15/images/logo_white.png" alt="">
            </div>

        <?php endif; ?>
        
        <div id="pause-music">
            <img id="handlers" src="sites/all/themes/areau15/images/pauzebtn.png" alt="">
        </div>

        <div id="audio" style="display:none">
            <audio id="music" controls autoplay>
                <source src="sites/all/themes/areau15/videos/sound.m4a" type="audio/mp4" />
            </audio>
        </div>  

        <video autoplay="" loop="" class="video">
          <source src="sites/all/themes/areau15/videos/intro.mp4" type="video/mp4">
          <source src="sites/all/themes/areau15/videos/intro.ogv" type="video/ogg">
          <source src="sites/all/themes/areau15/videos/intro.webm" type="video/webm">
          <img src="sites/all/themes/areau15/images/shop.png" alt="Video Fallback" title="Your browser does not support the <video> tag">
        </video>
    </section>

    <section class="main-nav">

            <?php if ($main_menu): ?>
                <nav class="wrapper" role="navigation" tabindex="-1">
                    <ul class="mobile">
                        <li>
                            <a href="/" title="" class="front-nav visible-sm visible-xs">Front</a>
                        </li>
                        <li>
                            <button id="menu-button">MENU</button>
                        </li>
                    </ul>

                    <div class="main-menu-wrapper" id="primary-menu">
                        <?php
                        // This code snippet is hard to modify. We recommend turning off the
                        // "Main menu" on your sub-theme's settings form, deleting this PHP
                        // code block, and, instead, using the "Menu block" module.
                        // @see https://drupal.org/project/menu_block
                        print theme('links__system_main_menu', array(
                            'links' => $main_menu,
                            'id' => 'main-menu'
                        )); ?>
                    </div>
                </nav>
            <?php endif; ?>

            <?php print render($page['navigation']); ?>

    </section>

    <div class="pseudo-menu"></div>

    <section class="menu">

        <div id="content" class="column" role="main">
            <a id="main-content"></a>
            <?php print render($page['content']); ?>
        </div>
    </section>

    <div id="last"></div>

    <footer>
        <div class="wrapper clearfix">
            <div class="col webshop">
                <h3>Prijs-Project-Info</h3>
                <a href="http://www.areau-woonproject.be/">
                    <img src="sites/all/themes/areau15/images/shop.png" alt="webshop">
                </a>
                <p class="bottom-line"><a href="mailto:info@areau.be"><b>VASTGOED</b> Te Koop</a></p>
            </div>
            <div class="col">
                <h3>Contact</h3>
                <div class="address">
                    <p class="street">Mechelsesteenweg 87</p>
                    <p class="province">2018 Antwerpen</p>
                    <p class="country">België</p>
                </div>
                <div class="contact">
                    <a href="mailto:info@areau.be" class="mail">info<span class="ico-logo"></span>areau.be</a>
                    <a href="tel:032261712" class="phone">+32 [0]3 226 17 12</a>
                </div>
            </div>
            <div class="col">
                <h3>'Op de hoogte blijven'</h3>
                <form action="POST">
                    <input type="text" name="name" id="name" placeholder="Naam">
                    <input type="text" name="email" id="email" placeholder="E-Mail">
                    <input type="submit" name="send" value="Verstuur" id="">
                </form>
                <p class="bottom-line social"><b>Volg ons </b><a href="https://www.facebook.com/AREAU-Interieurarchitecten-793781097311302/?ref=ts&fref=ts">Facebook</a> / <a href="https://vimeo.com/user37928837">Vimeo</a></p>
            </div>
        </div>
    </footer>