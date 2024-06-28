<?php
	$para = 1;
	echo("para = ".$para."<br/>");
	echo("funcion regresa ".noCambia($para)."<br/>");
	echo("para sigue valiendo ".$para."<br/>");
	echo("funcion regresa ".cambia($para)."<br/>");
	echo("ahora para vale ".$para."<br/>");

	/* WARNING: If I do not close an HTML tag, the next code dissapears */

	function cambia(&$para){
		return ++$para;
	}

	function noCambia($para){
		return ++$para;
	}

?>
