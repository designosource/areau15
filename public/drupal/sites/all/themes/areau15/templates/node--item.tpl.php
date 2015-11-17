<div class="item">
	<div class="overlay">
		<h3><?php echo $title; ?></h3>
		<div class="description"><?php echo $body[0]['value']; ?></div>
		<div class="footer areau-credits"><p class="line2">out-and-out the inside</p><p class="line1">Design - Interior - Services</p></div>
	</div>
	<img src="<?php print file_create_url($node->field_image[LANGUAGE_NONE][0]['uri']); ?>" />
</div>