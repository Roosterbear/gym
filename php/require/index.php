<?php
  require $file;
	$file = './menu.php';
	if(file_exists($file) && is_readable($file)){
    echo $menu;
	}
  
	echo "<br/>";
	$arreglo = ["String", "Bean", "JEAN"];
	shuffle($arreglo);
	echo strtoupper($arreglo[0]);
	echo "<br/>";
	echo strtolower($arreglo[1]);
	echo "<br/>";
	echo ucfirst($arreglo[2]);
	echo "<br/>";
	var_dump($file);
	echo "<br/>";
	print_r($arreglo); 
?>