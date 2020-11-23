<?php
   function getDB() {
     $dbhost="localhost";
     $dbuser="root";
     $dbpass="seedubuntu";
     $dbname="dbtest";

     // Create a DB connection
     $conn = new mysqli($dbhost, $dbuser, $dbpass, $dbname);
     if ($conn->connect_error) {
         die("Connection failed: " . $conn->connect_error . "\n");
     }
     return $conn;
   }

   $eid = $_GET['EID'];
   $pwd = $_GET['Password'];

   echo "EID: $eid --- Pass: $pwd logged in. \n";

   $conn = new mysqli("localhost", "root", "seedubuntu", "dbtest");
   if ($conn) {
     echo "dbtest connected\n";
   }

   $sql = "SELECT Name, salary, ssn             
           FROM employee
           WHERE eid= '$eid' and password='$pwd'";  

    echo "SQL: $sql\n";

   $result = $conn->query($sql);


   if ($result) {
      echo "result retrieved\n";
      // Print out the result
      while ($row = $result->fetch_assoc()) {
        printf ("Name: %s -- salary: %s -- ssn: %s\n",
                $row["Name"], $row["salary"], $row['ssn']);
      }
      $result->free();
   }
   $conn->close();
?>

