/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function recupererVal(){
    let val1 = $(this).val();
    let text = $("#saisieText").val();
    alert(val1);
    console.log("ok");
   $("#saisieText").val(text + val1); 
    
}
function calcul(){
  let text = $("#saisieText").val();  
  let res= eval(text);
  $("#saisieText").empty(); 
  $("#saisieText").val(res); 
}



$(document).ready(function(){
    $("#un").click(recupererVal); 
    $("#deux").click(recupererVal); 
    $("#trois").click(recupererVal); 
    $("#quatre").click(recupererVal); 
    $("#cinq").click(recupererVal);
    $("#six").click(recupererVal); 
    $("#sept").click(recupererVal); 
    $("#huit").click(recupererVal); 
    $("#neuf").click(recupererVal); 
    $("#cinq").click(recupererVal); 
    $("#slash").click(recupererVal); 
    $("#fois").click(recupererVal); 
    $("#moins").click(recupererVal); 
    $("#plus").click(recupererVal); 
    $("#egal").click(calcul); 
    $("#virgule").click(recupererVal);
});