<div class="item">
	<?php
		// check if node is being rendered inside a view or not
		// print out the footer only if it is inside a view
		// works but no idea how
		if (node_is_page($node->fid)) {
			echo('<img src="'.print(file_create_url($node->field_image[LANGUAGE_NONE][0]['uri'])).'" />');
			echo('<div class="overlay">');
			echo('<h3>'+$title+'</h3>');
			echo('<h4 class="pull-up">'+$node->field_sub_title['und'][0]['value']+'</h4>');
			echo('<h4 class="credit"><i>by</i>&nbsp;<b>AREAU</b></h4>');
			echo('<div class="description">'+$body[0]['value']+'</div>');
			echo('<div class="footer areau-credits"><p class="line2">out-and-out the inside</p><p class="line1">Design - Interior - Services</p></div>');
			echo('</div>');
		}
	?>
</div>