<!DOCTYPE html>
<html>
    <head>
        <title>Afficher les départements et les régions</title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <style>
            table,td,tr,th{
                border: 1px black ridge;
                
            }
            
            td {
                text-align: center;
            }
            table{
           
                border-collapse: collapse;
            }
           
        </style>
    </head>
    <body>
        <?php
            require_once './fonctions_france.inc.php';
            afficheDepartementsRegions();
        ?>

    </body>
</html>
