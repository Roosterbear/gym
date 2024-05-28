<?php
session_start();
$msg = '';
if(isset($_POST['input'])&!empty($_POST['input'])){
	if($_POST['input'] == $_SESSION['captcha']){
		$msg = '<span style = "color:green">EXITO</span>';
	}else{
		$msg = '<span style = "color:red">CAPTCHA ERRONEO</span>';
	}
}
?>

<!DOCTYPE html><html lang = "es">
	<head>
		<meta charset = "UTF-8">
		<title>Captcha</title>
		<style>
			body{
				display: flex;
				flex-direction: column;
				align-items: center;
				justify-content: center;
			}
		</style>
	</head>
	<body>
		<div style = "margin: 15px;">
			<img src = "captcha.php" alt="captcha">
		</div>
		<form method = "POST" action="<?php echo $_SERVER['PHP_SELF'];?>">
			<input type = "text" name = "input" placeholder = "Ingresa captcha">
			<input type = "submit" name = "submit" value = "Enviar">
		</form>
		<div style = "margin-bottom: 5px;">
			<?php echo $msg; ?>
		</div>
	</body>
</html>
