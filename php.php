<?php

$before = microtime(true);

$f = fopen('output.txt', 'w');

for ($x = 1; $x < 100001; $x++) {
    echo "$x\n";
    fwrite($f, "$x\n");
}

fclose($f);

$elapsed = round(microtime(true) - $before,3);

echo "$elapsed";
?>