<?php

require_once './fonctions_videotheque.inc.php';
// test de la méthode d'envois des données
if (filter_input(INPUT_SERVER, 'REQUEST_METHOD') === 'GET') {
    // récupération de la donnée 'commande'
    $commande = filter_input(INPUT_GET, 'commande');
    switch ($commande) {
        case 'getActeurs' :
            // appel de la fonction retournant la liste des acteurs
            getListeActeurs();
            break;
        case 'getFilms' :
            // récupération de l'id de l'acteur
            $id = $_GET['idActeur'];
           
            // appel de la fonction retournant le tableau json avec le nom de l'acteur, le nom des genres et les titres de film
            getFilmsFromIdActeur($id);
            break;       
        default:
            header('Content-Type: application/json');
            echo json_encode("commande inconnue");
    }
}



