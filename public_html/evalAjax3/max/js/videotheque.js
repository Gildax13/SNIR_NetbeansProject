// genere la liste déroulante des genres des acteurs
function genererListeActeurs() {
    $.getJSON('php/controleur.php', {

        'commande': 'getActeurs'

    })
            .done(function (donnees, stat, xhr) {
                // génération de la liste déroulante des utilisateurs
                $("#acteurs").append($('<option>', {value: -1}).text("Selectionner un acteur"));
                $.each(donnees, function (index, ligne) {

                    $("#acteurs").append($('<option>', {value: ligne.idActeur}).text(ligne.nomActeur + " " + ligne.prenomActeur));
                });
            })
            .fail(function (xhr, text, error) {
                console.log("param : " + JSON.stringify(xhr));
                console.log("status : " + text);
                console.log("error : " + error);
            });

}
// rempli le tableau ayant pour id films en fonction de l'id du film sélectionné
function genereTableauFilms()
{$("#films tbody").empty();  // vider le tableau des films
    var idActeur = $(this).val(); // on récupère la valeur de la clef primaire correspondant à l'acteur sélectionné
    $.getJSON('php/controleur.php', {

        'commande': 'getFilms',
        'idActeur': idActeur

    })
            .done(function (donnees, stat, xhr) {
                // génération de la liste déroulante des utilisateurs

                $.each(donnees, function (index, ligne) {

                    $("#films").append("<tr><td>" + ligne.acteur + "</td><td>" + ligne.film + "</td><td>" + ligne.genre + "</td></tr>");
                });
            })
            .fail(function (xhr, text, error) {
                console.log("param : " + JSON.stringify(xhr));
                console.log("status : " + text);
                console.log("error : " + error);
            });



}

$(document).ready(function ()
{
    // generation de la liste deroulante des acteurs
    genererListeActeurs();

    // association entre l'événement change sur l'élément ayant pour id acteurs et l'appel de la fonction genereTableauFilms
    $("#acteurs").change(genereTableauFilms);

});
