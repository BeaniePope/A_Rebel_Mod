class CfgPatches
{
    class HC_Weapons
    {
        author= "HC Aux Team"
        requiredAddos[]=
        {
			"JMSLLTE_scum"
        };
        weapons[]=
        {
			"HC_a280",
			"HC_a280stock",
			"HC_a280c",
			"HC_a280cr",
			"HC_A300",
			"HC_A300c",
			"HC_EE_3",
			"HC_DLT_19",
			"HC_rt97c",
			"HC_A180pistol",
			"HC_dl18pistol",
			"HC_dl44pistol",
			"HC_ec17pistol",
			"HC_relbyk23pistol",
			"HC_rk3pistol",
			"HC_HH12"

        };
        units[]=
        {

        };
		magazines[]=
		{
			"HC_Magazine_Core",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A300_Uni",
			"HC_Magazine_EE_3",
			"HC_Magazine_DLT_19",
			"HC_Magazine_rt97c",
			"HC_Magazine_class_A",
			"HC_Magazine_class_B",
			"HC_RPS_Mag",
			"HC_RPS_Mag_HE"
		};
    };
};

class CfgAmmo
{
	class JLTS_bullet_rifle_red;
	class JMSLLTE_RPS10_Ammo;
	class JMSLLTE_RPS10_HE_Ammo;
//launcher ammo
	class HC_RPS_Ammo: JMSLLTE_RPS10_Ammo
	{
		scope = 2;
		allowAgainstInfantry=1;
		thrust=0.3;
		maxSpeed = 300;
	};
	class HC_RPS_Ammo_HE: JMSLLTE_RPS10_HE_Ammo
	{
		scope = 2;
		allowAgainstInfantry=1;
		thrust=0.3;
		maxSpeed = 300;
	};

///////vanilla ammo stuff
	class B_556x45_Ball_Tracer_Red;
	class HC_556_ammo: B_556x45_Ball_Tracer_Red
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
	class HC_762_ammo: B_762x51_Tracer_Red
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
	class HC_338_ammo: B_338_Ball
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
	class HC_45_ammo: B_45ACP_Ball
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
	class HC_9mm_ammo: B_9x21_Ball_Tracer_Red
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
	class Default;
	class CA_Magazine: Default
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
	};
	class JMSLLTE_RPS10_Mag;
	class JMSLLTE_RPS10_HE_Mag;


    class HC_Magazine_Core: CA_Magazine
    {
		picture="\JMSLLTE_weapons\mags\ui\E11_Mag.paa";
        author="Queen";
		scope=0;
		displayName="Dev Mag";
		ammo="HC_Ammo_Core";
		count=30;
        mass=10;
		initspeed=1500;
		tracersEvery=1;
		lastRoundsTracer=16;
		descriptionShort="Standard charge cell.";
    };
	class HC_Magazine_A280_Uni: HC_Magazine_Core
	{
		author="Queen";
		scope=2;
		displayName="Universal A280 Mag";
		ammo="HC_556_ammo";
		count=35;
       	mass=10;
		initspeed=756; ///556 speed
		tracersEvery=1;
		lastRoundsTracer=35;
		descriptionShort="35rnd A280 Magazine.";
        displayNameShort="35rnd A280.";
	};
	class HC_Magazine_A300_Uni: HC_Magazine_Core
	{
		author="Queen";
		scope=2;
		displayName="Universal A300 Mag";
		ammo="HC_762_ammo";
		count=25;
       	mass=16;
		initspeed=850; //762 speed
		tracersEvery=1;
		lastRoundsTracer=25;
		descriptionShort="25rnd A300 Magazine.";
        displayNameShort="25rnd A300.";
	};
	class HC_Magazine_EE_3: HC_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "EE-3 Mag";
		ammo="HC_556_ammo";
		count=30;
       	mass=10;
		initspeed=756;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="30rnd EE-3 Magazine.";
        displayNameShort="30rnd EE-3.";
	};
	class HC_Magazine_DLT_19: HC_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "DLT-19 Mag";
		ammo="HC_762_ammo";
		count=100;
       	mass=36;
		initspeed=850;
		tracersEvery=1;
		lastRoundsTracer=100;
		descriptionShort="100rd DLT-19 Magazine.";
        displayNameShort="100rd DLT-19.";
	};
	class HC_Magazine_rt97c: HC_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "RT97C Mag";
		ammo="HC_556_ammo";
		count=150;
       	mass=50;
		initspeed=756;
		tracersEvery=1;
		lastRoundsTracer=75;
		descriptionShort="150rd RT97C Magazine.";
        displayNameShort="150rd RT97C.";
	};
	class HC_Magazine_T21B: HC_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "T21B Mag";
		ammo="HC_338_ammo";
		count=60;
       	mass=25;
		initspeed=850;
		tracersEvery=1;
		lastRoundsTracer=50;
		descriptionShort="50rd T21B Magazine.";
        displayNameShort="50rd T21B.";
	};
	//pistol Mags
	class HC_Magazine_class_A: HC_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "Class A Blaster Cartridge";
		ammo="HC_9mm_ammo";
		count=16;
       	mass=25;
		initspeed=360; //9mm speed
		tracersEvery=1;
		lastRoundsTracer=50;
		descriptionShort="16rd Class A Magazine.";
        displayNameShort="16rd Class A.";
	};
	class HC_Magazine_class_B: HC_Magazine_Core
	{
		author="George";
		scope=2;
		displayName= "Class B Blaster Cartridge";
		ammo="HC_45_ammo";
		count=10;
       	mass=25;
		initspeed=255; //.45 speed
		tracersEvery=1;
		lastRoundsTracer=50;
		descriptionShort="10rd Class B Magazine.";
        displayNameShort="10rd Class B.";
	};


	class HC_RPS_Mag: JMSLLTE_RPS10_Mag
	{
		displayName = "RPS-10 Rocket";
		initSpeed = "500";
	};
	class HC_RPS_Mag_HE: JMSLLTE_RPS10_Mag
	{
		displayName = "RPS-10 Rocket HE";
		initSpeed = "500";
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
	class JMSLLTE_RPS10_launcher;
	class JMSLLTE_HH12_launcher;
	class JMSLLTE_ee3;
	class JMSLLTE_T21BlasterRifle;
	class JMSLLTE_DLT19BlasterRifle;
	class JMSLLTE_rt97cBlasterRifle;
	//Rifles
	class HC_a280: JMSLLTE_a280
	{
		author = "Queen";
		displayName = "[HC] A280 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
		initspeed=756;
	};
	class HC_a280stock: JMSLLTE_a280stock
	{
		author = "Queen";
		displayName = "[HC] A280 Blaster Rifle w/ stock";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
		initspeed=756;
	};
	class HC_a280c: JMSLLTE_a280c
	{
		author = "Queen";
		displayName = "[HC] A280c Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
		initspeed=756;
	};
	class HC_a280cr: JMSLLTE_a280cr
	{
		author = "Queen";
		displayName = "[HC] A295 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
		initspeed=756;
	}
	class HC_A300: JMSLLTE_a300
	{
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		author = "Queen";
		displayName = "[HC] A300 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A300_Uni"
		};
		initspeed=850;

	};
	class HC_A300c: JMSLLTE_a300c
	{
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		author = "Queen";
		displayName = "[HC] A300 Blaster Carbine";
		magazines[]=
		{
			"HC_Magazine_A300_Uni"
		};
		initspeed=850;
	};
	class HC_T21: JMSLLTE_T21BlasterRifle
	{
		author = "George";
		displayName = "[HC] T21-B Blaster Rifles";
		magazines[]=
		{
			"HC_Magazine_T21B"
		};
		initspeed=756;
	};
	class HC_DLT_19: JMSLLTE_DLT19BlasterRifle
	{
		baseWeapon="HC_DLT_19";
		_generalMacro="HC_DLT_19";
		author="George";
		displayName="[HC] DLT-19 Heavy Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_DLT_19"
		};
		initspeed=850;
	};
	class HC_rt97c: JMSLLTE_rt97cBlasterRifle
	{
		baseWeapon="HC_rt97c";
		_generalMacro="HC_rt97c";
		scope= 2;
		author="George";
		displayName="[HC] RT97C Heavy Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_rt97c"
		};
		initspeed=756;
	};
	class HC_EE_3: JMSLLTE_ee3
	{
		author = "George";
		displayName = "[HC] EE-3 Blaster Carbine";
		magazines[]=
		{
			"HC_Magazine_EE_3"
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
	class HC_A180pistol: 3AS_A180_F
	{
		author = "George";
		displayName = "[HC] A180 Blaster Pistol";
		magazines[]=
		{
			"HC_Magazine_class_A"
		};
		initspeed=360; //9mm speed
	};
	class HC_dl18pistol: JMSLLTE_dl18pistol
	{
		author = "George";
		displayName = "[HC] DL-18 Blaster Pistol";
		magazines[]=
		{
			"HC_Magazine_class_A"
		};
		initspeed=360; //9mm speed
	};
	class HC_dl44pistol: JMSLLTE_dl44pistol
	{
		author = "George";
		displayName = "[HC] DL-44 Heavy Blaster Pistol";
		magazines[]=
		{
			"HC_Magazine_class_B"
		};
		initspeed=255; //.45 speed
	};
	class HC_ec17pistol: JMSLLTE_ec17pistol
	{
		author = "George";
		displayName = "[HC] EC-17 Holdout Blaster";
		magazines[]=
		{
			"HC_Magazine_class_B"
		};
		initspeed=360; //9mm speed
	};
	class HC_relbyk23pistol: JMSLLTE_relbyk23pistol
	{
		author = "George";
		displayName = "[HC] Relby K-23 Blaster Pistol";
		magazines[]=
		{
			"HC_Magazine_class_B"
		};
		initspeed=255; //9mm speed
	};
	class HC_rk3pistol: JMSLLTE_rk3pistol
	{
		author = "George";
		displayName = "[HC] RK-3 Blaster Pistol";
		magazines[]=
		{
			"HC_Magazine_class_A"
		};
		initspeed=360; //9mm speed
	};
	//Launchers
	class HC_RPS10: JMSLLTE_RPS10_launcher
	{
		author = "Queen";
		displayName = "[HC] RPS-10 Launcher";
		modelOptics="\A3\Weapons_F\acc\reticle_RPG_F";
		magazines[] =
		{
			"HC_RPS_Mag",
			"HC_RPS_Mag_HE"
		};
	};

	class HC_HH12: JMSLLTE_HH12_launcher
	{
		author = "Queen";
		displayName = "[HC] HH-12";
		
	};
};