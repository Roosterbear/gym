<?php
	$digit = mt_rand(0,9);
	$id = uniqid("file__{$digit}");
	print($id."<br/>");
	print(getenv('HTTP_USER_AGENT'));
	echo "<br/>";
	$mail = "luis.perea@utags.edu.mx";
	if(strpos($mail,'@')===false){
		print "El correo no tiene arroba!";
	}else{
		print "El correo parece correcto";
	}
?>
