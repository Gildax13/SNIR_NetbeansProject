<?php

if(isset($_COOKIE["CookieChoco"])){
    $nom = $_COOKIE["CookieChoco"];
    $tab =explode(' ',$nom);
}

?>

<!DOCTYPE html>

<html>
    <head>
        <title>TODO supply a title</title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <script src="js/libs/jquery/jquery.js" type="text/javascript"></script>
        <script src="formddn.js" type="text/javascript"></script>
    </head>
    <body>
        <div>
            <form id="formulaireNaissance" method="GET" action="
                  ............traitement.php">
                <label for="nom" > Nom</label>                    
                <input type="text" name="nom" id="nom" required="required" value="<?= $tab[0];?>"/><br/>
                <label for="nom" > Prénom</label>                
                <input type="text" name="prenom" id="prenom" required="required" value="<?= $tab[1];?>"/><br/>
                <label for="nom" > Date de naissance (AAAA-MM-JJ)</label>                
                <input type="date" name="ddn" id="ddn" required="required"/><br/>
                <input type="submit" name="envoyer" />
            </form>
        </div>
    </body>
</html>


