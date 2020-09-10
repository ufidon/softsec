<?php

function getParam(){
  $arg = NULL;
  if(isset($_GET["arg"]) && !empty($_GET["arg"])){
    $arg = $_GET["arg"];
  }
  return $arg;
}

$arg = getParam();
putenv("ARG=$arg");
system("strings /proc/$$/environ | grep ARG");

?>