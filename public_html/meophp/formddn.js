
function verifierDate(event)
{
    // date doit etre au format JJ/MM/AAAA
    // limite du regexp:
    // 0000/00/00 est valide
    // 9999/12/39 est valide
    var schemaDate = new RegExp("^[0-9]{4}-[0-1]{1}[0-9]{1}-[0-3]{1}[0-9]{1}$", "g");

    var date=$("#ddn").val();
    // si la date ne correspond pas au schema
    if (!schemaDate.test(date))
    {
        event.preventDefault();
        $("#ddn").next('p').remove();
        $("<p style='color:red;display:inline'>La date doit etre au format JJ/MM/AAAA</p>").insertAfter($("#ddn"));
    }
    
    
}
$(document).ready(function(){
    $("#formulaireNaissance").submit(verifierDate);
    
});

