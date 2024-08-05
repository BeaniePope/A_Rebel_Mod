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
			"HC_A300c"
        };
        units[]=
        {

        };
		magazines[]=
		{
			"HC_Magazine_Core",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A300_Uni"
		};
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
	class HC_a280: JMSLLTE_a280
	{
		author = "Queen";
		displayName = "[HC] A280 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	};
	class HC_a280stock: JMSLLTE_a280stock
	{
		author = "Queen";
		displayName = "[HC] A280 Blaster Rifle w/ stock";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	};
	class HC_a280c: JMSLLTE_a280c
	{
		author = "Queen";
		displayName = "[HC] A280c Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	};
	class HC_a280cr: JMSLLTE_a280cr
	{
		author = "Queen";
		displayName = "[HC] A295 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	}
	class HC_A300: JMSLLTE_a300
	{
		author = "Queen";
		displayName = "[HC] A300 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A300_Uni"
		};
	};
	class HC_A300c: JMSLLTE_a300c
	{
		author = "Queen";
		displayName = "[HC] A300 Blaster Carbine";
		magazines[]=
		{
			"HC_Magazine_A300_Uni"
		};
	};

};

class CfgAmmo
{
	class JLTS_bullet_rifle_red;
	class HC_Ammo_Core: JLTS_bullet_rifle_red
    {
        visibleFire=5;
		audibleFire=20;
		visibleFireTime=2;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=-1;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		model="\MRC\JLTS\weapons\Core\effects\laser_red.p3d";
		effectFly="3AS_PlasmaBolt_red_Fly";
		flaresize=5;
		tracerscale=1.1;
		caliber=1;
		coefGravity=0;
		ACE_damageType = "bullet";
		cartridge="";
		cost=1;
		timeToLive=10;
		deflecting=0;
		ExplosionEffects="JLTS_ImpactPlasma";
		craterEffects="";
		explosive=0.1;
		tracerStartTime=0;
		tracerEndTime=10;
		airFriction=-0.00030000001;
		muzzleEffect="";
		waterEffectOffset=0.80000001;
		aiAmmoUsageFlags="64 + 128 + 256";
		soundSetBulletFly[]=
		{
			"JLTS_plasma_bullet_flyby_soundSet"
		};
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
	class HC_Ammo_792: HC_Ammo_Core
    {
        hit=50;
		//indirectHit = 8;
		ACE_caliber=8.22;
        ACE_bulletLength = 40;  // Bullet Length in mm
        ACE_bulletMass = 12; 
		//model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		//effectFly="3AS_PlasmaBolt_Blue_Fly";
		typicalspeed=1020;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=8;
		audiblefire=35;
        caliber=1.5;
	};
	class HC_Ammo_85: HC_Ammo_Core
    {
        hit=24;
		//model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		//effectFly="3AS_PlasmaBolt_Blue_Fly";
		ACE_caliber = 8.82;
		ACE_bulletMass = 15;
		ACE_bulletLength = 50;
		explosive=0.1;
		visibleFire=5;
		audibleFire=70;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		typicalSpeed=1055;
		caliber=1.8;
    };
	class HC_Ammo_338: HC_Ammo_Core
    {
        hit=16;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=5;
		dangerRadiusBulletClose=12;
		dangerRadiusHit=16;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=12;
		visibleFireTime=3;
		tracerScale=1.3;
        caliber=2.8;
		//model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		//effectFly="3AS_PlasmaBolt_Blue_Fly";
    };
	class HC_Ammo_50cal: HC_Ammo_Core
	{
		hit=50;
		indirecthit=0;
		indirecthitrange=0;
		caliber=3;
		ACE_caliber=3;
		ACE_BulletMass=9.9999997e-006;
		typicalspeed=1990;
		suppressionRadiusBulletClose=6;
		suppressionradiushit=8;
		//model="\3AS\3AS_Weapons\Data\tracer_blue.p3d";
		//effectfly="3AS_PlasmaBolt_Blue_Fly";
		flaresize=4;
		tracerScale=1;
		effectflare="FlareShell";
		timetolive=4;
		coefgravity=0;
		airfriction=0;
		class CamShakeExplode
		{
			power=3.6055501;
			duration=0.80000001;
			frequency=20;
			distance=10.8167;
		};
		class CamShakeHit
		{
			power=13;
			duration=0.40000001;
			frequency=20;
			distance=1;
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
    class HC_Magazine_Core: CA_Magazine
    {
        author="Queen";
		scope=2;
		displayName="Dev Mag";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
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
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="HC_Ammo_792";
		count=60;
       	mass=10;
		initspeed=1600;
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
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		ammo="HC_Ammo_85";
		count=60;
       	mass=10;
		initspeed=1600;
		tracersEvery=1;
		lastRoundsTracer=25;
		descriptionShort="25rnd A300 Magazine.";
        displayNameShort="25rnd A300.";
	};
	
};