<?php
/* check: changepw.html
 * prerequisite: dbtest database created with dbtest.sql
 */

   $eid = $_POST['EID'];
   $oldpwd = $_POST['OldPassword'];
   $newpwd = $_POST['NewPassword'];


   $conn = new mysqli("10.9.0.6", "root", "dees", "dbtest");

   if ($conn) {
     echo "dbtest connected\n";
     echo "<br>";
   }

   $sql = "UPDATE employee      
           SET password='$newpwd' 
           WHERE eid= '$eid' and password='$oldpwd'";  

   echo "<h1> processed by changepw.php </h1>";
   echo "<h2> the login info </h2>";
   echo "EID: ". $eid;
   echo "<br>";   
   echo "Old Password: ". $oldpwd;
   echo "<br>";
   echo "New Password: ". $newpwd;
   echo "<br>";       
   echo "<h2> the sql statement </h2>";
   echo "SQL: " . $sql;
   echo "<br><br>";
   echo "THIS SQL statement is NOT the one exactly executed, THE ONE executed has three LINES? like this:";
   echo "<br>";
   echo "UPDATE employee<br>";
   echo "SET password='$newpwd'<br>";
   echo "WHERE eid= '$eid' and password='$oldpwd'<br>";

   $result = $conn->query($sql);
   //$result = $conn->multi_query($sql);


   if (!$result) {
    echo "Error executing query: (". $conn->errno . ")" . $conn->error;
   }
   $result->free();
   $conn->close();
?>

