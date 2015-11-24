<?php
	
	$title = $row->_field_data['nid']['entity']->title;
	$bodyTop = $row->_field_data['nid']['entity']->field_top_body['und'][0]['value'];
	$bodyBottom = $row->_field_data['nid']['entity']->field_bottom_body['und'][0]['value'];
	$template = $row->_field_data['nid']['entity']->field_template['und'][0]['value'];
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
					echo '<div class="content-wrapper">';
						echo '<h3>' . $title .'</h3>';
						echo '<p>'. $bodyTop .'</p>';
					echo '</div>';
					echo theme_image($image);
				echo '</div>';
			echo '</div>'; 
			break;

		case "template_text_bottom":
			
			echo '<div class="detail '. $template .'">';
				echo '<div class="image-wrapper">';
					echo '<div class="content-wrapper">';
						echo '<h3>' . $title .'</h3>';
						echo '<p>'. $bodyBottom .'</p>';
					echo '</div>';
					echo theme_image($image);
				echo '</div>';
			echo '</div>'; 
			break;

		case "template_text_bottom_top":
					
			echo '<div class="detail '. $template .'">';
				echo '<div class="image-wrapper">';
					echo '<div class="content-wrapper top">';
						echo '<h3>' . $title .'</h3>';
						echo '<p>'. $bodyTop .'</p>';
					echo '</div>';

					echo '<div class="content-wrapper bottom">';
						echo '<p>'. $bodyBottom .'</p>';
					echo '</div>';
					echo theme_image($image);
				echo '</div>';
			echo '</div>'; 
			break;

		default: 
			 echo $template;
	}
