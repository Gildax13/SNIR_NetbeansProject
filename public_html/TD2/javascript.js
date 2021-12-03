/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


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


function mdp() {
    var val1 = $("#Password").val();
    var val2 = $("#ConfirmPassword").val();

    if (val1 !== val2) {
        alert("Erreur les deux mots de passe ne correspondent pas");
        console.log("ok");
    }
}
function selectionListe() {
    viderListe();
    //var valVille = $(this).val();
    var texteVilleSelect = $("#SE option:selected").text();

   // alert(valVille + " " + texteVilleSelect);
    if (texteVilleSelect === "Linux") {
        viderListe();
        $("#Version").prepend($("<option>", {value: "Debian"}).text("Debian"));
        $("#Version").append($("<option>", {value: "Ubuntu"}).text("Ubuntu"));
        $("#Version").append($("<option>", {value: "Fedora"}).text("Fedora"));
        $("#Version").append($("<option>", {value: "SuSE"}).text("SuSE"));
        $("#Version").append($("<option>", {value: "Mint"}).text("Mint"));
    } else {
        if (texteVilleSelect === "Windows") {
            viderListe();
            $("#Version").prepend($("<option>", {value: "XP"}).text("XP"));
            $("#Version").append($("<option>", {value: "Vista"}).text("Vista"));
            $("#Version").append($("<option>", {value: "Seven"}).text("Seven"));
        } else {
            if (texteVilleSelect === "MacOS") {
                viderListe();
                $("#Version").prepend($("<option>", {value: "Tiger"}).text("Tiger"));
                $("#Version").append($("<option>", {value: "Leopard"}).text("Leopard"));
                $("#Version").append($("<option>", {value: "Snow Leopard"}).text("Snow Leopard"));
                $("#Version").append($("<option>", {value: "Lion"}).text("Lion"));

            }
        }

    }






}
function viderListe() {
    $("#Version").empty();
}





$(document).ready(function () {
    $("#RegisterButton").click(mdp);
    $("#SE").click(selectionListe);
});

