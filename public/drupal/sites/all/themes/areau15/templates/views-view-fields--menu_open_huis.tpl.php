<?php
	$title = $row->_field_data['nid']['entity']->title;
	$subtitle = $row->_field_data['nid']['entity']->field_subtitle['und'][0]['value'];;
	$description = $row->_field_data['nid']['entity']->body['und'][0]['value'];
	$image = [
		'path' => '/sites/default/files/menu/' . $row->_field_data['nid']['entity']->field_image['und'][0]['filename']
	];
?>

<div class="item" id="open-huis">
<?php echo theme_image($image); ?>
<?php if ($title !== "null"): ?>
	<div class="overlay">
		<div class="description"><?php echo($description); ?></div>
	</div>
<?php endif ?>
</div>