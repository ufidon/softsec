<?php
/* check: login.html
 * prerequisite: dbtest database created with dbtest.sql
 */

   $conn = new mysqli("localhost", "root", "seedubuntu", "dbtest");
   $sql = "SELECT Name, Salary, SSN
           FROM employee
           WHERE eid= ? and password=?";  

   $eid = $_GET['EID'];
   $pwd = $_GET['Password'];

   echo "<h1> processed by getdata_prepare.php </h1>";
   echo "<h2> the login info </h2>";
   echo "EID: ". $eid;
   echo "<br>";   
   echo "Password: ". $pwd;
   echo "<br>";    
   echo "<h2> the sql statement </h2>";
   echo "SQL: " . $sql;
   echo "<br>";

   if ($stmt = $conn->prepare($sql)) {               
      $stmt->bind_param("ss", $eid, $pwd);          
      $stmt->execute();                             
      $stmt->bind_result($name, $salary, $ssn);  

      echo "<h2> retrieved records </h2>";    
      while ($stmt->fetch()) {   
      	                   
         printf ("%s -- %s -- %s\n", $name, $salary, $ssn);
         echo "<br>";
      }

      $stmt->free();
   }
   $conn->close();
?>
