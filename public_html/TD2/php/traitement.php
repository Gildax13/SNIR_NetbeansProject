<?php
require_once 'fonctions.inc.php';
if(isset($_POST["BoutonRegister"])){
if(filter_input(INPUT_SERVER,'REQUEST_METHOD')=='POST'){
 
    
 afficher($_POST);
 
 /*$value = $_POST["nom"]. " " 
         .$_POST["prenom"]. " " 
         .$_POST["ville"]. " " 
         .$_POST["email"]. " " 
         .$_POST["site"]. " " 
         .$_POST["photo"]. " " 
         .$_POST["se"];*/
 $val = filter_input(INPUT_POST,'login',FILTER_VALIDATE_EMAIL);
 if($val){
     echo "login ok"."<br>";
     echo "Login : ".$val."<br>"; 
 }else{
   echo "login pas ok"."<br>";  
 }
 
 //setcookie("CookieChoco",$value, time()+3600); // expire dans 1 heure
 echo' Verification mot de passe : ' .verifierDoubleMotPasseV2() . '<br>'; 
 echo '<a href="next.php">Next</a>';
}
}