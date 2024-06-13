<?php
	function sumalos(...$nums){
		return array_sum($nums);
	}

	$total = sumalos(5,6,7,8,9);
	echo "La suma es: $total <br/>";
?>
