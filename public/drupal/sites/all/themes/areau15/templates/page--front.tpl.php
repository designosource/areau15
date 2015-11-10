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
                <?php if ($site_name): ?>
                    <h1 class="site-name" id="site-name">
                        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
                    </h1>
                <?php endif; ?>

                <?php if ($site_slogan): ?>
                    <div class="site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
                <?php endif; ?>
            </div>

        <?php endif; ?>

        <video autoplay="" loop="" class="video">
            <source src="sites/all/themes/areau15/videos/intro.mp4" type="video/mp4">
         </video>
    </section>

    <section class="main-nav">

            <?php if ($main_menu): ?>
                <nav role="navigation" tabindex="-1">
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

    <?php print render($page['footer']); ?>


<?php print render($page['bottom']); ?>
