/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function multiplication(){
    var v1 = $("#premier").val();
    var v2 = $("#second").val();
    
    res = v1*v2;
    alert("Multiplication \nTexte val 1 : " + v1 + " \nTexte val 2 : "+v2);
    $("#resultat").val(res);
    console.log("Résultat du calcul " + res);
}

function addition(){
    var v3 = $("#premierA").val();
    var v4 = $("#secondA").val();
    
    res = parseInt(v3)+parseInt(v4);
    alert("Addition \nTexte val 1 : " + v3 + " \nTexte val 2 : "+v4);
    $("#resultatA").val(res);
    console.log("Résultat du calcul " + res);
}

$(document).ready(function(){
   $("#bouton").click(multiplication);
     $("#boutonA").click(addition);
});


       
/*function calculMulti()
{
    var val1 = document.getElementById("premier").value;
    var val2 = document.getElementById("second").value;
    
    alert("Multiplication \nTexte val 1 : " + val1 + " \nTexte val 2 : "+val2);
    
    var resMult=val1*val2;
    
    document.forms["FormMult"].resultat.value=resMult;
}

function calculAdd()
{
    var val1 = document.getElementById("premierA").value;
    var val2 = document.getElementById("secondA").value;
    
    alert("Addition \nTexte val 1 : " + val1 + " \nTexte val 2 : "+val2);
    
    var resMult=val1+val2;
    
    document.forms["FormAdd"].resultatA.value=resMult;
}
*/


