<?php
class Usher{
	public static $name = "Propspero";
	private $titulo = "LA CAIDA DE LA CASA USHER";

	public static function getName(){
		return "Leo";
	}

	public function getTitulo(){
		return $this->titulo;
	}
}

/* If we can access variable, print it, else print text */
echo Usher::$name??"Hijo muerto";
echo "<br/>";
echo Usher::$name_??"Hijo muerto";
echo "<br/>";
echo Usher::getName()??"Otro hijo muerto";
echo "<br/>";
$ushito = new Usher();
echo $ushito->getTitulo()??"Sin Titulo";
echo "<br/>";
echo $ushito->titulo??"Sin acceso a la casa Usher";
echo "<br/>";
?>
