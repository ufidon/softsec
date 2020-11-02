<?php
   if( $_GET["to"] && $_GET["amount"] ) {
    echo "You are going to transfer " . $_GET['amount']. " to account ". $_GET['to']. "<br />";
    exit();
   }
?>

<!DOCTYPE html>
<html>
   <head>
      <title> Bank money transfer by GET</title>
   </head>
   <body>
      <h1> Money transfer by GET</h1>
      <form action = "<?php $_PHP_SELF ?>" method = "GET">
         To account: <input type = "text" name = "to" />
         Amount: <input type = "text" name = "amount" />
         <input type = "submit" />
      </form>
      
   </body>
</html>