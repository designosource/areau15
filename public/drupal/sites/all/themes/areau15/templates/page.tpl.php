<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
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


