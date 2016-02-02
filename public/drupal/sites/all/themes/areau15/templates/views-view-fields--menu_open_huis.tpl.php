<?php
	$title = $row->_field_data['nid']['entity']->title;
	$subtitle = $row->_field_data['nid']['entity']->field_subtitle['und'][0]['value'];;
	$description = $row->_field_data['nid']['entity']->body['und'][0]['value'];
	$image = [
		'path' => '/sites/default/files/menu/' . $row->_field_data['nid']['entity']->field_image['und'][0]['filename']
	];
?>

<div class="item" id="open-huis">
<?php if ($title !== "null"): ?>
	<div class="overlay">
		<h3><?php echo($title); ?></h3>
		<h4><?php echo($subtitle); ?></h4>
		<div class="description"><?php echo($description); ?></div>
		<div class="footer areau-credits">
			<p class="line2">out-and-out the inside</p>
			<p class="line1">Design - Interior - Services</p>
		</div>
	</div>
<?php endif ?>
	<?php echo theme_image($image); ?>
</div>