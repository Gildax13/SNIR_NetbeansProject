<?php
require_once 'fonctions.inc.php';


if(isset($_GET["envoyer"])){
/*echo("Methode Get <br>");
echo("<pre>");
print_r($_GET);
echo("</pre>");*/  
 afficher($_GET);
 $value = $_GET["nom"]. " " .$_GET["prenom"];
 setcookie("CookieChoco",$value, time()+3600); // expire dans 1 heure
 echo '<a href="next.php">Next</a>';
}


if(isset($_POST["envoyer"])){
/*echo("Methode POST <br>");
echo("<pre>");
print_r($_POST);
echo("</pre>");  */
    afficher($_POST);
    $value = $_POST["nom"].$_POST["prenom"];
 setcookie("CookieChoco",$value, time()+3600); // expire dans 1 heure
  echo '<a href="next.php">Next</a>';


}


