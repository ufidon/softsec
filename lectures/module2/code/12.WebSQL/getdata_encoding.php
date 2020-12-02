<?php
/* check: login.html
 * prerequisite: dbtest database created with dbtest.sql
 */
   $conn = new mysqli("localhost", "root", "seedubuntu", "dbtest");
	if ($conn->connect_error) {
         die("Connection failed: " . $conn->connect_error . "\n");
         return $conn;
     }
     

   //echo "database connected.\n";
   //echo "<br>";

   //$eid = $_GET['EID'];
   //$pwd = $_GET['Password'];

   $eid = $conn->real_escape_string($_GET['EID']);         
   $pwd = $conn->real_escape_string($_GET['Password']); 

	
    
   $sql = "SELECT Name, Salary, SSN
           FROM employee
           WHERE eid= '$eid' and password='$pwd'";

   echo "<h1> processed by getdata_encoding.php </h1>";
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

