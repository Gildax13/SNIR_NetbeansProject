<?php

function afficher($tab){
    foreach($tab as $key => $val){
        echo " {$key} : {$val} <br/>";
    }
}

function verifierDoubleMotPasse(){
    if($_POST["Password"]!=$_POST["ConfirmPassword"]){
        echo'ko';
    }else{
       echo'ok'; 
    }
}

function verifierDoubleMotPasseV2(){
    $value = false;
    if($_POST["Password"]!=$_POST["ConfirmPassword"]){
       
        $value = false;
    }else{
       
       $value = true;
    }
    return $value;
}



    