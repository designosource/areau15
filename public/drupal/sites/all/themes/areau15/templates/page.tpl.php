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
