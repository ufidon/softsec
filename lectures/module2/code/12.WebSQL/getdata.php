<?php
/* check: login.html
 * prerequisite: dbtest database created with dbtest.sql
 */
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

   $conn = new mysqli("localhost", "root", "seedubuntu", "dbtest");
   $sql = "SELECT Name, Salary, SSN             
           FROM employee
           WHERE eid= '$eid' and password='$pwd'";  

   echo "<h1> processed by getdata.php </h1>";
   echo "<h2> the login info </h2>";
   echo "EID: ". $eid;
   echo "<br>";   
   echo "Password: ". $pwd;
   echo "<br>";    
   echo "<h2> the sql statement </h2>";
   echo "SQL: " . $sql;
   echo "<br>";

   $result = $conn->query($sql);
   if ($result) {
      // Print out the result
   		echo "<h2> retrieved records </h2>";
      while ($row = $result->fetch_assoc()) {
        printf ("Name: %s -- Salary: %s -- SSN: %s\n",$row["Name"], $row["Salary"], $row['SSN']);
        echo "<br>";
      }
      $result->free();
   }
   $conn->close();
?>

