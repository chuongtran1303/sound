
<?php
$log_file = 'sound_log.txt';
$data = $_POST['data'];
$today = date("Y-m-d H:i:s");
$str = $today.', '.$data."\n"; //default_timezone
if(file_exists($log_file)){
    $fp=fopen($log_file,"a"); //open the file as append mode
    fwrite($fp, $str);
    fclose($fp);
    }else{ // open the new file because the file doesn't exist
            $fp = fopen($log_file, "w");
            fwrite($fp, $str);
            fclose($fp);
    }
    echo "Data is stored\n";
    ?>

