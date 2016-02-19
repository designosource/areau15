<div class="item">
	<img src="<?php print file_create_url($node->field_image[LANGUAGE_NONE][0]['uri']); ?>" />
	<div class="overlay">
		<h3><?php echo $title; ?></h3>
		<h4 class="pull-up"><?php echo $node->field_sub_title['und'][0]['value']; ?></h4>
		<h4 class="credit"><i>by</i>&nbsp;<b>AREAU</b></h4>
		<div class="description"><?php echo $body[0]['value']; ?></div>
		<?php
			// check if node is being rendered inside a view or not
			// print out the footer only if it is inside a view
			// works but no idea how
			if (node_is_page($node->fid)) {
				echo('<div class="footer areau-credits"><p class="line2">out-and-out the inside</p><p class="line1">Design - Interior - Services</p></div>');
			}
		?>
	</div>
</div>