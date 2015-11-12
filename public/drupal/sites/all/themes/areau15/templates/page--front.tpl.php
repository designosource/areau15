<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */

if($is_front){
    $title = ''; // This is optional ... it removes the default Welcome to @site-name
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
                <p class="line1">DESIGN - INTERIOR - SERVICES</p>
                <p class="line2">‘Something inspiring’</p>
            </div>

        <?php endif; ?>

        <video autoplay="" loop="" class="video">
            <source src="sites/all/themes/areau15/videos/intro.mp4" type="video/mp4">
         </video>
    </section>

    <section class="main-nav">

            <?php if ($main_menu): ?>
                <nav class="wrapper" role="navigation" tabindex="-1">
                    <?php
                    // This code snippet is hard to modify. We recommend turning off the
                    // "Main menu" on your sub-theme's settings form, deleting this PHP
                    // code block, and, instead, using the "Menu block" module.
                    // @see https://drupal.org/project/menu_block
                    print theme('links__system_main_menu', array(
                        'links' => $main_menu
                    )); ?>
                </nav>
            <?php endif; ?>

            <?php print render($page['navigation']); ?>

    </section>

    <section class="menu">

        <div id="content" class="column" role="main">
            <a id="main-content"></a>
            <?php print render($page['content']); ?>
        </div>
    </section>

    <div id="last"></div>

    <footer>
        <div class="wrapper clearfix">
            <div class="placeholder">
                
            </div>
            <div class="col">
                <h3>Prijs-Project-Info</h3>
                <img src="logo" alt="">
            </div>
            <div class="col">
                <h3>Contact</h3>
                <div class="address">
                    <p>Mechelsesteenweg 87</p>
                    <p>2018 Antwerpen</p>
                    <p>België</p>
                </div>
                <div class="contact">
                    <a href="info@areau.be">info@area.be</a>
                    <a href="tel:032261712">+32 [0]3 226</a>
                </div>
            </div>
            <div class="col">
                <h3>'Op de hoogte blijven'</h3>
                <form action="POST">
                    <input type="text" name="name" id="name" placeholder="Naam">
                    <input type="text" name="email" id="email" placeholder="E-Mail">
                    <input type="submit" name="send" value="Verstuur" id="">
                </form>
            </div>
        </div>
    </footer>