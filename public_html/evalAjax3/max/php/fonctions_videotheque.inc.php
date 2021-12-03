<?php

define("SERVEURBD", "195.221.61.190");
define("LOGIN", "snir");
define("MOTDEPASSE", "snir");
define("NOMDELABASE", "videotheque");

/**
 * @brief crée la connexion avec la base de donnée et retourne l'objet PDO pour manipuler la base
 * @return \PDO
 */
function connexionBdd() {
    try {
        $pdoOptions = array(PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION);
        $bdd = new PDO('mysql:host=' . SERVEURBD . ';dbname=' . NOMDELABASE, LOGIN, MOTDEPASSE, $pdoOptions);
        $bdd->exec("set names utf8");
        return $bdd;
    } catch (PDOException $ex) {
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}

/**
 * @brief retourne un tableau json contenant les id et le nom et le prénom des acteurs
 */
function getListeActeurs() {
    try {
        $bdd = connexionBdd();

        $requete = $bdd->query("SELECT idActeur, nomActeur, prenomActeur FROM acteur");

        $tabActeur = array();

        while ($tab = $requete->fetch()) {
            array_push($tabActeur, array('idActeur' => $tab["idActeur"], 'nomActeur' => $tab["nomActeur"], 'prenomActeur' => $tab["prenomActeur"]));
        }
        $requete->closeCursor();
        header('Content-type : application/json');
        echo json_encode($tabActeur);
    } catch (PDOException $ex) {
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}

/**
 * @brief retourne , sous forme de tableau json, les titres de films et le nom des genres, et le nom de l'acteur en fonction de l'id de l'acteur en parametre
 * @param type $idGenre id de l'acteur dont on veut les films et le genre de film
 */
function getFilmsFromIdActeur($idActeur) {
    try {
        $bdd = connexionBdd();
        $requete = $bdd->prepare("SELECT nomActeur, titre,genreFilm FROM acteur INNER JOIN film ON acteur.idActeur = film.idActeur INNER JOIN genre ON film.idGenre = genre.idGenre WHERE acteur.idActeur = :idacteur");
        
        
        $tabF = array();
       
        $requete->bindParam(":idacteur", $idActeur);
        $requete->execute() or die(print_r($requete->errorInfo()));
        
        while ($tab = $requete->fetch()) {
            // ajout d'une case dans le tableau
            array_push($tabF, array('acteur' => $tab['nomActeur'], 'film' => $tab['titre'], 'genre' => $tab['genreFilm']));
        }
        $requete->closeCursor();
        //on previent qu'on repond en json
        header('Content-Type: application/json');
        // envoyer les données au format json
        echo json_encode($tabF);
    } catch (PDOException $ex) {
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}
