<?php
	// Content
	$title = $row->_field_data['nid']['entity']->title;
	$bodyTop = $row->_field_data['nid']['entity']->field_top_body['und'][0]['value'];
	$bodyBottom = $row->_field_data['nid']['entity']->field_bottom_body['und'][0]['value'];
	$template = $row->_field_data['nid']['entity']->field_template['und'][0]['value'];
	// Custom inline bottom & top values
	$top = $row->_field_data['nid']['entity']->field_margin_top['und'][0]['value'];
	$bottom = $row->_field_data['nid']['entity']->field_margin_bottom['und'][0]['value'];
	// Background images
	$image = [
		'path' => '/sites/default/files/detail/' . $row->_field_data['nid']['entity']->field_image['und'][0]['filename']
	];
?>

<?php 

	switch($template) {
		case "template_afbeelding":
	
			echo '<div class="detail '. $template .'">';
				echo '<div class="image-wrapper">';
					echo theme_image($image);
				echo '</div>';
			echo '</div>'; 
			break;

		case "template_text_top":
			
			echo '<div class="detail '. $template .'">';
				echo '<div class="image-wrapper">';
					echo theme_image($image);
					echo '<div class="content-wrapper" style="top:'.$top.'%">';
						echo '<h3>' . $title .'</h3>';
						echo '<p>'. $bodyTop .'</p>';
					echo '</div>';
				echo '</div>';
			echo '</div>'; 
			break;

		case "template_text_bottom":
			
			echo '<div class="detail '. $template .'">';
				echo '<div class="image-wrapper">';
				echo theme_image($image);
					echo '<div class="content-wrapper" style="bottom:'.$bottom.'%">';
						echo '<h3>' . $title .'</h3>';
						echo '<p>'. $bodyBottom .'</p>';
					echo '</div>';
				echo '</div>';
			echo '</div>'; 
			break;

		case "template_text_bottom_top":
					
			echo '<div class="detail '. $template .'">';
				echo '<div class="image-wrapper">';
				echo theme_image($image);
					echo '<div class="content-wrapper top" style="top:'.$top.'%">';
						echo '<h3>' . $title .'</h3>';
						echo '<p>'. $bodyTop .'</p>';
					echo '</div>';

					echo '<div class="content-wrapper bottom" style="bottom:'.$bottom.'%">';
						echo '<p>'. $bodyBottom .'</p>';
					echo '</div>';
				echo '</div>';
			echo '</div>'; 
			break;

		default: 
			 echo $template;
	}
