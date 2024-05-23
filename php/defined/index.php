<?php
const HOLA = 'Hola';
if(true){
	define('CONSTANTE','Hola Mundo');	
}

defined('CONSTANTE') or die('Die...');
echo HOLA.' pusiste verdadero';
?>