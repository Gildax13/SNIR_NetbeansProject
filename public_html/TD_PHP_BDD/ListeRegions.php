
<!DOCTYPE html>
<html>
    <head>
        <title>Formulaire CP -> département</title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
    </head>
    <body>
        <form action="gestion_region.php" method="GET">
            <?php
            require_once './fonctions_france.inc.php';
            listeDeroulante();
            ?>
            <button type="submit" id="Envoyer" name="Send">Envoyer</button>
        </form>

    </body>
</html>
