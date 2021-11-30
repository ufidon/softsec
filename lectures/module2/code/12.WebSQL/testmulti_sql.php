<?php
/* testmulti_sql.php
 * prerequisite: dbtest database created with dbtest.sql
 * copy this file to /var/www/html
 * then access it from browser: http://localhost/testmulti_sql.php
 */

$mysqli = new mysqli("10.9.0.6", "root", "dees", "dbtest");
$res    = $mysqli->query("SELECT 1; DROP DATABASE dbtest");
if (!$res) {
  echo "Error executing query: (" .
        $mysqli->errno . ") " . $mysqli->error;
}

$res->free();
$conn->close();
?>

