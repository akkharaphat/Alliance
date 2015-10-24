<html>       
          <title>Calculator</title>
          <body>
                <form method = "POST" action = "calculator.php">
                <p align = "center">
                        <input type = "text" name = "num1">

                        <select name = "operator">
                                <option value = "?">Select Operations</option>
                                <option value = "+">+</option>
                                <option value = "-">-</option>
                                <option value = "*">*</option>
                                <option value = "/">/</option>
                        </select>

                        <input type = "text" name = "num2">

                        <input type = "submit" name = "Submit" value = "Calculate">

                </p>
                </form>
<?php

$num1 = $_POST['num1'];
$operator = $_POST['operator'];
$num2 = $_POST['num2'];

if($operator == "+")
	echo "$num1 + $num2 = ".($num1+$num2);

elseif($operator == "-")
	echo "$num1 - $num2 = ".($num1-$num2);

elseif($operator == "*")
	echo "$num1 * $num2 = ".($num1*$num2);

elseif($operator == "/")
	echo "$num1 / $num2 = ".($num1/$num2);

elseif($operator == "?")
	echo "Please select operator.";

?>
        </body>
</html>

