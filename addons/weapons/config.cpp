class CfgPatches
{
    class HCA_Weapons
    {
        author= "HCA Aux Team";
        requiredAddos[]=
        {
			"JMSLLTE_scum"
        };
        weapons[]=
        {
			"HCA_a280",
			"HCA_a280stock",
			"HCA_a280c",
			"HCA_a280cr",
			"HCA_A300",
			"HCA_A300c",
			"HCA_EE_3",
			"HCA_DLT_19",
			"HCA_rt97c",
			"HCA_A180pistol",
			"HCA_dl18pistol",
			"HCA_dl44pistol",
			"HCA_ec17pistol",
			"HCA_relbyk23pistol",
			"HCA_rk3pistol",
			"HCA_Bryarpistol",
			"HCA_HH12"

        };
        units[]=
        {

        };
		magazines[]=
		{
			"HCA_Magazine_Core",
			"HCA_Magazine_A280_Uni",
			"HCA_Magazine_A300_Uni",
			"HCA_Magazine_EE_3",
			"HCA_Magazine_DLT_19",
			"HCA_Magazine_rt97c",
			"HCA_Magazine_class_A",
			"HCA_Magazine_class_B"

		};
    };
};

class CfgAmmo
{

///////vanilla ammo stuff
	class B_556x45_Ball_Tracer_Red;
	class HCA_556_ammo: B_556x45_Ball_Tracer_Red
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		ExplosionEffects="JLTS_ImpactPlasma";
		effectFly="3AS_PlasmaBolt_red_Fly";
		flaresize=5;
		tracerscale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};
	class B_762x51_Tracer_Red;
	class HCA_762_ammo: B_762x51_Tracer_Red
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		ExplosionEffects="JLTS_ImpactPlasma";
		effectFly="3AS_PlasmaBolt_red_Fly";
		flaresize=5;
		tracerscale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};
	class B_338_Ball;
	class HCA_338_ammo: B_338_Ball
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		ExplosionEffects="JLTS_ImpactPlasma";
		effectFly="3AS_PlasmaBolt_red_Fly";
		flaresize=5;
		tracerscale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};

	//pistol ammo
	class B_45ACP_Ball;
	class HCA_45_ammo: B_45ACP_Ball
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		ExplosionEffects="JLTS_ImpactPlasma";
		effectFly="3AS_PlasmaBolt_red_Fly";
		flaresize=5;
		tracerscale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};
	class B_9x21_Ball_Tracer_Red;
	class HCA_9mm_ammo: B_9x21_Ball_Tracer_Red
	{
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		ExplosionEffects="JLTS_ImpactPlasma";
		effectFly="3AS_PlasmaBolt_red_Fly";
		flaresize=5;
		tracerscale=1;
		tracerStartTime=0;
		tracerEndTime=10;
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="JLTS_ImpactPlasma";
			hitGlassArmored="JLTS_ImpactPlasma";
			hitWood="JLTS_ImpactPlasma";
			hitMetal="JLTS_ImpactPlasma";
			hitMetalPlate="JLTS_ImpactPlasma";
			hitBuilding="JLTS_ImpactPlasma";
			hitPlastic="JLTS_ImpactPlasma";
			hitRubber="JLTS_ImpactPlasma";
			hitTyre="JLTS_ImpactPlasma";
			hitConcrete="JLTS_ImpactPlasma";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactMetal";
			hitHay="ImpactHay";
		};
	};
};

class CfgMagazines
{
	//calls for bryar
	class ACE_HuntIR_M203;
	class ACE_40mm_Flare_ir;
	class ACE_40mm_Flare_red;
	class ACE_40mm_Flare_green;
	class ACE_40mm_Flare_white;
	class 1Rnd_SmokeYellow_Grenade_shell;
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokePurple_Grenade_shell;
	class 1Rnd_SmokeOrange_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class 1Rnd_SmokeBlue_Grenade_shell;

	class Default;
	class CA_Magazine: Default
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
	};


    class HCA_Magazine_Core: CA_Magazine
    {
		picture="\JMSLLTE_weapons\mags\ui\E11_Mag.paa";
        author="Queen";
		scope=0;
		displayName="Dev Mag";
		ammo="HCA_Ammo_Core";
		count=30;
        mass=10;
		initspeed=1500;
		tracersEvery=1;
		lastRoundsTracer=16;
		descriptionShort="Standard charge cell.";
    };
	class HCA_Magazine_A280_Uni: HCA_Magazine_Core
	{
		author="Queen";
		scope=2;
		displayName="Universal A280 Mag";
		ammo="HCA_556_ammo";
		count=35;
       	mass=10;
		initspeed=756; ///556 speed
		tracersEvery=1;
		lastRoundsTracer=35;
		descriptionShort="35rnd A280 Magazine.";
        displayNameShort="35rnd A280.";
	};
	class HCA_Magazine_A300_Uni: HCA_Magazine_Core
	{
		author="Queen";
		scope=2;
		displayName="Universal A300 Mag";
		ammo="HCA_762_ammo";
		count=25;
       	mass=16;
		initspeed=850; //762 speed
		tracersEvery=1;
		lastRoundsTracer=25;
		descriptionShort="25rnd A300 Magazine.";
        displayNameShort="25rnd A300.";
	};
	class HCA_Magazine_EE_3: HCA_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "EE-3 Mag";
		ammo="HCA_556_ammo";
		count=30;
       	mass=10;
		initspeed=756;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="30rnd EE-3 Magazine.";
        displayNameShort="30rnd EE-3.";
	};
	class HCA_Magazine_DLT_19: HCA_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "DLT-19 Mag";
		ammo="HCA_762_ammo";
		count=100;
       	mass=36;
		initspeed=850;
		tracersEvery=1;
		lastRoundsTracer=100;
		descriptionShort="100rd DLT-19 Magazine.";
        displayNameShort="100rd DLT-19.";
	};
	class HCA_Magazine_rt97c: HCA_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "RT97C Mag";
		ammo="HCA_556_ammo";
		count=150;
       	mass=40;
		initspeed=756;
		tracersEvery=1;
		lastRoundsTracer=75;
		descriptionShort="150rd RT97C Magazine.";
        displayNameShort="150rd RT97C.";
	};
	class HCA_Magazine_T21B: HCA_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "T21B Mag";
		ammo="HCA_338_ammo";
		count=60;
       	mass=25;
		initspeed=850;
		tracersEvery=1;
		lastRoundsTracer=50;
		descriptionShort="50rd T21B Magazine.";
        displayNameShort="50rd T21B.";
	};
	//pistol Mags
	class HCA_Magazine_class_A: HCA_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "Class A Blaster Cartridge";
		ammo="HCA_9mm_ammo";
		count=16;
       	mass=8;
		initspeed=360; //9mm speed
		tracersEvery=1;
		lastRoundsTracer=50;
		descriptionShort="16rd Class A Magazine.";
        displayNameShort="16rd Class A.";
	};
	class HCA_Magazine_class_B: HCA_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "Class B Blaster Cartridge";
		ammo="HCA_45_ammo";
		count=10;
       	mass=8;
		initspeed=255; //.45 speed
		tracersEvery=1;
		lastRoundsTracer=50;
		descriptionShort="10rd Class B Magazine.";
        displayNameShort="10rd Class B.";
	};
};
class CfgWeapons
{
	//Weapons
	class JMSLLTE_a280;
	class JMSLLTE_a280stock;
	class JMSLLTE_a280c;
	class JMSLLTE_a280cr;
	class JMSLLTE_a300;
	class JMSLLTE_a300c;
	class JMSLLTE_HH12_launcher;
	class JMSLLTE_ee3;
	class JMSLLTE_T21BlasterRifle;
	class JMSLLTE_DLT19BlasterRifle;
	class JMSLLTE_rt97cBlasterRifle;
	class JMSLLTE_K16pistol;
	//Rifles
	class HCA_a280: JMSLLTE_a280
	{
		author = "Queen";
		displayName = "[HCA] A280 Blaster Rifle";
		magazines[]=
		{
			"HCA_Magazine_A280_Uni"
		};
		initspeed=756;
	};
	class HCA_a280stock: JMSLLTE_a280stock
	{
		author = "Queen";
		displayName = "[HCA] A280 Blaster Rifle w/ stock";
		magazines[]=
		{
			"HCA_Magazine_A280_Uni"
		};
		initspeed=756;
	};
	class HCA_a280c: JMSLLTE_a280c
	{
		author = "Queen";
		displayName = "[HCA] A280c Blaster Rifle";
		magazines[]=
		{
			"HCA_Magazine_A280_Uni"
		};
		initspeed=756;
	};
	class HCA_a280cr: JMSLLTE_a280cr
	{
		author = "Queen";
		displayName = "[HCA] A295 Blaster Rifle";
		magazines[]=
		{
			"HCA_Magazine_A280_Uni"
		};
		initspeed=756;
	};
	class HCA_A300: JMSLLTE_a300
	{
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		author = "Queen";
		displayName = "[HCA] A300 Blaster Rifle";
		magazines[]=
		{
			"HCA_Magazine_A300_Uni"
		};
		initspeed=850;

	};
	class HCA_A300c: JMSLLTE_a300c
	{
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		author = "Queen";
		displayName = "[HCA] A300 Blaster Carbine";
		magazines[]=
		{
			"HCA_Magazine_A300_Uni"
		};
		initspeed=850;
	};
	class HCA_T21: JMSLLTE_T21BlasterRifle
	{
		author = "George";
		displayName = "[HCA] T21-B Blaster Rifles";
		magazines[]=
		{
			"HCA_Magazine_T21B"
		};
		initspeed=756;
	};
	class HCA_DLT_19: JMSLLTE_DLT19BlasterRifle
	{
		baseWeapon="HCA_DLT_19";
		_generalMacro="HCA_DLT_19";
		author="George";
		displayName="[HCA] DLT-19 Heavy Blaster Rifle";
		magazines[]=
		{
			"HCA_Magazine_DLT_19"
		};
		initspeed=850;
	};
	class HCA_rt97c: JMSLLTE_rt97cBlasterRifle
	{
		baseWeapon="HCA_rt97c";
		_generalMacro="HCA_rt97c";
		scope= 2;
		author="George";
		displayName="[HCA] RT97C Heavy Blaster Rifle";
		magazines[]=
		{
			"HCA_Magazine_rt97c"
		};
		initspeed=756;
	};
	class HCA_EE_3: JMSLLTE_ee3
	{
		author = "George";
		displayName = "[HCA] EE-3 Blaster Carbine";
		magazines[]=
		{
			"HCA_Magazine_EE_3"
		};
		initspeed=756;
	};

	//pistols
	class 3AS_A180_F;
	class JMSLLTE_dl18pistol;
	class JMSLLTE_dl44pistol;
	class JMSLLTE_ec17pistol;
	class JMSLLTE_relbyk23pistol;
	class JMSLLTE_rk3pistol;
	class HCA_A180pistol: 3AS_A180_F
	{
		author = "George";
		displayName = "[HCA] A180 Blaster Pistol";
		magazines[]=
		{
			"HCA_Magazine_class_A"
		};
		initspeed=360; //9mm speed
	};
	class HCA_dl18pistol: JMSLLTE_dl18pistol
	{
		author = "George";
		displayName = "[HCA] DL-18 Blaster Pistol";
		magazines[]=
		{
			"HCA_Magazine_class_A"
		};
		initspeed=360; //9mm speed
	};
	class HCA_dl44pistol: JMSLLTE_dl44pistol
	{
		author = "George";
		displayName = "[HCA] DL-44 Heavy Blaster Pistol";
		magazines[]=
		{
			"HCA_Magazine_class_B"
		};
		initspeed=255; //.45 speed
	};
	class HCA_ec17pistol: JMSLLTE_ec17pistol
	{
		author = "George";
		displayName = "[HCA] EC-17 Holdout Blaster";
		magazines[]=
		{
			"HCA_Magazine_class_A"
		};
		initspeed=360; //9mm speed
	};
	class HCA_relbyk23pistol: JMSLLTE_relbyk23pistol
	{
		author = "George";
		displayName = "[HCA] Relby K-23 Blaster Pistol";
		magazines[]=
		{
			"HCA_Magazine_class_B"
		};
		initspeed=255; //.45 speed
	};
	class HCA_rk3pistol: JMSLLTE_rk3pistol
	{
		author = "George";
		displayName = "[HCA] RK-3 Blaster Pistol";
		magazines[]=
		{
			"HCA_Magazine_class_A"
		};
		initspeed=360; //9mm speed
	};
	//Launchers
	class HCA_HH12: JMSLLTE_HH12_launcher
	{
		author = "Queen";
		displayName = "[HCA] HH-12";
		
	};
	class HCA_Bryarpistol: JMSLLTE_K16pistol
	{
		
		author = "George";
		displayName = "[HCA] Bryar Blaster Pistol";
		magazines[]=
		{
			"ACE_HuntIR_M203",
			"ACE_40mm_Flare_ir",
			"ACE_40mm_Flare_red",
			"ACE_40mm_Flare_green",
			"ACE_40mm_Flare_white",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell"
		};
		initspeed=80; //40mm speed
	};
};
