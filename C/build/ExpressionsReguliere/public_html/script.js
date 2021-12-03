/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


function testLogin(){

    
        login = $("#log").val();
        var exp = new RegExp("^[a-zA-Z0-9]{3,8}$", "g");
        if (exp.test(login)) {
            alert("Login valide");
        } else {
            alert("Login invalide");
        }

}

function testDate(){

    
        date = $("#date").val();
        var exp = new RegExp("^[0-9]{2}/[0-9]{2}/[0-9]{4}$", "g");
        if (exp.test(date)) {
            alert("Date valide");
        } else {
            alert("Date invalide");
        }

}

$(document).ready(function (){
   $("#verifLogin").click(testLogin);
   $("#verifDate").click(testDate);
});