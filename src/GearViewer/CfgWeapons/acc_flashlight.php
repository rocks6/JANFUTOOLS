<!DOCTYPE html>
<html>

<head>
    <title>Test java HTML</title>
    <link rel="stylesheet" type="text/css" href="../css/style.css">
</head>

<?php
function debug_to_console( $data ) {
    $output = $data;
    if ( is_array( $output ) )
        $output = implode( ',', $output);

    echo "<script>console.log( 'Debug Objects: " . $output . "' );</script>";
}

ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

// get image name
$dom = new DOMDocument();
$dom->loadHTMLFile(__FILE__);
$table = $dom->getElementsByTagName('th');
$imgName = substr(explode(' ', $table[0]->nodeValue)[0], 0, -1) . ".png";


?>

<body>

    <div class="main">
		<!--$body-->
		<table>

			<tr><th>acc_flashlight: <a href="ItemCore.html">ItemCore</a></th></tr>
			<tr><td><img src="<?php echo $imgName; ?>" alt="<?php echo $imgName; ?>" width="400px" height="200px"></td></tr>
			<tr><td>_generalMacro="acc_flashlight"</td></tr>
			<tr><td>access=3</td></tr>
			<tr><td>aiDispersionCoefX=1</td></tr>
			<tr><td>aiDispersionCoefY=1</td></tr>
			<tr><td>aimTransitionSpeed=1</td></tr>
			<tr><td>aiRateOfFire=5</td></tr>
			<tr><td>aiRateOfFireDispersion=0</td></tr>
			<tr><td>aiRateOfFireDistance=500</td></tr>
			<tr><td>ammo=""</td></tr>
			<tr><td><a href="ItemCore\Armory.html">Armory</a></td></tr>
			<tr><td>artilleryCharge=1</td></tr>
			<tr><td>artilleryDispersion=1</td></tr>
			<tr><td>author="Bohemia Interactive"</td></tr>
			<tr><td>autoFire=0</td></tr>
			<tr><td>autoReload=1</td></tr>
			<tr><td>backgroundReload=0</td></tr>
			<tr><td>ballisticsComputer=0</td></tr>
			<tr><td>burst=1</td></tr>
			<tr><td>canDrop=1</td></tr>
			<tr><td>canLock=2</td></tr>
			<tr><td>canShootInWater=0</td></tr>
			<tr><td>cartridgePos="nabojnicestart"</td></tr>
			<tr><td>cartridgeVel="nabojniceend"</td></tr>
			<tr><td>changeFiremodeSound=["",1,1]</td></tr>
			<tr><td>cmImmunity=1</td></tr>
			<tr><td>count=0</td></tr>
			<tr><td>cursor=""</td></tr>
			<tr><td>cursorAim=""</td></tr>
			<tr><td>cursorAimOn=""</td></tr>
			<tr><td>cursorSize=1</td></tr>
			<tr><td>descriptionShort="Weapon mounted light."</td></tr>
			<tr><td>descriptionUse="<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF"</td></tr>
			<tr><td>detectRange=0</td></tr>
			<tr><td>dispersion=0.002</td></tr>
			<tr><td>displayName="UTG Defender 126"</td></tr>
			<tr><td>distanceZoomMax=400</td></tr>
			<tr><td>distanceZoomMin=400</td></tr>
			<tr><td>drySound=["",1,1]</td></tr>
			<tr><td>emptySound=["",1,1]</td></tr>
			<tr><td>enableAttack=1</td></tr>
			<tr><td><a href="Default\Eventhandlers.html">Eventhandlers</a></td></tr>
			<tr><td>ffCount=1</td></tr>
			<tr><td>ffFrequency=1</td></tr>
			<tr><td>ffMagnitude=0</td></tr>
			<tr><td>fireAnims=[]</td></tr>
			<tr><td>fireLightAmbient=[0,0,0]</td></tr>
			<tr><td>fireLightDiffuse=[0.937,0.631,0.259]</td></tr>
			<tr><td>fireLightDuration=0.05</td></tr>
			<tr><td>fireLightIntensity=0.2</td></tr>
			<tr><td>fireSpreadAngle=3</td></tr>
			<tr><td>forceOptics=0</td></tr>
			<tr><td><a href="Default\GunClouds.html">GunClouds</a></td></tr>
			<tr><td><a href="Default\GunFire.html">GunFire</a></td></tr>
			<tr><td>handAnim=[]</td></tr>
			<tr><td>hiddenSelections=[]</td></tr>
			<tr><td>hiddenSelectionsTextures=[]</td></tr>
			<tr><td>hiddenUnderwaterSelections=[]</td></tr>
			<tr><td>hiddenUnderwaterSelectionsTextures=[]</td></tr>
			<tr><td>inertia=0.1</td></tr>
			<tr><td>initSpeed=0</td></tr>
			<tr><td>irDistance=0</td></tr>
			<tr><td>irDotIntensity=0.001</td></tr>
			<tr><td>irLaserEnd="laser dir"</td></tr>
			<tr><td>irLaserPos="laser pos"</td></tr>
			<tr><td><a href="acc_flashlight\ItemInfo.html">ItemInfo</a>: <a href="CfgWeapons\InventoryFlashLightItem_Base_F.html">InventoryFlashLightItem_Base_F</a></td></tr>
			<tr><td>laser=0</td></tr>
			<tr><td><a href="Default\Library.html">Library</a></td></tr>
			<tr><td>lockAcquire=1</td></tr>
			<tr><td>lockedTargetSound=["",0.000316228,6]</td></tr>
			<tr><td>lockingTargetSound=["",0.000316228,2]</td></tr>
			<tr><td>magazineReloadSwitchPhase=1</td></tr>
			<tr><td>magazineReloadTime=0</td></tr>
			<tr><td>magazines=[]</td></tr>
			<tr><td>maxRange=500</td></tr>
			<tr><td>maxRangeProbab=0.04</td></tr>
			<tr><td>maxRecoilSway=0.008</td></tr>
			<tr><td>memoryPointCamera="eye"</td></tr>
			<tr><td>midRange=150</td></tr>
			<tr><td>midRangeProbab=0.58</td></tr>
			<tr><td>minRange=1</td></tr>
			<tr><td>minRangeProbab=0.3</td></tr>
			<tr><td>model="\A3\weapons_f\acc\accv_Flashlight_F"</td></tr>
			<tr><td>modelMagazine=""</td></tr>
			<tr><td>modelOptics=""</td></tr>
			<tr><td>modelSpecial=""</td></tr>
			<tr><td>modes=["this"]</td></tr>
			<tr><td>multiplier=1</td></tr>
			<tr><td>muzzleEnd="konec hlavne"</td></tr>
			<tr><td>muzzlePos="usti hlavne"</td></tr>
			<tr><td>muzzles=[]</td></tr>
			<tr><td>nameSound=""</td></tr>
			<tr><td>optics=1</td></tr>
			<tr><td>opticsDisablePeripherialVision=0.67</td></tr>
			<tr><td>opticsFlare=1</td></tr>
			<tr><td>opticsID=0</td></tr>
			<tr><td>opticsPPEffects=[]</td></tr>
			<tr><td>opticsZoomInit=0.75</td></tr>
			<tr><td>opticsZoomMax=1.25</td></tr>
			<tr><td>opticsZoomMin=0.25</td></tr>
			<tr><td>picture="\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa"</td></tr>
			<tr><td>primary=10</td></tr>
			<tr><td>recoil="empty"</td></tr>
			<tr><td>recoilProne=""</td></tr>
			<tr><td>reloadAction=""</td></tr>
			<tr><td>reloadMagazineSound=["",1,1]</td></tr>
			<tr><td>reloadSound=["",1,1]</td></tr>
			<tr><td>reloadTime=1</td></tr>
			<tr><td>scope=2</td></tr>
			<tr><td>selectionFireAnim="zasleh"</td></tr>
			<tr><td>showAimCursorInternal=1</td></tr>
			<tr><td>showEmpty=1</td></tr>
			<tr><td>shownUnderwaterSelections=[]</td></tr>
			<tr><td>showSwitchAction=0</td></tr>
			<tr><td>showToPlayer=1</td></tr>
			<tr><td>simulation="Weapon"</td></tr>
			<tr><td>sound=["",1,1]</td></tr>
			<tr><td>soundBegin=["sound",1]</td></tr>
			<tr><td>soundBeginWater=["sound",1]</td></tr>
			<tr><td>soundBullet=["emptySound",1]</td></tr>
			<tr><td>soundBurst=1</td></tr>
			<tr><td>soundClosure=["sound",1]</td></tr>
			<tr><td>soundContinuous=0</td></tr>
			<tr><td>soundEnd=["sound",1]</td></tr>
			<tr><td>soundLoop=["sound",1]</td></tr>
			<tr><td>swayDecaySpeed=2</td></tr>
			<tr><td>textureType="default"</td></tr>
			<tr><td>type=131072</td></tr>
			<tr><td>uiPicture=""</td></tr>
			<tr><td>useAction=0</td></tr>
			<tr><td>useActionTitle=""</td></tr>
			<tr><td>useAsBinocular=0</td></tr>
			<tr><td>useModelOptics=1</td></tr>
			<tr><td>value=2</td></tr>
			<tr><td>weaponLockDelay=0</td></tr>
			<tr><td>weaponLockSystem=0</td></tr>
			<tr><td>weaponSoundEffect=""</td></tr>
			<tr><td>weight=0</td></tr>
			<tr><td>zeroingSound=["",1,1]</td></tr>
		</table>
    </div>

</body>

</html>
