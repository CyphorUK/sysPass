<div ID='debuginfo' class='round'>
    <h3>DEBUG INFO</h3>
    <ul>
        <li>RENDER -> <?php use SP\Config;
            use SP\Crypt;

            echo $time; ?> sec</li>
        <li>MEM -> Init: <?php echo $memInit; ?> KB - End: <?php echo $memEnd; ?> KB -
            Total: <?php echo $memEnd - $memInit; ?> KB
        </li>
        <li>SESSION:
            <pre><?php echo print_r($_SESSION, true) ?></pre>
        </li>
        <li>MASTER PASS: <?php echo Crypt::getSessionMasterPass(); ?></li>
        <li>CONFIG FILE:
            <pre><?php echo print_r(Config::getKeys(true), true); ?></pre>
        </li>
</div>

<?php //foreach ($debugTxt as $out): ?>
<!--    --><?php //echo $out; ?>
<?php //endforeach; ?>