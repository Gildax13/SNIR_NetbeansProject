<!DOCTYPE html>
<html>
    <head>
        <title>Formulaire CP -> département</title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
    </head>
    <body>
        <?php
            require_once './fonctions_france.inc.php';
            afficherNomDepartementFromNumero($_POST['departement']);

        ?>
        
    </body>
</html>
