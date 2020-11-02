<?php
   if( $_POST["to"] && $_POST["amount"] ) {
    echo "You are going to transfer " . $_POST['amount']. " to account ". $_POST['to']. "<br />";
    exit();
   }
?>

<!DOCTYPE html>
<html>
   <head>
      <title> Bank money transfer by POST </title>
   </head>
   <body>
      <h1> Money transfer by POST </h1>
      <form action = "<?php $_PHP_SELF ?>" method = "POST">
         To account: <input type = "text" name = "to" />
         Amount: <input type = "text" name = "amount" />
         <input type = "submit" />
      </form>
      
   </body>
</html>