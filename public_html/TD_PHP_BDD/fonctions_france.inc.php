<?php

define("SERVEURBD", "172.18.58.7");
define("LOGIN", "snir");
define("MOTDEPASSE", "snir");
define("NOMDELABASE", "france2015");

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

function getNomDepartementFromVille($ville) {
    try {
// connexion au serveur de base de données et sélection de la base de données
        $bdd = connexionBdd();
// préparation de la requete paramétrée
        $requete = $bdd->prepare("select departement_nom from villes, departements where departements.departement_id=villes.ville_departement_id and ville_nom like :laville ;");
// remplacement des variables de la requête par les valeurs effectives
        $requete->bindParam(":laville", $ville);
//execution de la requête
        $requete->execute();
// récupération du nombre de ligne retourné par la requête
        $nbLigne = $requete->rowCount();
        if ($nbLigne == 0) {    // si pas de correspondance de nom de ville
            $nomDep = "pas de departement correspondant";
        }
        if ($nbLigne == 1) {    // si une seule correspondance de nom de ville
            $nomDep = $requete->fetchColumn(0);
        }
        if ($nbLigne > 1) { // si plusieurs correspondance de nom de ville
            $nomDep = "";
            while ($ligne = $requete->fetch()) {
                $nomDep = $nomDep . "<br/>" . $ligne['departement_nom'];
            }
        }
//libération des ressources de la requête
        $requete->closeCursor();
//retourner la chaine de correspondant au(x) departement(s) de la ville
        return $nomDep;
    } catch (PDOException $ex) {    // traitemement des erreurs
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}

function afficheRegions() {
    try {
// connexion au serveur de base de données et sélection de la base de données
        $bdd = connexionBdd();
// préparation de la requete paramétrée
        $requete = $bdd->query("SELECT region_nom FROM regions");
        echo"<table><tr><th>Nom de la Région</th></tr>";
        while ($ligne = $requete->fetch()) {
            echo"<tr>";
            echo "<td>{$ligne['region_nom']}</td>";
            echo"</tr>";
        }
        echo"<table>";
//libération des ressources de la requête
        $requete->closeCursor();
//retourner la chaine de correspondant au(x) departement(s) de la ville
    } catch (PDOException $ex) {    // traitemement des erreurs
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}

function afficheDepartementsRegions() {
    try {
// connexion au serveur de base de données et sélection de la base de données
        $bdd = connexionBdd();
// préparation de la requete paramétrée
        $requete = $bdd->query("SELECT departement_nom,region_nom FROM regions INNER JOIN departements ON regions.regions_id=departements.departement_region_id ORDER BY region_nom ASC;");
        echo "<table><tr><th> Nom de la région </th><th> Nom du departement </th></tr>";
        while ($ligne = $requete->fetch()) {
            echo "<tr>";
            echo "<td>" . $ligne['region_nom'] . "</td>";
            echo "<td>" . $ligne['departement_nom'] . "</td>";
            echo "</tr>";
        }
        echo"<table>";
//libération des ressources de la requête
        $requete->closeCursor();
//retourner la chaine de correspondant au(x) departement(s) de la ville
    } catch (PDOException $ex) {    // traitemement des erreurs
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}

function afficherNomDepartementFromNumero($departement) {
    try {
        $bdd = connexionBdd();

        $requete = $bdd->prepare("SELECT departement_nom FROM departements WHERE departement_code= :departement;");

        $requete->bindParam(":departement", $departement);
        $requete->execute();

        $ligne = $requete->fetch();
        echo "Le code postale : " . $departement . " est dans le departement : " . $ligne['departement_nom'];
    } catch (Exception $ex) {
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}

function listeDeroulante() {
    try {
// connexion au serveur de base de données et sélection de la base de données
        $bdd = connexionBdd();
        $i = 0;
        echo "<select name = 'listedept'>";


        $requete = $bdd->query("select region_nom,regions_id from regions order by region_nom asc;");
        while ($traitement = $requete->fetch()) {
            echo "<option value='" . $traitement['regions_id'] . "'>" . $traitement['region_nom'] . " </option>";
        }
    } catch (Exception $ex) {
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
    echo "</select>";
}

function afficherDepartement($idRegion) {
    try {
// connexion au serveur de base de données et sélection de la base de données
        $bdd = connexionBdd();
        $requete = $bdd->prepare("SELECT departement_nom,departement_code FROM departements WHERE departement_region_id = :idReg ORDER BY departement_nom ASC");
// remplacement des variables de la requête par les valeurs effectives
        $requete->bindParam(":idReg", $idRegion);
//execution de la requête
        $requete->execute();

        echo "<table><th> Nom du departement </th><th> Code du Departement </th>";
        while ($ligne = $requete->fetch()) {
            echo"<tr>";
            echo"<td></td>";
            echo"<td></td>";
            echo"</tr>";
        }
        echo "</table>";
    } catch (Exception $ex) {
        print "Erreur : " . $ex->getMessage() . "<br/>";
        die();
    }
}
