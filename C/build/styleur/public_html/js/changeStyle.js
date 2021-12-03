function changerCouleurBordure()
{
    var coul = $("#couleurBordure").val();
    $("#divTest").css("border-color", coul);
}
function changerLargeurBordure()
{
    var lar = $("#largeurBordure").val();
    var larpx = lar + "px";
    $("#divTest").css("border-width", larpx);
}

function changerStyleBordure()
{
    var style = $("#styleBordure").val();
    $("#divTest").css("border-style", style);
}

function changerCourbureBordure()
{
    var lar = $("#courbeBordure").val();
    var larpx = lar + "px";
    $("#divTest").css("border-radius", larpx);
}

function changerOmbre() {
    var decHori = $("#ombreDecalH").val();
    var decVer = $("#ombreDecalV").val();
    var distFlou = $("#ombreDistFlou").val();
    var taille = $("#ombreTaille").val();
    var couleur = $("#ombreCouleur").val();
            
    var style = decHori + "px " + decVer + "px " + distFlou + "px " + taille + "px " + couleur;

    $("#divTest").css("box-shadow", style);


}

function changerTexte(){
    var taille = $("#tailleTexte").val();
    var couleur = $("#texteCouleur").val();
    
    $("#divTest").css("color", couleur);
    $("#divTest").css("font-size", taille+"% ");
}
function changerDiv(){
   var largeur = $("#divLargeur").val(); 
   var hauteur = $("#divHauteur").val();   
    
    $("#divTest").css("width", largeur+"px");
    $("#divTest").css("height", hauteur+"px");
    
}



$(function () {


    /*  gestion bordure */
    $("#couleurBordure").change(changerCouleurBordure);

    $("#largeurBordure").change(changerLargeurBordure);

    $("#styleBordure").change(changerStyleBordure);

    $("#courbeBordure").change(changerCourbureBordure);

    /*  gestion ombre */
    $("#miseAJour").click(changerOmbre);
     $("#miseAJour").click(changerTexte);
    /*Gestion texte*/
    $("#miseAJour").click(changerDiv);


});


