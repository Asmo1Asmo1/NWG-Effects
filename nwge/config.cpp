class CfgPatches
{
	class nwge
	{
		author="Asmo";
		name="nwge";
		fileName="nwge.pbo";
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Weapons_F_Acc",
			"A3_Weapons_F_beta",
			"A3_Weapons_F_mod",
			"A3_Functions_F",
			"A3_Weapons_F_ItemHolders",
			"A3_Weapons_F_EPA",
			"A3_Weapons_F_EPB",
			"A3_Weapons_F_EPC",
			"A3_Weapons_F_Exp",
			"A3_Map_Altis",
			"A3_Map_Stratis",
			"A3_Map_Malden",
			"A3_Map_Data",
			"A3_Weapons_F_gamma_Items",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Data_F_ParticleEffects",
			"A3_Data_F_Curator",
			"A3_Weapons_F_Orange",
			"A3_Soft_F_MRAP_01",
			"A3_Soft_F_MRAP_02",
			"A3_Soft_F_Beta_MRAP_03",
			"A3_Soft_F_Exp_Truck_01",
			"A3_Soft_F_Exp_Truck_02",
			"A3_Soft_F_Exp_Truck_03",
			"A3_Soft_F_Gamma_Van_01",
			"A3_Air_F",
			"A3_Air_F_Jets_Plane_Fighter_02",
			"A3_Armor_F_Beta_APC_Tracked_01",
			"A3_Armor_F_Beta_APC_Tracked_02",
			"A3_Armor_F_EPB_APC_Tracked_03",
			"A3_Armor_F_Tank_LT_01",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Armor_F_Beta_APC_Wheeled_02",
			"A3_Armor_F_Gamma_APC_Wheeled_03"
		};
		ammo[]=
		{
			"Sh_82mm_AMOS",
			"Sh_155mm_AMOS",
			"Bo_GBU12_LGB",
			"Bomb_04_F",
			"Bomb_03_F",
			"Bo_Mk82",
			"HelicopterExploSmall",
			"HelicopterExploBig",
			"FlareBase",
			"F_40mm_White",
			"Flare_82mm_AMOS_White"
		};
		units[]=
		{
			"Tank_F"
		};
		weapons[]=
		{
			"mortar_155mm_AMOS",
			"rockets_230mm_GAT"
		};
	};
};
class CfgWorlds
{
};
class Mode_SemiAuto
{
	sounds[]=
	{
		"StandardSound",
		"SilencedSound"
	};
	displayName="$STR_DN_MODE_SEMIAUTO";
	textureType="semi";
	recoil="recoil_single_primary_3outof10";
	recoilProne="recoil_single_primary_prone_3outof10";
	aiDispersionCoefY=1.7;
	aiDispersionCoefX=1.4;
	soundBurst=0;
	requiredOpticType=-1;
	aiRateOfFire=2;
	aiRateOfFireDispersion=1;
	aiRateOfFireDistance=500;
};
class Mode_Burst: Mode_SemiAuto
{
	displayName="$STR_DN_MODE_BURST";
	textureType="burst";
	recoil="recoil_auto_primary_3outof10";
	recoilProne="recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY=2.4000001;
	aiDispersionCoefX=1.9;
	soundBurst=0;
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName="$STR_DN_MODE_FULLAUTO";
	textureType="fullAuto";
	recoil="recoil_auto_primary_3outof10";
	recoilProne="recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY=3;
	aiDispersionCoefX=2;
	soundBurst=0;
};
class CfgWeapons
{
	class Default;
	class CannonCore;
	class MissileLauncher;
	class missiles_titan;
	class Missiles_Scalpel;
	class LauncherCore;
	class Binocular: Default
	{
	};
	class RocketPods: LauncherCore
	{
		scope=1;
		cursor="EmptyCursor";
		cursorAim="rocket";
		type=65536;
		reloadTime=0.2;
		magazineReloadTime=0.2;
		minRange=50;
		minRangeProbab=0.1;
		midRange=600;
		midRangeProbab=0.25;
		maxRange=2500;
		maxRangeProbab=0.050000001;
		canLock=2;
		weaponLockDelay=3;
		nameSound="rockets";
		textureType="semi";
		aiDispersionCoefY=0.5;
		aiDispersionCoefX=0.5;
	};
	class NVGoggles: Binocular
	{
		modelOptics="";
		useModelOptics=0;
	};
	class NVGoggles_INDEP: NVGoggles
	{
		modelOptics="";
		useModelOptics=0;
	};
	class NVGoggles_OPFOR: NVGoggles
	{
		modelOptics="";
		useModelOptics=0;
	};
	class O_NVGoggles_hex_F: NVGoggles
	{
		modelOptics="";
		useModelOptics=0;
	};
	class O_NVGoggles_urb_F: O_NVGoggles_hex_F
	{
		modelOptics="";
		useModelOptics=0;
	};
	class O_NVGoggles_ghex_F: O_NVGoggles_hex_F
	{
		modelOptics="";
		useModelOptics=0;
	};
	class NVGoggles_tna_F: NVGoggles
	{
		modelOptics="";
		useModelOptics=0;
	};
	class NVGogglesB_blk_F: NVGoggles
	{
		modelOptics="";
		useModelOptics=0;
	};
	class NVGogglesB_grn_F: NVGoggles
	{
		modelOptics="";
		useModelOptics=0;
	};
	class NVGogglesB_gry_F: NVGoggles
	{
		modelOptics="";
		useModelOptics=0;
	};
	class mortar_155mm_AMOS: CannonCore
	{
		scope=1;
		displayName="$STR_A3_mortar_120mm_AMOS0";
		nameSound="cannon";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
				2.5118864,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",
			31.622778,
			1,
			15
		};
		reloadTime=7;
		magazineReloadTime=7;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"32Rnd_155mm_Mo_shells",
			"32Rnd_155mm_Mo_shells_O",
			"6Rnd_155mm_Mo_smoke",
			"6Rnd_155mm_Mo_smoke_O",
			"2Rnd_155mm_Mo_guided",
			"4Rnd_155mm_Mo_guided",
			"4Rnd_155mm_Mo_guided_O",
			"2Rnd_155mm_Mo_LG",
			"4Rnd_155mm_Mo_LG",
			"4Rnd_155mm_Mo_LG_O",
			"6Rnd_155mm_Mo_mine",
			"6Rnd_155mm_Mo_mine_O",
			"2Rnd_155mm_Mo_Cluster",
			"2Rnd_155mm_Mo_Cluster_O",
			"6Rnd_155mm_Mo_AT_mine",
			"6Rnd_155mm_Mo_AT_mine_O"
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Single4",
			"Single5",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5"
		};
		class GunParticles
		{
			class Effect1
			{
				effectName="ArtilleryFired1";
				positionName="Usti hlavne3";
				directionName="Konec hlavne3";
			};
			class Effect2
			{
				positionName="Usti hlavne3";
			};
			class Effect3
			{
				positionName="Usti hlavne3";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName="800m-2400m Single";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			reloadTime=8;
			artilleryDispersion=3.2;
			artilleryCharge=0.19;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="2100m-6000m Single";
			artilleryCharge=0.30000001;
		};
		class Single3: Single1
		{
			displayName="5300m-15400m Single";
			artilleryCharge=0.47999999;
		};
		class Single4: Single1
		{
			displayName="14700m-42800m Single";
			artilleryCharge=0.80000001;
		};
		class Single5: Single1
		{
			displayName="22900m-66900m Single";
			artilleryCharge=1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="800m-2400m Burst";
			burst=6;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			soundBurst=0;
			reloadTime=6;
			minRange=800;
			minRangeProbab=0.5;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.5;
			artilleryDispersion=5.3000002;
			artilleryCharge=0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="2100m-6000m Burst";
			minRange=2000;
			minRangeProbab=0.40000001;
			midRange=3000;
			midRangeProbab=0.60000002;
			maxRange=5200;
			maxRangeProbab=0.40000001;
			artilleryCharge=0.30000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="5300m-15400m Burst";
			minRange=5200;
			minRangeProbab=0.30000001;
			midRange=8000;
			midRangeProbab=0.40000001;
			maxRange=13300;
			maxRangeProbab=0.30000001;
			artilleryCharge=0.47999999;
		};
		class Burst4: Burst1
		{
			showToPlayer=0;
			displayName="14700m-42800m Burst";
			minRange=14600;
			minRangeProbab=0.2;
			midRange=25000;
			midRangeProbab=0.30000001;
			maxRange=37000;
			maxRangeProbab=0.2;
			artilleryCharge=0.80000001;
		};
		class Burst5: Burst1
		{
			showToPlayer=0;
			displayName="22900m-66900m Burst";
			minRange=25000;
			minRangeProbab=0.1;
			midRange=40000;
			midRangeProbab=0.2;
			maxRange=58000;
			maxRangeProbab=0.1;
			artilleryCharge=1;
		};
	};
	class rockets_230mm_GAT: RocketPods
	{
		class gunClouds
		{
		};
		displayName="$STR_A3_CFGMAGAZINES_12RND_230MM_ROCKETS0";
		magazines[]=
		{
			"12Rnd_230mm_rockets",
			"12Rnd_230mm_rockets_cluster"
		};
		magazineReloadTime=90;
		sounds[]=
		{
			"StandardSound"
		};
		cursorAim="EmptyCursor";
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\Titan_2",
				1.7782794,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MLRSFired";
				positionName="Konec hlavne";
				directionName="Usti hlavne";
			};
		};
		modes[]=
		{
			"Mode_1",
			"Mode_2",
			"Mode_3",
			"Mode_4",
			"Mode_5",
			"Mode_6",
			"Mode_7",
			"Mode_8",
			"Mode_9",
			"Mode_10",
			"Mode_11",
			"Mode_12",
			"Mode_13",
			"Mode_14",
			"Mode_15",
			"Mode_16"
		};
		class Close: RocketPods
		{
			displayName="800m-4600m";
			minRange=800;
			minRangeProbab=0.15000001;
			midRange=2500;
			midRangeProbab=0.64999998;
			maxRange=4600;
			maxRangeProbab=0.050000001;
			reloadTime=0.80000001;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\Titan_2",
					1.7782794,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			autoFire=0;
			artilleryDispersion=0.5;
			artilleryCharge=0.25;
			soundBurst=0;
			aiRateOfFire=0.80000001;
			aiRateOfFireDistance=2500;
		};
		class Medium: Close
		{
			displayName="3100m-18400m";
			minRange=3100;
			minRangeProbab=0.15000001;
			midRange=12000;
			midRangeProbab=0.55000001;
			maxRange=18400;
			maxRangeProbab=0.050000001;
			artilleryDispersion=0.5;
			artilleryCharge=0.5;
			aiRateOfFire=1.8;
			aiRateOfFireDistance=12000;
		};
		class Far: Close
		{
			displayName="7100m-40000m";
			minRange=7100;
			minRangeProbab=0.15000001;
			midRange=25000;
			midRangeProbab=0.44999999;
			maxRange=40000;
			maxRangeProbab=0.050000001;
			artilleryDispersion=0.5;
			artilleryCharge=0.75;
			aiRateOfFire=4;
			aiRateOfFireDistance=25000;
		};
		class Full: Close
		{
			displayName="12800m-80000m";
			minRange=12800;
			minRangeProbab=0.15000001;
			midRange=45000;
			midRangeProbab=0.34999999;
			maxRange=80000;
			maxRangeProbab=0.050000001;
			artilleryDispersion=0.5;
			artilleryCharge=1;
			aiRateOfFire=8;
			aiRateOfFireDistance=45000;
		};
		class Mode_1: Close
		{
			displayName="1000m-1300m";
			artilleryCharge=0.13500001;
			minRange=1000;
			minRangeProbab=0.15000001;
			midRange=1150;
			midRangeProbab=0.64999998;
			maxRange=1300;
			maxRangeProbab=0.050000001;
		};
		class Mode_2: Close
		{
			displayName="1300m-1700m";
			artilleryCharge=0.153;
			minRange=1300;
			minRangeProbab=0.15000001;
			midRange=1500;
			midRangeProbab=0.64999998;
			maxRange=1700;
			maxRangeProbab=0.050000001;
		};
		class Mode_3: Close
		{
			displayName="1700m-2200m";
			artilleryCharge=0.175;
			minRange=1700;
			minRangeProbab=0.15000001;
			midRange=1950;
			midRangeProbab=0.64999998;
			maxRange=2200;
			maxRangeProbab=0.050000001;
		};
		class Mode_4: Close
		{
			displayName="2200m-2900m";
			artilleryCharge=0.2;
			minRange=2200;
			minRangeProbab=0.15000001;
			midRange=2550;
			midRangeProbab=0.64999998;
			maxRange=2900;
			maxRangeProbab=0.050000001;
		};
		class Mode_5: Close
		{
			displayName="2900m-3800m";
			artilleryCharge=0.228;
			minRange=2900;
			minRangeProbab=0.15000001;
			midRange=3350;
			midRangeProbab=0.64999998;
			maxRange=3800;
			maxRangeProbab=0.050000001;
		};
		class Mode_6: Close
		{
			displayName="3800m-5000m";
			artilleryCharge=0.26100001;
			minRange=3800;
			minRangeProbab=0.15000001;
			midRange=4400;
			midRangeProbab=0.64999998;
			maxRange=5000;
			maxRangeProbab=0.050000001;
		};
		class Mode_7: Close
		{
			displayName="5000m-6600m";
			artilleryCharge=0.30000001;
			minRange=5000;
			minRangeProbab=0.15000001;
			midRange=5800;
			midRangeProbab=0.64999998;
			maxRange=6600;
			maxRangeProbab=0.050000001;
		};
		class Mode_8: Close
		{
			displayName="6600m-8500m";
			artilleryCharge=0.34099999;
			minRange=6600;
			minRangeProbab=0.15000001;
			midRange=7550;
			midRangeProbab=0.64999998;
			maxRange=8500;
			maxRangeProbab=0.050000001;
		};
		class Mode_9: Close
		{
			displayName="8500m-11000m";
			artilleryCharge=0.38800001;
			minRange=8500;
			minRangeProbab=0.15000001;
			midRange=9750;
			midRangeProbab=0.64999998;
			maxRange=11000;
			maxRangeProbab=0.050000001;
		};
		class Mode_10: Close
		{
			displayName="11000m-14000m";
			artilleryCharge=0.44;
			minRange=11000;
			minRangeProbab=0.15000001;
			midRange=12500;
			midRangeProbab=0.64999998;
			maxRange=14000;
			maxRangeProbab=0.050000001;
		};
		class Mode_11: Close
		{
			displayName="14000m-18000m";
			artilleryCharge=0.495;
			minRange=14000;
			minRangeProbab=0.15000001;
			midRange=16000;
			midRangeProbab=0.64999998;
			maxRange=18000;
			maxRangeProbab=0.050000001;
		};
		class Mode_12: Close
		{
			displayName="18000m-23000m";
			artilleryCharge=0.56;
			minRange=18000;
			minRangeProbab=0.15000001;
			midRange=20500;
			midRangeProbab=0.64999998;
			maxRange=23000;
			maxRangeProbab=0.050000001;
		};
		class Mode_13: Close
		{
			displayName="23000m-30000m";
			artilleryCharge=0.639;
			minRange=23000;
			minRangeProbab=0.15000001;
			midRange=26500;
			midRangeProbab=0.64999998;
			maxRange=30000;
			maxRangeProbab=0.050000001;
		};
		class Mode_14: Close
		{
			displayName="30000m-40000m";
			artilleryCharge=0.74000001;
			minRange=30000;
			minRangeProbab=0.15000001;
			midRange=35000;
			midRangeProbab=0.64999998;
			maxRange=40000;
			maxRangeProbab=0.050000001;
		};
		class Mode_15: Close
		{
			displayName="40000m-52000m";
			artilleryCharge=0.84200001;
			minRange=40000;
			minRangeProbab=0.15000001;
			midRange=46000;
			midRangeProbab=0.64999998;
			maxRange=52000;
			maxRangeProbab=0.050000001;
		};
		class Mode_16: Close
		{
			displayName="52000m-67000m";
			artilleryCharge=0.95999998;
			minRange=52000;
			minRangeProbab=0.15000001;
			midRange=59500;
			midRangeProbab=0.64999998;
			maxRange=67000;
			maxRangeProbab=0.050000001;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class 2000Rnd_65x39_Belt;
	class 680Rnd_35mm_AA_shells: VehicleMagazine
	{
		tracersEvery=1;
	};
	class 200Rnd_65x39_Belt: VehicleMagazine
	{
		tracersEvery=3;
	};
	class 1000Rnd_65x39_Belt: VehicleMagazine
	{
		tracersEvery=3;
	};
	class 5000Rnd_762x51_Belt: VehicleMagazine
	{
		tracersEvery=1;
	};
	class 300Rnd_20mm_shells: VehicleMagazine
	{
		tracersEvery=1;
	};
	class 500Rnd_127x99_mag: VehicleMagazine
	{
		tracersEvery=3;
	};
	class 200Rnd_127x99_mag: VehicleMagazine
	{
		tracersEvery=3;
	};
	class magazine_Cannon_Phalanx_x1550: VehicleMagazine
	{
		tracersEvery=1;
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore: Default
	{
	};
	class BulletBase: BulletCore
	{
	};
	class SubmunitionCore: Default
	{
	};
	class SubmunitionBase: SubmunitionCore
	{
	};
	class SubmunitionBullet: SubmunitionBase
	{
	};
	class MissileBase;
	class BombCore: Default
	{
	};
	class LaserBombCore: BombCore
	{
	};
	class ammo_Bomb_LaserGuidedBase: LaserBombCore
	{
	};
	class FlareCore;
	class FlareBase: FlareCore
	{
		timeToLive=240;
		brightness=150000;
		intensity=1000000;
		flareSize=50;
	};
	class F_40mm_White: FlareBase
	{
		timeToLive=240;
		brightness=150000;
		intensity=1000000;
		flareSize=50;
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive=240;
		brightness=80000;
		intensity=1000000;
		flareSize=50;
	};
	class M_Titan_AA;
	class M_Titan_AA_long: M_Titan_AA
	{
		effectsMissile="FX_Missile_SAM_LongRange";
	};
	class B_9x21_Ball: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.015;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		model="nwge\data\green";
		tracerScale=0.015;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_9x21_Ball_Tracer_Red: B_9x21_Ball_Tracer_Green
	{
		model="nwge\data\red";
		tracerScale=0.015;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball_Tracer_Green
	{
		model="nwge\data\yellow";
		tracerScale=0.015;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_545x39_Ball_F: BulletBase
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_545x39_Ball_Green_F: B_545x39_Ball_F
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_580x42_Ball_F: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x39_Ball_F: BulletBase
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x39_Ball_Green_F: B_762x39_Ball_F
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_556x45_Ball: BulletBase
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_556x45_Ball_Tracer_Green: B_556x45_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_45ACP_Ball: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_45ACP_Ball_green: B_45ACP_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_45ACP_Ball_yellow: B_45ACP_Ball
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_65x39_Caseless: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_65x39_Caseless_green: B_65x39_Caseless
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_65x39_Caseless_yellow: B_65x39_Caseless
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.050000001;
		tracerEndTime=5;
	};
	class B_65x39_Case: B_65x39_Caseless
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_65x39_Case_green: B_65x39_Case
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_65x39_Case_yellow: B_65x39_Case
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.050000001;
		tracerEndTime=5;
	};
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_65x39_Minigun_Caseless_Red_splash: B_65x39_Caseless
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_65x39_Minigun_Caseless_Green_splash: B_65x39_Caseless
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Ball: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Tracer_Red: B_762x51_Ball
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Tracer_Green: B_762x51_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Tracer_Yellow: B_762x51_Ball
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x54_Ball: B_762x51_Ball
	{
		model="nwge\data\white";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x54_Tracer_Red: B_762x54_Ball
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x54_Tracer_Green: B_762x54_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x54_Tracer_yellow: B_762x54_Ball
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Minigun_Tracer_Yellow: B_762x51_Minigun_Tracer_Red
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x33_Ball: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x99_Ball: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x99_Ball_Tracer_Red: B_127x99_Ball
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x99_Ball_Tracer_Green: B_127x99_Ball
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x99_SLAP: B_127x99_Ball
	{
	};
	class B_127x99_SLAP_Tracer_Red: B_127x99_SLAP
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x99_SLAP_Tracer_Green: B_127x99_SLAP
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x99_SLAP_Tracer_Yellow: B_127x99_SLAP
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x108_Ball: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_127x108_APDS: B_127x108_Ball
	{
	};
	class B_19mm_HE: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_HE: B_19mm_HE
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_HE_Tracer_Red: B_30mm_HE
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_HE_Tracer_Green: B_30mm_HE
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_HE_Tracer_Yellow: B_30mm_HE
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_MP: B_30mm_HE
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_MP_Tracer_Red: B_30mm_MP
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_MP_Tracer_Green: B_30mm_MP
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_MP_Tracer_Yellow: B_30mm_MP
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_40mm_GPR: B_30mm_HE
	{
	};
	class B_40mm_GPR_Tracer_Red: B_40mm_GPR
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_40mm_GPR_Tracer_Green: B_40mm_GPR
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_40mm_GPR_Tracer_Yellow: B_40mm_GPR
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_20mm: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_20mm_Tracer_Red: B_20mm
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_25mm: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_AP: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_AP_Tracer_Red: B_30mm_AP
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_AP_Tracer_Green: B_30mm_AP
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_AP_Tracer_Yellow: B_30mm_AP
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_APFSDS: B_30mm_AP
	{
	};
	class B_30mm_APFSDS_Tracer_Red: B_30mm_APFSDS
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_APFSDS_Tracer_Green: B_30mm_APFSDS
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_30mm_APFSDS_Tracer_Yellow: B_30mm_APFSDS
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_40mm_APFSDS: B_30mm_APFSDS
	{
	};
	class B_40mm_APFSDS_Tracer_Red: B_40mm_APFSDS
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_40mm_APFSDS_Tracer_Green: B_40mm_APFSDS
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_40mm_APFSDS_Tracer_Yellow: B_40mm_APFSDS
	{
		model="nwge\data\yellow";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class Cannon_30mm_HE_Plane_CAS_02_F: Gatling_30mm_HE_Plane_CAS_01_F
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_35mm_AA: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_35mm_AA_Tracer_Red: B_35mm_AA
	{
		model="nwge\data\red";
	};
	class B_35mm_AA_Tracer_Green: B_35mm_AA
	{
		model="nwge\data\green";
	};
	class B_35mm_AA_Tracer_Yellow: B_35mm_AA
	{
		model="nwge\data\yellow";
	};
	class ShellCore;
	class ShellBase: ShellCore
	{
	};
	class Sh_120mm_HE: ShellBase
	{
		model="nwge\data\white";
		tracerScale=0.039999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class Sh_120mm_HE_Tracer_Red: Sh_120mm_HE
	{
		model="nwge\data\red";
	};
	class Sh_120mm_HE_Tracer_Green: Sh_120mm_HE
	{
		model="nwge\data\green";
	};
	class Sh_120mm_HE_Tracer_Yellow: Sh_120mm_HE
	{
		model="nwge\data\yellow";
	};
	class Sh_120mm_APFSDS: ShellBase
	{
		model="nwge\data\white";
		tracerScale=0.039999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class Sh_120mm_APFSDS_Tracer_Red: Sh_120mm_APFSDS
	{
		model="nwge\data\red";
	};
	class Sh_120mm_APFSDS_Tracer_Green: Sh_120mm_APFSDS
	{
		model="nwge\data\green";
	};
	class Sh_120mm_APFSDS_Tracer_Yellow: Sh_120mm_APFSDS
	{
		model="nwge\data\yellow";
	};
	class Sh_120mm_HEAT_MP: ShellBase
	{
		model="nwge\data\white";
		tracerScale=0.039999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class Sh_120mm_HEAT_MP_T_Red: Sh_120mm_HEAT_MP
	{
		model="nwge\data\red";
	};
	class Sh_120mm_HEAT_MP_T_Green: Sh_120mm_HEAT_MP
	{
		model="nwge\data\green";
	};
	class Sh_120mm_HEAT_MP_T_Yellow: Sh_120mm_HEAT_MP
	{
		model="nwge\data\yellow";
	};
	class Sh_125mm_APFSDS: Sh_120mm_APFSDS
	{
	};
	class Sh_125mm_APFSDS_T_Red: Sh_125mm_APFSDS
	{
		model="nwge\data\red";
	};
	class Sh_125mm_APFSDS_T_Green: Sh_125mm_APFSDS
	{
		model="nwge\data\green";
	};
	class Sh_125mm_APFSDS_T_Yellow: Sh_125mm_APFSDS
	{
		model="nwge\data\yellow";
	};
	class Sh_125mm_HE: Sh_120mm_HE
	{
	};
	class Sh_125mm_HE_T_Red: Sh_125mm_HE
	{
		model="nwge\data\red";
	};
	class Sh_125mm_HE_T_Green: Sh_125mm_HE
	{
		model="nwge\data\green";
	};
	class Sh_125mm_HE_T_Yellow: Sh_125mm_HE
	{
		model="nwge\data\yellow";
	};
	class Sh_125mm_HEAT: Sh_125mm_HE
	{
	};
	class Sh_125mm_HEAT_T_Red: Sh_125mm_HEAT
	{
		model="nwge\data\red";
	};
	class Sh_125mm_HEAT_T_Green: Sh_125mm_HEAT
	{
		model="nwge\data\green";
	};
	class Sh_125mm_HEAT_T_Yellow: Sh_125mm_HEAT
	{
		model="nwge\data\yellow";
	};
	class Sh_105mm_APFSDS: Sh_120mm_APFSDS
	{
	};
	class Sh_105mm_APFSDS_T_Red: Sh_120mm_APFSDS
	{
		model="nwge\data\red";
	};
	class Sh_105mm_APFSDS_T_Green: Sh_120mm_APFSDS
	{
		model="nwge\data\green";
	};
	class Sh_105mm_APFSDS_T_Yellow: Sh_120mm_APFSDS
	{
		model="nwge\data\yellow";
	};
	class Sh_105mm_HEAT_MP: Sh_125mm_HEAT
	{
	};
	class Sh_105mm_HEAT_MP_T_Red: Sh_105mm_HEAT_MP
	{
		model="nwge\data\red";
	};
	class Sh_105mm_HEAT_MP_T_Green: Sh_105mm_HEAT_MP
	{
		model="nwge\data\green";
	};
	class Sh_105mm_HEAT_MP_T_Yellow: Sh_105mm_HEAT_MP
	{
		model="nwge\data\yellow";
	};
	class B_338_NM_Ball: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class B_93x64_Ball: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class ammo_Gun20mmAABase: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class ammo_Gun30mmAABase: BulletBase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class ammo_Fighter02_Gun30mm_AA: ammo_Gun30mmAABase
	{
		model="nwge\data\white";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class ammo_Gun35mmAABase: BulletBase
	{
		model="\nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase
	{
		model="\nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_B_545x39_Ball: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_B_762x54_Ball: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_B_762x39_Ball: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_B_762x39_Tracer: rhs_B_762x39_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x107mm: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class RHS_ammo_23mm_AA: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.0255;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_30x165mm_base: BulletBase
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_3uor6: rhs_ammo_30x165mm_base
	{
		model="nwge\data\green";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_bm_base: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.039999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_556x45_M855A1_Ball: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball
	{
		model="nwge\data\yellow";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball
	{
		model="nwge\data\green";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.02;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_Ball: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_Ball_Tracer_Red: rhs_ammo_127x99_Ball
	{
		model="nwge\data\red";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_Ball_Tracer_Green: rhs_ammo_127x99_Ball
	{
		model="nwge\data\green";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_Ball_Tracer_Yellow: rhs_ammo_127x99_Ball
	{
		model="nwge\data\yellow";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_SLAP: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Red: rhs_ammo_127x99_SLAP
	{
		model="nwge\data\red";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Green: rhs_ammo_127x99_SLAP
	{
		model="nwge\data\green";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_127x99_SLAP_Tracer_Yellow: rhs_ammo_127x99_SLAP
	{
		model="nwge\data\yellow";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_20mm_AP: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_30x113mm_M789_HEDP: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.029999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class RHS_ammo_M792_HEI: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class RHS_ammo_M919_APFSDS: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.025;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_M829: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.039999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class rhs_ammo_M1069: BulletBase
	{
		model="nwge\data\red";
		tracerScale=0.039999999;
		tracerStartTime=0.0099999998;
		tracerEndTime=5;
	};
	class Sh_155mm_AMOS: ShellBase
	{
		CraterEffects="nwge_155mm_Smoke";
		explosionEffects="nwge_155mm_Explode";
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		CraterEffects="nwge_80mm_Smoke";
		ExplosionEffects="nwge_80mm_Explode";
	};
	class ModuleOrdnanceMortar_F_ammo: Sh_82mm_AMOS
	{
		CraterEffects="nwge_80mm_Smoke";
		ExplosionEffects="nwge_80mm_Explode";
	};
	class ModuleOrdnanceHowitzer_F_ammo: Sh_155mm_AMOS
	{
		CraterEffects="nwge_155mm_Smoke";
		explosionEffects="nwge_155mm_Explode";
	};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects="nwge_MK82_Smoke";
		explosionEffects="nwge_MK82_Explode";
	};
	class Bomb_04_F: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects="nwge_MK82_Smoke";
		explosionEffects="nwge_MK82_Explode";
	};
	class Bomb_03_F: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects="nwge_MK82_Smoke";
		explosionEffects="nwge_MK82_Explode";
	};
	class Bo_Mk82: BombCore
	{
		CraterEffects="nwge_MK82_Smoke";
		explosionEffects="nwge_MK82_Explode";
	};
	class FuelExplosion: Default
	{
		explosionEffects="nwge_VehicleExplosionEffects";
	};
	class FuelExplosionBig: FuelExplosion
	{
		explosionEffects="nwge_VehicleExplosionEffectsBig";
	};
	class FuelExplosionSmall: FuelExplosion
	{
		explosionEffects="nwge_VehicleExplosionEffectsSmall";
	};
	class HelicopterExploSmall: ShellBase
	{
		explosionEffects="nwge_HeliExplEfe1";
		CraterEffects="";
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		explosionEffects="nwge_HeliExplEfe2";
		CraterEffects="";
	};
};
class CfgVideoOptions
{
	class ObjectsQuality
	{
		class VeryHigh1
		{
			text="ULTRA+1";
			value=2400000;
		};
		class VeryHigh2
		{
			text="ULTRA+2";
			value=3100000;
		};
		class VeryHigh3
		{
			text="ULTRA+3";
			value=3900000;
		};
	};
	class Particles
	{
		class Low
		{
			text="$STR_A3_OPTIONS_LOW";
			particlesSoftLimit=7000;
			particlesHardLimit=9000;
			smokeGenMinDist=50;
			smokeGenMaxDist=200;
			smokeSizeCoef=2;
			smokeIntervalCoef=4;
			smokeZoomCoef=1.42857;
			highQualityShader=0;
			numFullSizeParticles=20;
		};
		class Normal
		{
			text="$STR_A3_OPTIONS_STANDARD";
			particlesSoftLimit=10000;
			particlesHardLimit=12000;
			smokeGenMinDist=100;
			smokeGenMaxDist=400;
			smokeSizeCoef=2;
			smokeIntervalCoef=4;
			smokeZoomCoef=1.42857;
			highQualityShader=1;
			numFullSizeParticles=40;
		};
		class High
		{
			text="$STR_A3_OPTIONS_HIGH";
			particlesSoftLimit=13000;
			particlesHardLimit=16000;
			smokeGenMinDist=200;
			smokeGenMaxDist=2600;
			smokeSizeCoef=2;
			smokeIntervalCoef=3;
			smokeZoomCoef=0.82857001;
			highQualityShader=1;
			numFullSizeParticles=60;
		};
		class VeryHigh
		{
			text="$STR_A3_OPTIONS_VERYHIGH";
			particlesSoftLimit=16000;
			particlesHardLimit=18000;
			smokeGenMinDist=1;
			smokeGenMaxDist=1600;
			smokeSizeCoef=2;
			smokeIntervalCoef=4;
			smokeZoomCoef=1.42857;
			highQualityShader=1;
			numFullSizeParticles=80;
		};
	};
};
class nwge_HeliDestructionEffects
{
	class Light1A
	{
		simulation="light";
		type="nwge_HeliLight";
		position="destructionEffect1";
		intensity=0.001;
		interval=1;
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=120;
	};
	class Light1B: Light1A
	{
		position="destructionEffect2";
	};
	class Light2A: Light1B
	{
		type="nwge_HeliExpLig1";
		position="destructionEffect1";
		intensity=1;
		lifeTime=0.80000001;
	};
	class Light2B: Light2A
	{
		position="destructionEffect2";
	};
	class Light3A: Light2B
	{
		type="nwge_HeliExpLig2";
		position="destructionEffect1";
		lifeTime=0.60000002;
	};
	class Light3B: Light3A
	{
		position="destructionEffect2";
	};
	class Light4A: Light3B
	{
		type="nwge_HeliExpLig3";
		position="destructionEffect1";
		lifeTime=1;
	};
	class Light4B: Light4A
	{
		position="destructionEffect2";
	};
	class Sound
	{
		simulation="sound";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		type="Fire";
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=60;
	};
	class Fire
	{
		simulation="particles";
		type="AirObjectDestructionFire";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=50;
	};
	class Fire1: Fire
	{
		type="nwge_ObjectDestructionFire2";
		intensity=1;
		lifeTime=120;
	};
	class Fire2: Fire1
	{
		type="nwge_ObjectDestructionFire1Small";
		intensity=0.1;
		interval=0.5;
	};
	class Fire3: Fire2
	{
		type="nwge_ObjectDestructionFire2Small";
		position="destructionEffect2";
		intensity=1;
	};
	class Fire4: Fire3
	{
		type="nwge_HeliExplFireMin1";
	};
	class Fire5: Fire4
	{
		type="nwge_HeliExplFireMin2";
		position="destructionEffect1";
	};
	class Fire6: Fire5
	{
		type="nwge_HeliExplFireMin3";
	};
	class Fire7: Fire6
	{
		type="nwge_HeliExplFireMin4";
	};
	class Fire8: Fire7
	{
		type="nwge_HeliExplFireMin5";
	};
	class Refract: Fire8
	{
		type="ObjectDestructionRefractSmall";
		interval=1;
	};
	class Smoke1: Refract
	{
		type="AirObjectDestructionSmoke";
		lifeTime=50;
	};
	class Smoke2: Smoke1
	{
		type="ObjectDestructionSmoke1_2Smallx";
		lifeTime=120;
	};
	class Smoke3: Smoke2
	{
		type="nwge_HeliDestSmoke";
	};
	class Smoke4: Smoke3
	{
		type="nwge_HeliDestSmoke1";
		intensity=1;
	};
	class Smoke5: Smoke4
	{
		type="nwge_HeliDestructionSmoke";
		position="destructionEffect2";
	};
	class FireSpark1: Smoke5
	{
		type="nwge_HeliDestSpark1";
		interval=0.5;
	};
	class FireSpark2: FireSpark1
	{
		type="nwge_HeliDestSpark2";
	};
	class FireSpark3: FireSpark2
	{
		type="nwge_HeliDestSpark";
		position="destructionEffect1";
	};
	class FireSpark4: FireSpark3
	{
		type="AirFireSparks";
		position="destructionEffect1";
		intensity=0.5;
	};
};
class nwge_PlaneDestructionEffects
{
	class Light1A
	{
		simulation="light";
		type="nwge_PlanLight";
		position="destructionEffect1";
		intensity=0.001;
		interval=1;
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=120;
	};
	class Light1B: Light1A
	{
		position="destructionEffect2";
	};
	class Light2A: Light1B
	{
		type="nwge_PlanExpLig1";
		position="destructionEffect1";
		intensity=1;
		lifeTime=0.80000001;
	};
	class Light2B: Light2A
	{
		position="destructionEffect2";
	};
	class Light3A: Light2B
	{
		type="nwge_PlanExpLig2";
		position="destructionEffect1";
		lifeTime=0.60000002;
	};
	class Light3B: Light3A
	{
		position="destructionEffect2";
	};
	class Light4A: Light3B
	{
		type="nwge_PlanExpLig3";
		position="destructionEffect1";
		lifeTime=1;
	};
	class Light4B: Light4A
	{
		position="destructionEffect2";
	};
	class Sound
	{
		simulation="sound";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		type="Fire";
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=60;
	};
	class Fire
	{
		simulation="particles";
		type="AirObjectDestructionFire";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=99;
	};
	class Fire1: Fire
	{
		type="nwge_ObjectDestructionFire1Small";
		position="destructionEffect1";
		intensity=0.1;
		interval=0.5;
		lifeTime=120;
	};
	class Fire2: Fire1
	{
		type="nwge_ObjectDestructionFire2Small";
		position="destructionEffect2";
		intensity=0.15000001;
	};
	class Fire3: Fire2
	{
		type="nwge_ObjectDestructionFire2";
		position="destructionEffect1";
		intensity=1;
		interval=1;
	};
	class Fire4: Fire3
	{
		type="nwge_HeliExplFireMin1";
		position="destructionEffect2";
		intensity=0.15000001;
		interval=0.5;
	};
	class Fire5: Fire4
	{
		type="nwge_HeliExplFireMin2";
		position="destructionEffect1";
	};
	class Fire6: Fire5
	{
		type="nwge_HeliExplFireMin3";
	};
	class Fire7: Fire6
	{
		type="nwge_HeliExplFireMin4";
	};
	class Fire8: Fire7
	{
		type="nwge_HeliExplFireMin5";
	};
	class Smoke1
	{
		simulation="particles";
		type="AirObjectDestructionSmoke";
		position="destructionEffect1";
		intensity=0.15000001;
		interval=1;
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=99;
	};
	class Smoke2: Smoke1
	{
		type="ObjectDestructionSmoke1_2Smallx";
		lifeTime=120;
	};
	class Smoke3: Smoke2
	{
		type="nwge_PlanDestSmoke";
		intensity=1;
	};
	class Refract1: Smoke3
	{
		type="ObjectDestructionRefractSmall";
		intensity=0.15000001;
	};
	class SmokeDest: Refract1
	{
		type="nwge_PlanDestructionSmoke";
		position="destructionEffect2";
		intensity=1;
	};
	class FireSparksBig1
	{
		simulation="particles";
		type="AirFireSparks";
		position="destructionEffect1";
		intensity=0.5;
		interval=0.5;
		start="damage-0.99";
		enabled="distToWater";
		lifeTime=120;
	};
	class FireSparksBig2: FireSparksBig1
	{
		type="nwge_PlanDestSpark";
		position="destructionEffect2";
		intensity=1;
	};
};
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
	};
	class LandVehicle: AllVehicles
	{
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.34999999;
			};
			class SmokeDest: FireBig
			{
				type="nwge_TankDestructionSmoke";
				lifeTime=20;
			};
			class Fire1: SmokeDest
			{
				type="nwge_ObjectDestructionFire2Small";
			};
			class Fire2: Fire1
			{
				type="nwge_TankExplFireMin1";
			};
			class Fire3: Fire2
			{
				type="nwge_TankExplFireMin2";
			};
			class Fire4: Fire3
			{
				type="nwge_TankExplFireMin3";
			};
			class Fire5: Fire4
			{
				type="nwge_TankExplFireMin4";
			};
			class Refract: Fire5
			{
				type="ObjectDestructionRefract";
				position="destructionEffect1";
			};
			class Smok1: Refract
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_TankDestSmoke";
			};
			class Spark1: Smok2
			{
				type="nwge_TankSpark1";
				intensity=1;
			};
			class Spark2: Spark1
			{
				type="nwge_TankSpark2";
			};
			class DestSpark1: Spark2
			{
				type="nwge_TankDestSpark1";
			};
			class DestSpark2: DestSpark1
			{
				type="nwge_TankDestSpark2";
			};
			class SparkBig: DestSpark2
			{
				type="nwge_TankSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		explosionEffect="FuelExplosion";
	};
	class Car;
	class Car_F: Car
	{
		class MainTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Helicopter: Air
	{
		damageEffect="nwge_HeliDestructionEffects";
		explosionEffect="";
		class DestructionEffects
		{
			class Shard2
			{
				simulation="particles";
				type="nwge_HeliShard2";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.003;
			};
			class Shard3: Shard2
			{
				type="nwge_HeliShard3";
			};
			class SharStat2: Shard3
			{
				type="nwge_HeliShard2Static";
			};
			class SharStat3: SharStat2
			{
				type="nwge_HeliShard3Static";
			};
			class Fire: SharStat3
			{
				type="nwge_HeliExplFire";
				lifeTime=0.029999999;
			};
			class SmokeExp2: Fire
			{
				type="nwge_HeliExplSmoke";
				lifeTime=0.1;
			};
			class SparkExp1: SmokeExp2
			{
				type="ObjectDestructionSparks";
				lifeTime=20;
			};
			class SparkExp2: SparkExp1
			{
				type="nwge_HeliExplSparks";
				lifeTime=0.013;
			};
			class LightExp: SparkExp2
			{
				type="nwge_HeliExplLight";
				lifeTime=0.015;
			};
			class Explosion: LightExp
			{
				type="ExplosionParticles";
				intensity=3;
				lifeTime=0.015;
			};
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class Components;
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class Reflectors
		{
			class Right;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class RotorLibHelicopterProperties;
	};
	class Truck_F: Car_F
	{
	};
	class Truck_02_base_F: Truck_F
	{
		class NewTurret;
	};
	class Truck_03_base_F: Truck_F
	{
	};
	class StaticMGWeapon;
	class MRAP_01_base_F: Car_F
	{
		explosionEffect="FuelExplosionSmall";
	};
	class MRAP_02_base_F: Car_F
	{
		explosionEffect="FuelExplosionSmall";
	};
	class MRAP_03_base_F: Car_F
	{
		explosionEffect="FuelExplosionSmall";
	};
	class Truck_02_MRL_base_F: Truck_02_base_F
	{
		explosionEffect="FuelExplosion";
	};
	class UGV_01_base_F: Car_F
	{
		explosionEffect="FuelExplosion";
	};
	class LSV_01_base_F: Car_F
	{
		explosionEffect="FuelExplosion";
	};
	class LSV_02_base_F: Car_F
	{
		explosionEffect="FuelExplosion";
	};
	class Offroad_01_base_F: Car_F
	{
		explosionEffect="FuelExplosion";
	};
	class Van_02_base_F: Truck_F
	{
		explosionEffect="FuelExplosion";
	};
	class AAA_System_01_base_F: StaticMGWeapon
	{
		explosionEffect="FuelExplosion";
	};
	class SAM_System_01_base_F: StaticMGWeapon
	{
		explosionEffect="FuelExplosion";
	};
	class SAM_System_02_base_F: StaticMGWeapon
	{
		explosionEffect="FuelExplosion";
	};
	class SAM_System_03_base_F: StaticMGWeapon
	{
		explosionEffect="FuelExplosion";
	};
	class SAM_System_04_base_F: StaticMGWeapon
	{
		explosionEffect="FuelExplosion";
	};
	class Radar_System_01_base_F: StaticMGWeapon
	{
		explosionEffect="FuelExplosion";
	};
	class Radar_System_02_base_F: StaticMGWeapon
	{
		explosionEffect="FuelExplosion";
	};
	class B_Truck_01_mover_F;
	class B_Truck_01_ammo_F: B_Truck_01_mover_F
	{
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.1;
			};
			class SmokeDest: FireBig
			{
				type="nwge_CarAmmoDestructionSmoke";
				lifeTime=20;
			};
			class Fire: SmokeDest
			{
				type="nwge_ObjectDestructionFire2Small";
			};
			class Refract: Fire
			{
				type="ObjectDestructionRefract";
				position="destructionEffect1";
			};
			class Smok1: Refract
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_CarAmmoDestSmoke";
			};
			class Spark1: Smok2
			{
				type="nwge_CarAmmoSpark1";
				intensity=1;
			};
			class Spark2: Spark1
			{
				type="nwge_CarAmmoSpark2";
			};
			class SparkBig: Spark2
			{
				type="nwge_CarAmmoSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class Truck_02_ammo_base_F: Truck_02_base_F
	{
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.1;
			};
			class SmokeDest: FireBig
			{
				type="nwge_CarAmmoDestructionSmoke";
				lifeTime=20;
			};
			class Fire: SmokeDest
			{
				type="nwge_ObjectDestructionFire2Small";
			};
			class Refract: Fire
			{
				type="ObjectDestructionRefract";
				position="destructionEffect1";
			};
			class Smok1: Refract
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_CarAmmoDestSmoke";
			};
			class Spark1: Smok2
			{
				type="nwge_CarAmmoSpark1";
				intensity=1;
			};
			class Spark2: Spark1
			{
				type="nwge_CarAmmoSpark2";
			};
			class SparkBig: Spark2
			{
				type="nwge_CarAmmoSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.1;
			};
			class SmokeDest: FireBig
			{
				type="nwge_CarAmmoDestructionSmoke";
				lifeTime=20;
			};
			class Fire: SmokeDest
			{
				type="nwge_ObjectDestructionFire2Small";
			};
			class Refract: Fire
			{
				type="ObjectDestructionRefract";
				position="destructionEffect1";
			};
			class Smok1: Refract
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_CarAmmoDestSmoke";
			};
			class Spark1: Smok2
			{
				type="nwge_CarAmmoSpark1";
				intensity=1;
			};
			class Spark2: Spark1
			{
				type="nwge_CarAmmoSpark2";
			};
			class SparkBig: Spark2
			{
				type="nwge_CarAmmoSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class Van_01_base_F;
	class Van_01_fuel_base_F: Van_01_base_F
	{
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.1;
			};
			class SmokeDest: FireBig
			{
				type="nwge_CarFuelDestructionSmoke";
				lifeTime=20;
			};
			class ExpFuel: SmokeDest
			{
				type="nwge_CarFuelExp";
				position="destructionEffect1";
				lifeTime=0.001;
			};
			class Spark: ExpFuel
			{
				type="nwge_CarFuelSparks";
				lifeTime=20;
			};
			class Fire1: Spark
			{
				type="nwge_objectdestructionfire1";
			};
			class Fire2: Fire1
			{
				type="nwge_objectdestructionfire1a";
			};
			class Fire3: Fire2
			{
				type="nwge_objectdestructionfire1b";
			};
			class Smok1: Fire3
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_CarFuelDestSmoke";
			};
			class Refrc: Smok2
			{
				type="ObjectDestructionRefract";
			};
		};
	};
	class C_Van_01_fuel_F: Van_01_fuel_base_F
	{
		explosionEffect="FuelExplosion";
	};
	class I_G_Van_01_fuel_F: Van_01_fuel_base_F
	{
		explosionEffect="FuelExplosion";
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.1;
			};
			class SmokeDest: FireBig
			{
				type="nwge_CarFuelDestructionSmoke";
				lifeTime=20;
			};
			class ExpFuel: SmokeDest
			{
				type="nwge_CarFuelExp";
				position="destructionEffect1";
				lifeTime=0.001;
			};
			class Spark: ExpFuel
			{
				type="nwge_CarFuelSparks";
				lifeTime=20;
			};
			class Fire1: Spark
			{
				type="nwge_objectdestructionfire1";
			};
			class Fire2: Fire1
			{
				type="nwge_objectdestructionfire1a";
			};
			class Fire3: Fire2
			{
				type="nwge_objectdestructionfire1b";
			};
			class Smok1: Fire3
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_CarFuelDestSmoke";
			};
			class Refrc: Smok2
			{
				type="ObjectDestructionRefract";
			};
		};
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.1;
			};
			class SmokeDest: FireBig
			{
				type="nwge_CarFuelDestructionSmoke";
				lifeTime=20;
			};
			class ExpFuel: SmokeDest
			{
				type="nwge_CarFuelExp";
				position="destructionEffect1";
				lifeTime=0.001;
			};
			class Spark: ExpFuel
			{
				type="nwge_CarFuelSparks";
				lifeTime=20;
			};
			class Fire1: Spark
			{
				type="nwge_objectdestructionfire1";
			};
			class Fire2: Fire1
			{
				type="nwge_objectdestructionfire1a";
			};
			class Fire3: Fire2
			{
				type="nwge_objectdestructionfire1b";
			};
			class Smok1: Fire3
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_CarFuelDestSmoke";
			};
			class Refrc: Smok2
			{
				type="ObjectDestructionRefract";
			};
		};
	};
	class B_Truck_01_fuel_F: B_Truck_01_mover_F
	{
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.1;
			};
			class SmokeDest: FireBig
			{
				type="nwge_CarFuelDestructionSmoke";
				lifeTime=20;
			};
			class ExpFuel: SmokeDest
			{
				type="nwge_CarFuelExp";
				position="destructionEffect1";
				lifeTime=0.001;
			};
			class Spark: ExpFuel
			{
				type="nwge_CarFuelSparks";
				lifeTime=20;
			};
			class Fire1: Spark
			{
				type="nwge_objectdestructionfire1";
			};
			class Fire2: Fire1
			{
				type="nwge_objectdestructionfire1a";
			};
			class Fire3: Fire2
			{
				type="nwge_objectdestructionfire1b";
			};
			class Smok1: Fire3
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_CarFuelDestSmoke";
			};
			class Refrc: Smok2
			{
				type="ObjectDestructionRefract";
			};
		};
	};
	class Plane: Air
	{
		damageEffect="nwge_PlaneDestructionEffects";
		explosionEffect="";
		class DestructionEffects
		{
			class Shard1
			{
				simulation="particles";
				type="nwge_PlanShard1";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.003;
			};
			class Shard2: Shard1
			{
				type="nwge_PlanShard2";
			};
			class Shard3: Shard2
			{
				type="nwge_PlanShard3";
			};
			class SharStat1: Shard3
			{
				type="nwge_PlanShard1Static";
			};
			class SharStat2: SharStat1
			{
				type="nwge_PlanShard2Static";
			};
			class SharStat3: SharStat2
			{
				type="nwge_PlanShard3Static";
			};
			class Fire: SharStat3
			{
				type="nwge_PlanExplFire";
				lifeTime=0.029999999;
			};
			class SmokeExp1: Fire
			{
				type="CloudMedDark";
				lifeTime=0.079999998;
			};
			class SmokeExp2: SmokeExp1
			{
				type="nwge_PlanExplSmoke";
				lifeTime=0.050000001;
			};
			class SparkExp1: SmokeExp2
			{
				type="ObjectDestructionSparks";
				lifeTime=20;
			};
			class SparkExp2: SparkExp1
			{
				type="nwge_PlanExplSparks";
				lifeTime=0.013;
			};
			class LightExp: SparkExp2
			{
				type="nwge_PlanExplLight";
				lifeTime=0.015;
			};
			class Explosion: LightExp
			{
				type="ExplosionParticles";
				intensity=3;
				lifeTime=0.015;
			};
		};
	};
	class Plane_Base_F: Plane
	{
	};
	class Plane_Fighter_02_Base_F: Plane_Base_F
	{
		damageEffect="nwge_PlaneDestructionEffects";
		explosionEffect="";
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		explosionEffect="FuelExplosion";
	};
	class APC_Tracked_03_base_F: Tank_F
	{
		explosionEffect="FuelExplosion";
	};
	class LT_01_base_F: Tank_F
	{
		explosionEffect="FuelExplosion";
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
			class CommanderTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class EventHandlers;
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="Fire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class FireBig
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.175;
			};
			class SmokeDest: FireBig
			{
				type="nwge_TankWheDestructionSmoke";
				lifeTime=20;
			};
			class Fire1: SmokeDest
			{
				type="nwge_ObjectDestructionFire2Small";
			};
			class Fire2: Fire1
			{
				type="nwge_TankWheExplFireMin1";
			};
			class Fire3: Fire2
			{
				type="nwge_TankWheExplFireMin2";
			};
			class Fire4: Fire3
			{
				type="nwge_TankWheExplFireMin3";
			};
			class Fire5: Fire4
			{
				type="nwge_TankWheExplFireMin4";
			};
			class Refract: Fire5
			{
				type="ObjectDestructionRefract";
				position="destructionEffect1";
			};
			class Smok1: Refract
			{
				type="ObjectDestructionSmoke1_2Smallx";
			};
			class Smok2: Smok1
			{
				type="nwge_TankWheDestSmoke";
			};
			class Spark1: Smok2
			{
				type="nwge_TankWheSpark1";
				intensity=1;
			};
			class Spark2: Spark1
			{
				type="nwge_TankWheSpark2";
			};
			class DestSpark1: Spark2
			{
				type="nwge_TankWheDestSpark1";
			};
			class DestSpark2: DestSpark1
			{
				type="nwge_TankWheDestSpark2";
			};
			class SparkBig: DestSpark2
			{
				type="nwge_TankWheSparkBig";
				lifeTime=0.001;
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		explosionEffect="FuelExplosion";
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		explosionEffect="FuelExplosion";
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		explosionEffect="FuelExplosion";
	};
};
class CfgCloudletShapes
{
	explosion_02="nwge\data\explosion_02";
	explosion_04="nwge\data\explosion_04";
	explosion_05="nwge\data\explosion_05";
	explosion_08="nwge\data\explosion_08";
	explosion_09="nwge\data\explosion_09";
	explosion_11="nwge\data\explosion_11";
	dir="nwge\data\dir";
	dirt="nwge\data\dirt";
	dirt_big="nwge\data\dirt_big";
	stones="nwge\data\stones";
	smoke="nwge\data\smoke";
	smoke_01="nwge\data\smoke_01";
	smoke_02="nwge\data\smoke_02";
	smoke_03="nwge\data\smoke_03";
};
class CfgMuzzleFlashes
{
	MuzzleFlashflare="nwge\data\flare";
	MuzzleFlashsparkseffect="nwge\data\sparkseffect";
};
class PreloadTextures
{
	class CfgMuzzleFlashes
	{
		MuzzleFlashflare="@*";
		MuzzleFlashsparkseffect="@*";
	};
	class CfgCloudletShapes
	{
		explosion_02="@*";
		explosion_04="@*";
		explosion_05="@*";
		explosion_08="@*";
		explosion_09="@*";
		explosion_11="@*";
		dir="@*";
		dirt="@*";
		dirt_big="@*";
		stones="@*";
		smoke="@*";
		smoke_01="@*";
		smoke_02="@*";
		smoke_03="@*";
	};
};
class CannonFired
{
	class nwge_Dust1
	{
		simulation="particles";
		type="nwge_DustTank1";
		enabled="(distToSurface interpolate[10.099,10.1,1,-1])";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class nwge_Dust2: nwge_Dust1
	{
		type="nwge_DustTank2";
	};
	class nwge_Dust3: nwge_Dust2
	{
		type="nwge_DustTank3";
	};
	class nwge_Dust4: nwge_Dust3
	{
		type="nwge_DustTank4";
	};
};
class CfgCloudlets
{
	class Default;
	class ObjectDestructionFire1Small;
	class ObjectDestructionFire2Small;
	class ObjectDestructionFire1;
	class ObjectDestructionFire2;
	class HouseDestructionSmoke1;
	class HouseDestructionSmoke: HouseDestructionSmoke1
	{
	};
	class nwge_Shard1: Default
	{
		particleEffects="nwge_ShardFire3";
		size[]={1.2};
		interval=0.050000001;
		particleShape="A3\data_f\ParticleEffects\Shard\shard";
		particleFSLoop=0;
		angleVar=1;
		particleType="SpaceObject";
		lifeTime=30;
		moveVelocity[]={0,5,0};
		rotationVelocity=3;
		weight=40;
		volume=7.9000001;
		color[]=
		{
			{1,1,1,1}
		};
		bounceOnSurface=0;
		lifeTimeVar=25;
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=3;
		sizeVar=0.75;
	};
	class nwge_Shard2: nwge_Shard1
	{
		size[]={0.69999999};
		moveVelocity[]={0,6,0};
		rotationVelocity=2;
		lifeTimeVar=23;
		MoveVelocityVar[]={15,15,15};
		rotationVelocityVar=2;
		sizeVar=0.34999999;
	};
	class nwge_Shard3: nwge_Shard2
	{
		size[]={0.5};
		interval=0.029999999;
		moveVelocity[]={0,8,0};
		rotationVelocity=1;
		lifeTimeVar=20;
		MoveVelocityVar[]={20,20,20};
		rotationVelocityVar=1;
		sizeVar=0.25;
	};
	class nwge_Shard1Static: nwge_Shard1
	{
		particleEffects="nwge_ShardFire1";
		interval=0.029999999;
		circleRadius=10;
		circleVelocity[]={0.001,0,0.001};
		lifeTime=60;
		weight=1.275;
		volume=1;
		rubbing=0;
		lifeTimeVar=50;
		positionVar[]={5,0,5};
		moveVelocity[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
	};
	class nwge_Shard2Static: nwge_Shard1Static
	{
		particleEffects="nwge_ShardFire2";
		size[]={0.69999999};
		interval=0.02;
		sizeVar=0.34999999;
	};
	class nwge_Shard3Static: nwge_Shard1Static
	{
		particleEffects="nwge_ShardFire3";
		size[]={0.5};
		interval=0.0099999998;
		sizeVar=0.25;
	};
	class nwge_DustTank1: Default
	{
		interval="0.001*isWaterSurface";
		circleRadius=0.5;
		circleVelocity[]={1,0,1};
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		lifeTime=3;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={3,6};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.12},
			{0.40000001,0.30000001,0.2,0.1},
			{0.40000001,0.30000001,0.2,0.050000001},
			{0.40000001,0.30000001,0.2,0.0099999998},
			{0.40000001,0.30000001,0.2,0.0049999999},
			{0.40000001,0.30000001,0.2,0.001},
			{0.40000001,0.30000001,0.2,0}
		};
		position[]=
		{
			"positionX+(directionLocalX*3)",
			"positionY+(directionLocalY*3)",
			"positionZ+(directionLocalZ*3)"
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		lifeTimeVar=0.40000001;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={15,1.2,15};
		moveVelocityVarConst[]={0,1.2,15};
		rotationVelocityVar=15;
		colorCoef[]={1,1,1,0.5};
		sizeVar=0.5;
	};
	class nwge_HeliLightExpl: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={50,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_82Dust1: Default
	{
		interval=0.001;
		circleRadius=0.5;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={3,6};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.12},
			{0.40000001,0.30000001,0.2,0.1},
			{0.40000001,0.30000001,0.2,0.050000001},
			{0.40000001,0.30000001,0.2,0.0099999998},
			{0.40000001,0.30000001,0.2,0.0049999999},
			{0.40000001,0.30000001,0.2,0.001},
			{0.40000001,0.30000001,0.2,0}
		};
		position[]={0,0,0};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		lifeTimeVar=0.40000001;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={15,1.2,15};
		moveVelocityVarConst[]={0,1.2,15};
		rotationVelocityVar=15;
		colorCoef[]={1,1,1,0.5};
		sizeVar=0.5;
		destroyOnWaterSurface=1;
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
	};
	class nwge_82LightExpl: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={50,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_155Dust1: Default
	{
		interval=0.001;
		circleRadius=0.5;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		lifeTime=4;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={3,6};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.12},
			{0.40000001,0.30000001,0.2,0.1},
			{0.40000001,0.30000001,0.2,0.050000001},
			{0.40000001,0.30000001,0.2,0.0099999998},
			{0.40000001,0.30000001,0.2,0.0049999999},
			{0.40000001,0.30000001,0.2,0.001},
			{0.40000001,0.30000001,0.2,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		lifeTimeVar=0.40000001;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={30,1.2,30};
		moveVelocityVarConst[]={0,1.2,30};
		rotationVelocityVar=30;
		colorCoef[]={1,1,1,0.5};
		sizeVar=0.5;
		destroyOnWaterSurface=1;
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
	};
	class nwge_155LightExpl: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={99,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_DustArty1: Default
	{
		interval="0.001*isWaterSurface";
		circleRadius=0.5;
		circleVelocity[]={1,0,1};
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		lifeTime=3;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={3,6};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.12},
			{0.40000001,0.30000001,0.2,0.1},
			{0.40000001,0.30000001,0.2,0.050000001},
			{0.40000001,0.30000001,0.2,0.0099999998},
			{0.40000001,0.30000001,0.2,0.0049999999},
			{0.40000001,0.30000001,0.2,0.001},
			{0.40000001,0.30000001,0.2,0}
		};
		position[]=
		{
			"positionX+(directionLocalX*3)",
			"positionY+(directionLocalY*3)",
			"positionZ+(directionLocalZ*3)"
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		lifeTimeVar=0.40000001;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={15,1.2,15};
		moveVelocityVarConst[]={0,1.2,15};
		rotationVelocityVar=15;
		colorCoef[]={1,1,1,0.5};
		sizeVar=0.5;
	};
	class nwge_ArtilleryFired1: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4.5;
		moveVelocity[]=
		{
			"100*directionX",
			"100*directionY",
			"100*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.25;
		size[]={2,5};
		color[]=
		{
			{0.5,0.5,0.5,0},
			{0.5,0.5,0.5,0.029999999},
			{0.5,0.5,0.5,0.029999999},
			{0.5,0.5,0.5,0.029999999},
			{0.5,0.5,0.5,0.02},
			{0.5,0.5,0.5,0.0099999998},
			{0.5,0.5,0.5,0.0099999998},
			{0.5,0.5,0.5,0}
		};
		animationSpeed[]={1.2};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		destroyOnWaterSurface=1;
		sizeCoef=2.4000001;
		colorCoef[]={1,1,1,1.8};
		position[]=
		{
			"positionX+0.12*directionLocalX",
			"positionY+0.12*directionLocalY",
			"positionZ+0.12*directionLocalZ"
		};
		MoveVelocityVar[]={60,60,60};
		rotationVelocityVar=15;
	};
	class nwge_ArtilleryFiredF: Default
	{
		interval=0.003;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"80*directionX",
			"80*directionY",
			"80*directionZ"
		};
		rotationVelocity=1;
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.25;
		size[]={0.5,2.5,2.8,3};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.003},
			{0.80000001,0.80000001,0.80000001,0.003},
			{0.80000001,0.80000001,0.80000001,0.003},
			{0.80000001,0.80000001,0.80000001,0.003},
			{0.80000001,0.80000001,0.80000001,0.0017},
			{0.80000001,0.80000001,0.80000001,0.0017},
			{0.80000001,0.80000001,0.80000001,0.001},
			{0.80000001,0.80000001,0.80000001,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=0.30000001;
		destroyOnWaterSurface=1;
		position[]=
		{
			"positionX",
			"positionY ",
			"positionZ"
		};
		lifeTimeVar=0.2;
		positionVar[]={0.1,0.1,0.1};
		positionVarConst[]=
		{
			"directionLocalX",
			"directionLocalY",
			"directionLocalZ"
		};
		MoveVelocityVar[]={1,1,1};
		MoveVelocityVarConst[]=
		{
			"4.5*directionX",
			"4.5*directionY",
			"4.5*directionZ"
		};
		rotationVelocityVar=20;
	};
	class nwge_ArtilleryFiredL: Default
	{
		interval=0.001;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		lifeTime=1;
		moveVelocity[]=
		{
			"8*directionX",
			"8*directionY",
			"8*directionZ"
		};
		rotationVelocity=1;
		size[]={0.5,1.5,2,2.5};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=0.30000001;
		color[]=
		{
			{0.89999998,0.89999998,0.89999998,0.2},
			{0.80000001,0.80000001,0.80000001,0.18000001},
			{0.69999999,0.69999999,0.69999999,0.13},
			{0.60000002,0.60000002,0.60000002,0.1},
			{0.5,0.5,0.5,0}
		};
		colorCoef[]={0.5,0.5,0.5,0.2};
		position[]=
		{
			"positionX",
			"positionY ",
			"positionZ"
		};
		positionVar[]={0.1,0.1,0.1};
		positionVarConst[]=
		{
			"directionLocalX",
			"directionLocalY",
			"directionLocalZ"
		};
		MoveVelocityVar[]={1,1,1};
		MoveVelocityVarConst[]=
		{
			"5*directionX",
			"5*directionY",
			"5*directionZ"
		};
		rotationVelocityVar=20;
	};
	class nwge_ClustLightExpl: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={25,5};
		color[]=
		{
			{1,0.69999999,0.029999999,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_MK82Dust1: Default
	{
		interval=0.001;
		circleRadius=0.5;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		lifeTime=4;
		moveVelocity[]={0,0.2,0};
		rotationVelocity=1;
		weight=1.25;
		volume=1;
		rubbing=0.0099999998;
		size[]={3,6};
		color[]=
		{
			{0.40000001,0.30000001,0.2,0.12},
			{0.40000001,0.30000001,0.2,0.1},
			{0.40000001,0.30000001,0.2,0.050000001},
			{0.40000001,0.30000001,0.2,0.0099999998},
			{0.40000001,0.30000001,0.2,0.0049999999},
			{0.40000001,0.30000001,0.2,0.001},
			{0.40000001,0.30000001,0.2,0}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.050000001;
		lifeTimeVar=0.40000001;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={30,1.2,30};
		moveVelocityVarConst[]={0,1.2,30};
		rotationVelocityVar=30;
		colorCoef[]={1,1,1,0.5};
		sizeVar=0.5;
		destroyOnWaterSurface=1;
		surfaceOffset=0;
		bounceOnSurface=0.60000002;
		bounceOnSurfaceVar=0;
	};
	class nwge_MK82LightExpl: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={150,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_MK82exp3: Default
	{
		interval=0.0049999999;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.30000001;
		weight=50;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={18,0};
		color[]=
		{
			{1,0.5,0,-1},
			{1,0.5,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={12,12,12};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_LauLightExpl: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={20,5};
		color[]=
		{
			{1,0.69999999,0.029999999,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_CarFuelSmokLink: Default
	{
		interval=0.0099999998;
		particleShape="nwge\data\smoke";
		anglevar=360;
		lifeTime=4;
		moveVelocity[]=
		{
			"0+(speedX/15)",
			"0+(speedY/15)",
			"0+(speedZ/15)"
		};
		weight=6;
		volume=7.9000001;
		rubbing=1;
		size[]={6,10};
		color[]=
		{
			{0.0099999998,0.0099999998,0.0099999998,0.2},
			{0.0099999998,0.0099999998,0.0099999998,1},
			{0.0099999998,0.0099999998,0.0099999998,0}
		};
		animationSpeed[]={1,0.5};
		lifeTimeVar=0.1;
		MoveVelocityVar[]={5,5,5};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriod=0.0089999996;
		randomDirectionIntensity=0.0089999996;
		randomDirectionPeriodVar=0.0089999996;
		randomDirectionIntensityVar=0.0089999996;
	};
	class nwge_CarFuelFireLink: Default
	{
		interval=0.0099999998;
		particleShape="nwge\data\smoke";
		angleVar=360;
		lifeTime=1;
		weight=10;
		volume=7.9000001;
		rubbing=0.075000003;
		positionVar[]={50,50,50};
		sizeVar=0.25;
		destroyOnWaterSurface=1;
		bounceOnSurface=0;
		bounceOnSurfaceVar=0;
		Size[]={200};
		color[]=
		{
			{1,1,1,-0.0024999999},
			{1,1,1,0}
		};
		randomDirectionPeriod=1;
		emissiveColor[]=
		{
			{120,20,0,0},
			{0,0,0,0}
		};
	};
	class nwge_VEEExpSmok1: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={50,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_VEEExpSmok2: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.1;
		weight=50;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={60,0};
		color[]=
		{
			{1,1,0.60000002,0.003},
			{1,1,0.60000002,0}
		};
		animationSpeed[]={0};
		positionVar[]={15,15,15};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1000,1000,100,1}
		};
	};
	class nwge_VEEBExplBlst: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.1;
		weight=50;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={60,0};
		color[]=
		{
			{1,1,0.60000002,0.001},
			{1,1,0.60000002,0}
		};
		animationSpeed[]={0};
		positionVar[]={15,15,15};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1000,1000,100,1}
		};
	};
	class nwge_VEESExpSmok1: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={50,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_VEESExpSmok2: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.1;
		weight=50;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={60,0};
		color[]=
		{
			{1,1,0.60000002,0.003},
			{1,1,0.60000002,0}
		};
		animationSpeed[]={0};
		positionVar[]={15,15,15};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1000,1000,100,1}
		};
	};
	class nwge_HeliExplLight: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={30,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_PlanExplLight: Default
	{
		interval=0.07;
		particleShape="nwge\data\smoke";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,20,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={70,5};
		color[]=
		{
			{1,1,0,-0.0024999999},
			{1,1,0,0}
		};
		animationSpeed[]={0};
		positionVar[]={5,5,5};
		rotationVelocityVar=1;
		emissiveColor[]=
		{
			{1200,1200,1,1}
		};
	};
	class nwge_HeliExplSmoke: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=20;
		moveVelocity[]={0,10,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={6,15};
		color[]=
		{
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,1},
			{0.15000001,0.15000001,0.15000001,0.89999998},
			{0.15000001,0.15000001,0.15000001,0.80000001},
			{0.15000001,0.15000001,0.15000001,0.69999999},
			{0.15000001,0.15000001,0.15000001,0.60000002},
			{0.15000001,0.15000001,0.15000001,0.5},
			{0.15000001,0.15000001,0.15000001,0.40000001},
			{0.15000001,0.15000001,0.15000001,0.30000001},
			{0.15000001,0.15000001,0.15000001,0.2},
			{0.15000001,0.15000001,0.15000001,0.1},
			{0.15000001,0.15000001,0.15000001,0}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		lifeTimeVar=0.5;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={2,10,2};
		rotationVelocityVar=10;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_HeliExplSparks: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=0.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.18000001;
		size[]={0.5};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
		destroyOnWaterSurface=1;
	};
	class nwge_HeliDestSpark: Default
	{
		interval=0.050000001;
		particleShape="A3\data_f\cl_fire";
		lifeTime=6;
		rotationVelocity=1;
		weight=0.0049999999;
		volume=0.0041999999;
		rubbing=0.050000001;
		size[]={0.079999998,0.059999999,0.039999999,0.02,0.0099999998};
		color[]=
		{
			{1,1,1,1},
			{0,0,0,0}
		};
		animationSpeed[]={0,1};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		lifeTimeVar=2;
		moveVelocityVar[]={0.30000001,0.1,0.30000001};
		sizeVar=0.039999999;
		emissiveColor[]=
		{
			{100,100,10,1}
		};
		position[]={0,-0.2,0};
	};
	class nwge_TankSpark1: Default
	{
		interval=0.025;
		particleShape="A3\data_f\cl_fire";
		lifeTime=6;
		rotationVelocity=1;
		weight=0.0049999999;
		volume=0.0041999999;
		size[]={0.050000001,0.029999999,0.02};
		color[]=
		{
			{1,1,1,1},
			{0,0,0,0}
		};
		animationSpeed[]={0,1};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		lifeTimeVar=0.80000001;
		moveVelocityVar[]={1,0.1,1};
		sizeVar=0.0099999998;
		emissiveColor[]=
		{
			{200,200,20,1}
		};
	};
	class nwge_TankWheSpark2: Default
	{
		interval=0.02;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=3.5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=1;
		weight=1.05;
		volume=1;
		rubbing=0.17;
		size[]={0.1,0.1,0.1,0.1,0.1,0.079999998,0.079999998,0.079999998,0.079999998,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.55000001;
		lifeTimeVar=2.5;
		positionVar[]={0,0.2,0};
		MoveVelocityVar[]={0.2,1,0.2};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0.30000001;
		randomDirectionIntensityVar=0.15000001;
	};
	class nwge_TankDestSmoke: Default
	{
		positionVar[]={0,1,0};
		circleRadius=0.80000001;
		moveVelocity[]={0,5,0};
		interval=0.15000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=0.5;
		lifeTime=76;
		weight=0.050000001;
		volume=0.039999999;
		size[]={3,25,25};
		color[]=
		{
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,1},
			{0.2,0.2,0.2,0.34999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		randomDirectionPeriod=1;
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensity=0.125;
		randomDirectionIntensityVar=0.050000001;
		lifeTimeVar=61;
		rotationVelocityVar=12;
		colorVar[]={0,0,0,0.0099999998};
	};
	class nwge_TankDestructionSmoke: Default
	{
		interval=0.02;
		circleRadius=1.2;
		positionVar[]={0.5,0,0.5};
		MoveVelocityVar[]={1.5,0.1,1.5};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSFrameCount=40;
		particleFSLoop=0;
		angleVar=1;
		lifeTime=3.2;
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		size[]={1.25,1.5,2.5};
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.60000002},
			{0.050000001,0.050000001,0.050000001,0.89999998},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.64999998},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.25},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onSurface=0;
		lifeTimeVar=0.69999999;
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
	};
	class nwge_TankWheDestructionSmoke: Default
	{
		interval=0.02;
		circleRadius=1.2;
		positionVar[]={0.5,0,0.5};
		MoveVelocityVar[]={1.2,0.1,1.2};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSFrameCount=40;
		particleFSLoop=0;
		angleVar=1;
		lifeTime=3.2;
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		size[]={1.25,1.5,2.5};
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.60000002},
			{0.050000001,0.050000001,0.050000001,0.89999998},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.64999998},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.25},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onSurface=0;
		lifeTimeVar=0.69999999;
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
	};
	class MLRSFired1: Default
	{
		interval=0.00030000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=13;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=5;
		moveVelocity[]=
		{
			"5*directionX",
			"5*directionY",
			"5*directionZ"
		};
		rotationVelocity=1;
		weight=1.22;
		volume=1;
		rubbing=0.40000001;
		size[]={3,8};
		color[]=
		{
			{0.5,0.5,0.5,0.22},
			{0.5,0.5,0.5,0.12},
			{0.5,0.5,0.5,0.079999998},
			{0.5,0.5,0.5,0.050000001},
			{0.5,0.5,0.5,0.0099999998}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		animationSpeedCoef=1;
		colorCoef[]={1,1,1,1};
		sizeCoef=1;
		position[]=
		{
			"positionX",
			"positionY",
			"positionZ"
		};
		lifeTimeVar=1;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={3.5,3.5,3.5};
		rotationVelocityVar=10;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class ArtilleryShell1: Default
	{
		interval=0.0035000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.5;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.23;
		volume=1;
		rubbing=0.2;
		size[]={0.60000002,1.8,2.5};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0.14},
			{0.60000002,0.60000002,0.60000002,0.059999999},
			{0.69999999,0.69999999,0.69999999,0.02},
			{0.80000001,0.80000001,0.80000001,0.0060000001},
			{0.89999998,0.89999998,0.89999998,0.001}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={5};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.2;
		positionVar[]={0.079999998,0.079999998,0.079999998};
		MoveVelocityVar[]={0.30000001,0.30000001,0.30000001};
		rotationVelocityVar=20;
		sizeVar=0.15000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class nwge_82Smoke1: Default
	{
		interval=0.0060000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=8;
		moveVelocity[]={0,5,0};
		weight=12;
		volume=7.9000001;
		rubbing=1.5;
		size[]={4};
		color[]=
		{
			{0.47999999,0.38,0.28,0.1},
			{0.88,0.77999997,0.68000001,0}
		};
		lifeTimeVar=0.5;
		positionVar[]={2,5,2};
		MoveVelocityVar[]={5,1,5};
		rotationVelocityVar=20;
		sizeVar=0.5;
	};
	class FX_MissileTrail_SAM_LongRange: Default
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		interval=0.0026;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=9;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=2.22;
		volume=1;
		rubbing=0.40000001;
		size[]={1,8};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.80000001},
			{0.89999998,0.89999998,0.89999998,0.40000001},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class FX_MissileTrail_SAM: Default
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		interval=0.0026;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=9;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=2.24;
		volume=1.7;
		rubbing=0.5;
		size[]={2,6};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.80000001},
			{0.89999998,0.89999998,0.89999998,0.40000001},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile0: Default
	{
		interval=0.0020000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=2.8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1;
		volume=0.80000001;
		rubbing=0.5;
		size[]={1,2.8,4};
		sizeCoef=1;
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.18000001},
			{0.75,0.75,0.75,0.059999999},
			{0.80000001,0.80000001,0.80000001,0}
		};
		colorCoef[]={1.2,1.2,1.2,1.2};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.80000001;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.40000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MissileManualEffects1: Default
	{
		interval=0.0015;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=6;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=0.89999998;
		size[]={1,2.5,2.5};
		sizeCoef=1;
		color[]=
		{
			{0.5,0.5,0.5,0.07},
			{0.60000002,0.60000002,0.60000002,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile1: Default
	{
		interval=0.0027000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=0.89999998;
		size[]={2,2};
		sizeCoef=1;
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.18000001},
			{0.40000001,0.40000001,0.40000001,0.059999999},
			{0.80000001,0.80000001,0.80000001,0}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1};
		animationSpeedCoef=1;
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.30000001;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		class Light1
		{
			simulation="light";
			type="RocketLight";
			position[]={0,0,0};
			intensity=0.015;
			interval=1;
			lifeTime=1;
		};
		class MissileEffects1
		{
			simulation="particles";
			type="Missile1";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class Missile2: Default
	{
		interval=0.0027000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=0.5;
		size[]={2,2};
		color[]=
		{
			{0.5,0.5,0.5,0.07},
			{0.60000002,0.60000002,0.60000002,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.25;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		class Light1
		{
			simulation="light";
			type="RocketLight";
			position[]={0,0,0};
			intensity=0.015;
			interval=1;
			lifeTime=1;
		};
		class Missile2
		{
			simulation="particles";
			type="Missile2";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=1;
			qualityLevel=2;
		};
		class Missile2Med
		{
			simulation="particles";
			type="Missile2Med";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=1;
			qualityLevel=1;
		};
	};
	class Missile2Med: Default
	{
		interval=0.0027000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=1;
		size[]={2,2};
		color[]=
		{
			{0.5,0.5,0.5,0.07},
			{0.60000002,0.60000002,0.60000002,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile3: Default
	{
		interval=0.0027000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=1;
		size[]={2.2,2.2};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.80000001},
			{0.89999998,0.89999998,0.89999998,0.40000001},
			{1,1,1,0}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.30000001;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		class Light1
		{
			simulation="light";
			type="RocketLight";
			position[]={0,0,0};
			intensity=0.015;
			interval=1;
			lifeTime=1;
		};
		class Missile3
		{
			simulation="particles";
			type="Missile3";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=1;
			qualityLevel=2;
		};
		class Missile3Med
		{
			simulation="particles";
			type="Missile3Med";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=1;
			qualityLevel=1;
		};
	};
	class Missile3Med: Default
	{
		interval=0.0027000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=1;
		size[]={1.7,1.7};
		color[]=
		{
			{0.5,0.5,0.5,0.07},
			{0.60000002,0.60000002,0.60000002,0.02},
			{0.69999999,0.69999999,0.69999999,0.0099999998},
			{0.80000001,0.80000001,0.80000001,0.0049999999},
			{0.89999998,0.89999998,0.89999998,0.003}
		};
		animationSpeed[]={5};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class Missile4: Default
	{
		interval=0.0024999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=8;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=1;
		size[]={2.7,3};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.050000001},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.1;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		class Light1
		{
			simulation="light";
			type="RocketLight";
			position[]={0,0,0};
			intensity=0.0099999998;
			interval=1;
			lifeTime=1;
		};
		class Missile4
		{
			simulation="particles";
			type="Missile4";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class Missile5: Default
	{
		interval=0.0027000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.24;
		volume=1;
		rubbing=1;
		size[]={3,7};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.80000001},
			{0.89999998,0.89999998,0.89999998,0.40000001},
			{1,1,1,0}
		};
		animationSpeed[]={1};
		randomDirectionPeriod=0.1;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.2;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.40000001,0.40000001,0.40000001};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		class Light1
		{
			simulation="light";
			type="RocketLight";
			position[]={0,0,0};
			intensity=0.015;
			interval=1;
			lifeTime=1;
		};
		class Missile5
		{
			simulation="particles";
			type="Missile5";
			position[]={0,0,0};
			intensity=1;
			interval=1;
			lifeTime=1;
		};
	};
	class nwge_155Dust5: nwge_155Dust1
	{
		particleShape="A3\data_f\ParticleEffects\universal\refract";
		weight=10;
		volume=7.9000001;
		color[]=
		{
			{1,1,1,0.60000002},
			{1,1,1,0}
		};
	};
	class nwge_82StonesSmall1: Default
	{
		interval=0.003;
		particleShape="a3\data_f\particleeffects\pstone\pstone";
		particleFSLoop=0;
		angleVar=360;
		particleType="SpaceObject";
		lifeTime=6;
		moveVelocity[]=
		{
			"(surfNormalX/1)*20",
			"(surfNormalY/1)*20",
			"(surfNormalZ/1)*20"
		};
		weight=30;
		volume=7.9000001;
		rubbing=0;
		size[]={0.2};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,1}
		};
		MoveVelocityVar[]={20,20,20};
		rotationVelocityVar=3;
		bounceOnSurface=0.30000001;
		bounceOnSurfaceVar=0.25;
	};
	class nwge_ShardSmokeLink: Default
	{
		interval="0.08/((speed+0.01)*0.8+1)";
		particleShape="nwge\data\smoke_03";
		angleVar=1;
		lifeTime=1.2;
		moveVelocity[]={0,0.60000002,0};
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.22;
		size[]={0.1,0.60000002};
		color[]=
		{
			{0.1,0.1,0.1,0.60000002},
			{0.2,0.2,0.2,0.40000001},
			{0.2,0.2,0.2,0.2},
			{0.30000001,0.30000001,0.30000001,0.1},
			{0.40000001,0.40000001,0.40000001,0.0049999999}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.02;
		lifeTimeVar=0.5;
		positionVar[]={0.079999998,0.039999999,0.079999998};
		MoveVelocityVar[]={0.079999998,0.1,0.079999998};
		sizeVar=0.1;
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_82SmokeDark: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\smoke_02";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=5;
		moveVelocity[]={0,1,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.80000001;
		size[]={2,5};
		color[]=
		{
			{0.02,0.02,0.02,0.80000001},
			{0.02,0.02,0.02,0}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		lifeTimeVar=0.2;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={1.5,1.5,1.5};
		rotationVelocityVar=20;
		sizeVar=0.2;
		colorVar[]={0.0099999998,0.0099999998,0.0099999998,0.2};
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_82SmokeTrail1: Default
	{
		particleEffects="nwge_82SmokeTrail1Link1";
		interval=0.029999999;
		particleShape="nwge\data\sparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.02;
		moveVelocity[]=
		{
			"(surfNormalX/1)*120",
			"(surfNormalY/1)*120",
			"(surfNormalZ/1)*120"
		};
		rotationVelocity=1;
		weight=10;
		volume=7.9000001;
		rubbing=0;
		size[]={0.0099999998};
		color[]=
		{
			{1,1,0.40000001,-15},
			{1,1,0.40000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		MoveVelocityVar[]={200,120,200};
		rotationVelocityVar=1;
		sizeVar=0.1;
	};
	class nwge_82SmokeTrail2: nwge_82SmokeTrail1
	{
		particleEffects="nwge_82SmokeTrail2Link1";
		lifeTime=0.1;
		moveVelocity[]=
		{
			"(surfNormalX/1)*60",
			"(surfNormalY/1)*60",
			"(surfNormalZ/1)*60"
		};
		MoveVelocityVar[]={120,60,120};
	};
	class nwge_82Stones: Default
	{
		interval=0.001;
		particleShape="nwge\data\dir";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=3;
		moveVelocity[]={4,10,4};
		rotationVelocity=5;
		weight=6;
		volume=0.1;
		rubbing=0;
		size[]={5};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,2},
			{0.30000001,0.30000001,0.30000001,0}
		};
		lifeTimeVar=0.2;
		MoveVelocityVar[]={8,10,8};
		rotationVelocityVar=1;
		sizeVar=0.40000001;
		destroyOnWaterSurface=1;
	};
	class nwge_82Explode1: Default
	{
		interval=0.0099999998;
		particleShape="nwge\data\explosion_09";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.40000001;
		moveVelocity[]={0,4,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.0099999998;
		size[]={2.5};
		color[]=
		{
			{1,1,0.5,-2},
			{1,1,0.5,0}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		positionVar[]={2,1,2};
		MoveVelocityVar[]={1,2,1};
		rotationVelocityVar=20;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_82Sparks: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=0.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.18000001;
		size[]={0.5};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
		destroyOnWaterSurface=1;
	};
	class nwge_82SmokeTrail1Link2: Default
	{
		interval=0.0099999998;
		particleEffects="nwge_82SmokeTrail1Link3";
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=10.15;
		volume=7.9000001;
		rubbing=1.8;
		size[]={0,3};
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,0.5}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
	};
	class nwge_82SmokeTrail1Link4: Default
	{
		interval=0.30000001;
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=10.3;
		volume=7.9000001;
		rubbing=1.8;
		size[]={5,10};
		color[]=
		{
			{1,0.89999998,0.80000001,0.2},
			{1,0.89999998,0.80000001,0.40000001},
			{1,0.89999998,0.80000001,0.34999999},
			{1,0.89999998,0.80000001,0.30000001},
			{1,0.89999998,0.80000001,0.25},
			{1,0.89999998,0.80000001,0.2},
			{1,0.89999998,0.80000001,0.15000001},
			{1,0.89999998,0.80000001,0.1},
			{1,0.89999998,0.80000001,0.050000001},
			{1,0.89999998,0.80000001,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=15;
	};
	class nwge_82SmokeTrail2Link2: Default
	{
		interval=0.0049999999;
		particleEffects="nwge_82SmokeTrail2Link3";
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"0+(speedX/3)",
			"0+(speedY/3)",
			"0+(speedZ/3)"
		};
		weight=11.5;
		volume=7.9000001;
		rubbing=1.8;
		size[]={0,2};
		color[]=
		{
			{0.30000001,0.2,0.1,0.5},
			{0.30000001,0.2,0.1,0.40000001},
			{0.30000001,0.2,0.1,0.30000001},
			{0.30000001,0.2,0.1,0.2},
			{0.30000001,0.2,0.1,0.1},
			{0.30000001,0.2,0.1,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
	};
	class nwge_82SmokeTrail2Link4: Default
	{
		interval=4;
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=11.5;
		volume=7.9000001;
		rubbing=1.8;
		size[]={2,15};
		color[]=
		{
			{0.30000001,0.2,0.1,0.5},
			{0.30000001,0.2,0.1,0.40000001},
			{0.30000001,0.2,0.1,0.30000001},
			{0.30000001,0.2,0.1,0.2},
			{0.30000001,0.2,0.1,0.1},
			{0.30000001,0.2,0.1,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={6,6,6};
		rotationVelocityVar=15;
	};
	class nwge_155SmokeBigDark: Default
	{
		interval="0.2*interval+0.01";
		particleShape="nwge\data\smoke_02";
		particleFSLoop=0;
		lifeTime=18;
		moveVelocity[]={0,3,0};
		rotationVelocity=1;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125*intensity+2",
			"0.0125*intensity+3",
			"0.0125*intensity+4",
			"0.125*intensity+5"
		};
		color[]=
		{
			{0.2,0.2,0.2,1},
			{0.40000001,0.40000001,0.40000001,0.60000002},
			{0.60000002,0.60000002,0.60000002,0.30000001},
			{1,1,1,0}
		};
		animationSpeed[]={1000};
		randomDirectionIntensity=0.2;
		positionVar[]={4,3,4};
		MoveVelocityVar[]={2,3,2};
		rotationVelocityVar=1;
		sizeVar=0.60000002;
	};
	class nwge_155SmokeTrail1: Default
	{
		particleEffects="nwge_155SmokeTrail1Link1";
		particleShape="nwge\data\sparksEffect";
		interval=0.02;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.050000001;
		moveVelocity[]=
		{
			"(surfNormalX/1)*120",
			"(surfNormalY/1)*120",
			"(surfNormalZ/1)*120"
		};
		rotationVelocity=1;
		weight=10;
		volume=7.9000001;
		rubbing=0;
		size[]={0.0099999998};
		color[]=
		{
			{1,1,0.40000001,-15},
			{1,1,0.40000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		MoveVelocityVar[]={200,120,200};
		rotationVelocityVar=1;
		sizeVar=0.1;
	};
	class nwge_155Dirt: Default
	{
		interval=0.001;
		particleShape="nwge\data\dirt";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=3;
		moveVelocity[]={0,45,0};
		rotationVelocity=5;
		weight=30;
		volume=1;
		rubbing=2;
		size[]={0.5,2,3};
		color[]=
		{
			{0.5,0.40000001,0.30000001,3},
			{0.31,0.2,0.1,0}
		};
		positionVar[]={1,1,1};
		MoveVelocityVar[]={25,45,25};
		rotationVelocityVar=1;
		sizeVar=0.5;
	};
	class nwge_155Stones: Default
	{
		interval=0.029999999;
		particleShape="nwge\data\stones";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=5;
		moveVelocity[]={0,70,0};
		rotationVelocity=5;
		weight=30;
		volume=1;
		rubbing=2;
		size[]={0.5};
		color[]=
		{
			{0.5,0.40000001,0.30000001,3},
			{0.30000001,0.2,0.1,0}
		};
		positionVar[]={0.5,5,0.5};
		MoveVelocityVar[]={10,80,10};
		rotationVelocityVar=1;
		sizeVar=0.1;
	};
	class nwge_155StonesBig: Default
	{
		interval=0.001;
		particleShape="nwge\data\dirt_big";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=6;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=20;
		volume=7.9000001;
		rubbing=0;
		size[]={0.5};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,3},
			{0.30000001,0.30000001,0.30000001,0}
		};
		lifeTimeVar=0.2;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={6,6,6};
		rotationVelocityVar=5;
		sizeVar=0.2;
		destroyOnWaterSurface=1;
	};
	class nwge_155StonesSmall1: Default
	{
		interval=0.0020000001;
		particleShape="a3\data_f\particleeffects\pstone\pstone";
		particleFSLoop=0;
		particleType="spaceobject";
		angleVar=360;
		lifeTime=6;
		moveVelocity[]={0,40,0};
		rotationVelocity=10;
		weight=30;
		volume=1;
		rubbing=1;
		size[]={0.25};
		color[]=
		{
			{1,1,1,6}
		};
		positionVar[]={1,1,1};
		MoveVelocityVar[]={80,40,80};
		moveVelocityVarConst[]={0,40,80};
		rotationVelocityVar=1;
		sizeVar=0.5;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.25;
	};
	class nwge_155Explode1: Default
	{
		interval=0.001;
		particleShape="nwge\data\explosion_09";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]={0,2,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.0099999998;
		size[]={4};
		color[]=
		{
			{1,1,0.5,-2},
			{1,1,0.5,0}
		};
		animationSpeed[]={2};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=20;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_155Sparks: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=1;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.18000001;
		size[]={1};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
		destroyOnWaterSurface=1;
	};
	class nwge_155SmokeTrail1Link2: Default
	{
		interval=0.0099999998;
		particleEffects="nwge_155SmokeTrail1Link3";
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=10.15;
		volume=7.9000001;
		rubbing=1.8;
		size[]={0,3};
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,0.5}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=20;
	};
	class nwge_155SmokeTrail1Link4: Default
	{
		interval=0.30000001;
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=8;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=10.3;
		volume=7.9000001;
		rubbing=1.8;
		size[]={5,15};
		color[]=
		{
			{1,0.89999998,0.80000001,0.2},
			{1,0.89999998,0.80000001,0.40000001},
			{1,0.89999998,0.80000001,0.34999999},
			{1,0.89999998,0.80000001,0.30000001},
			{1,0.89999998,0.80000001,0.25},
			{1,0.89999998,0.80000001,0.2},
			{1,0.89999998,0.80000001,0.15000001},
			{1,0.89999998,0.80000001,0.1},
			{1,0.89999998,0.80000001,0.050000001},
			{1,0.89999998,0.80000001,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=15;
	};
	class nwge_155SmokeTrail2Link2: Default
	{
		interval=0.0049999999;
		particleEffects="nwge_155SmokeTrail2Link3";
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"0+(speedX/3)",
			"0+(speedY/3)",
			"0+(speedZ/3)"
		};
		weight=10.15;
		volume=7.9000001;
		rubbing=1.8;
		size[]={0,2};
		color[]=
		{
			{0.30000001,0.2,0.1,0.5},
			{0.30000001,0.2,0.1,0.40000001},
			{0.30000001,0.2,0.1,0.30000001},
			{0.30000001,0.2,0.1,0.2},
			{0.30000001,0.2,0.1,0.1},
			{0.30000001,0.2,0.1,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
	};
	class nwge_155SmokeTrail2Link4: Default
	{
		interval=4;
		particleShape="a3\data_f\particleeffects\universal\universal_02";
		particleFSNtieth=8;
		particleFSFrameCount=40;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=11.3;
		volume=7.9000001;
		rubbing=1.8;
		size[]={2,15};
		color[]=
		{
			{0.30000001,0.2,0.1,0.2},
			{0.30000001,0.2,0.1,0.40000001},
			{0.30000001,0.2,0.1,0.34999999},
			{0.30000001,0.2,0.1,0.30000001},
			{0.30000001,0.2,0.1,0.25},
			{0.30000001,0.2,0.1,0.2},
			{0.30000001,0.2,0.1,0.15000001},
			{0.30000001,0.2,0.1,0.1},
			{0.30000001,0.2,0.1,0.050000001},
			{0.30000001,0.2,0.1,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={6,6,6};
		rotationVelocityVar=15;
	};
	class nwge_155SmokeTrail2Link5: Default
	{
		interval=4;
		particleShape="nwge\data\smoke_03";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=8;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=10.3;
		volume=7.9000001;
		rubbing=1.8;
		size[]={2,15};
		color[]=
		{
			{0.1,0.1,0.1,0.2},
			{0.2,0.2,0.2,0.40000001},
			{0.30000001,0.30000001,0.30000001,0.34999999},
			{0.40000001,0.40000001,0.40000001,0.30000001},
			{0.5,0.44999999,0.40000001,0.25},
			{0.60000002,0.5,0.40000001,0.2},
			{0.69999999,0.60000002,0.5,0.15000001},
			{0.80000001,0.69999999,0.60000002,0.1},
			{0.89999998,0.80000001,0.69999999,0.050000001},
			{1,0.89999998,0.80000001,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={6,6,6};
		rotationVelocityVar=15;
	};
	class nwge_155SmokeBlastcoreLink2: Default
	{
		interval=0.02;
		particleEffects="nwge_155SmokeBlastcoreLink3";
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.1;
		moveVelocity[]=
		{
			"0+(speedX/2)",
			"0+(speedY/2)",
			"0+(speedZ/2)"
		};
		weight=10.15;
		volume=7.9000001;
		rubbing=1;
		size[]={4};
		color[]=
		{
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-0.89999998},
			{1,1,0.5,-0.80000001},
			{1,1,0.5,-0.69999999},
			{1,1,0.5,-0.60000002},
			{1,1,0.5,-0.5},
			{1,1,0.5,-0.40000001},
			{1,1,0.5,-0.30000001},
			{1,1,0.5,-0.2},
			{1,1,0.5,-0.1},
			{1,1,0.5,0}
		};
		animationSpeed[]={2};
		MoveVelocityVar[]={5,5,5};
		emissiveColor[]=
		{
			{10000,10000,10000,0.079999998},
			{0,0,0,0}
		};
	};
	class nwge_155SmokeBlastcoreLink4: Default
	{
		interval=0.079999998;
		particleShape="a3\data_f\particleeffects\universal\universal_02";
		particleFSNtieth=8;
		particleFSFrameCount=40;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=8;
		moveVelocity[]=
		{
			"0+(speedX/15)",
			"0+(speedY/15)",
			"0+(speedZ/15)"
		};
		weight=10.15;
		volume=7.9000001;
		rubbing=1;
		size[]={4,8};
		color[]=
		{
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.69999999},
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=10;
	};
	class nwge_ArtillerySparks: Default
	{
		interval=0.003;
		particleShape="nwge\data\explosion_04";
		particleFSNtieth=8;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.1;
		moveVelocity[]=
		{
			"30*directionX",
			"30*directionY",
			"30*directionZ"
		};
		rotationVelocity=1;
		weight=10.1;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={0.40000001};
		color[]=
		{
			{1,1,1,-6},
			{1,1,1,0}
		};
		lifeTimeVar=0.30000001;
		position[]=
		{
			"positionX*0.9",
			"positionY*0.9",
			"positionZ*0.9"
		};
		MoveVelocityVar[]={5,5,5};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		emissiveColor[]=
		{
			{100,100,10,1}
		};
	};
	class nwge_ClustDir: Default
	{
		interval=0.0099999998;
		particleShape="nwge\data\dir";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=3;
		moveVelocity[]={4,10,4};
		rotationVelocity=5;
		weight=6;
		volume=0.1;
		rubbing=0;
		size[]={5};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,2},
			{0.30000001,0.30000001,0.30000001,0}
		};
		lifeTimeVar=0.2;
		MoveVelocityVar[]={8,10,8};
		rotationVelocityVar=1;
		sizeVar=0.40000001;
		destroyOnWaterSurface=1;
	};
	class nwge_ClustExplos: Default
	{
		interval=0.029999999;
		particleShape="nwge\data\explosion_02";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.075000003;
		moveVelocity[]={0,1,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.0099999998;
		size[]=
		{
			"0.0125*intensity+4",
			"0.0125*intensity+9",
			"0.0125*intensity+4"
		};
		color[]=
		{
			{1,1,0.5,-8},
			{1,1,0.5,-1}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={0.30000001,0.5,0.30000001};
		rotationVelocityVar=25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_MK82ground1: Default
	{
		interval=0.0040000002;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=8;
		moveVelocity[]={0,10,0};
		weight=10.2;
		volume=7.9000001;
		rubbing=1;
		size[]={8,12};
		color[]=
		{
			{0.60000002,0.5,0.40000001,0},
			{0.60000002,0.5,0.40000001,0.2},
			{0.60000002,0.5,0.40000001,0.40000001},
			{0.60000002,0.5,0.40000001,0.34999999},
			{0.60000002,0.5,0.40000001,0.30000001},
			{0.60000002,0.5,0.40000001,0.25},
			{0.60000002,0.5,0.40000001,0.2},
			{0.60000002,0.5,0.40000001,0.15000001},
			{0.60000002,0.5,0.40000001,0.1},
			{0.60000002,0.5,0.40000001,0.050000001},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1,0.25};
		lifeTimeVar=0.5;
		positionVar[]={10,10,10};
		MoveVelocityVar[]={200,10,200};
		rotationVelocityVar=1;
		sizeVar=0.25;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82ground3: Default
	{
		interval=0.0040000002;
		particleShape="nwge\data\smoke_02";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=20;
		moveVelocity[]={0,10,0};
		weight=10;
		volume=7.9000001;
		rubbing=1;
		size[]={15,30};
		color[]=
		{
			{0.60000002,0.5,0.40000001,0},
			{0.60000002,0.5,0.40000001,0.2},
			{0.60000002,0.5,0.40000001,0.40000001},
			{0.60000002,0.5,0.40000001,0.34999999},
			{0.60000002,0.5,0.40000001,0.30000001},
			{0.60000002,0.5,0.40000001,0.25},
			{0.60000002,0.5,0.40000001,0.2},
			{0.60000002,0.5,0.40000001,0.15000001},
			{0.60000002,0.5,0.40000001,0.1},
			{0.60000002,0.5,0.40000001,0.050000001},
			{0.60000002,0.5,0.40000001,0}
		};
		animationSpeed[]={1,0.25};
		lifeTimeVar=0.5;
		positionVar[]={10,10,10};
		MoveVelocityVar[]={200,10,200};
		rotationVelocityVar=1;
		sizeVar=0.25;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Trail1: Default
	{
		particleEffects="nwge_MK82Tra1Link";
		interval=0.0099999998;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=3.5;
		moveVelocity[]={0,50,0};
		rotationVelocity=1;
		weight=10;
		volume=7.9000001;
		rubbing=0.30000001;
		size[]={0.050000001};
		color[]=
		{
			{1,1,0.40000001,0},
			{1,1,0.40000001,0},
			{1,1,0.40000001,0},
			{1,1,0.40000001,-15},
			{1,1,0.40000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.5;
		MoveVelocityVar[]={0,200,0};
		rotationVelocityVar=1;
		sizeVar=0.5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Stones1: Default
	{
		interval=0.001;
		particleShape="a3\data_f\particleeffects\pstone\pstone";
		angleVar=360;
		particleType="SpaceObject";
		lifeTime=6;
		moveVelocity[]=
		{
			"(surfNormalX/1)*15",
			"(surfNormalY/1)*15",
			"(surfNormalZ/1)*15"
		};
		weight=30;
		volume=7.9000001;
		rubbing=0;
		size[]={0.5};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,1}
		};
		MoveVelocityVar[]={15,15,15};
		rotationVelocityVar=3;
		sizeVar=0.5;
		bounceOnSurface=0.30000001;
		bounceOnSurfaceVar=0.25;
	};
	class nwge_MK82Stones2: Default
	{
		interval=0.0070000002;
		particleShape="nwge\data\dirt";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=6;
		moveVelocity[]={0,50,0};
		rotationVelocity=1;
		weight=0.2;
		volume=0.1;
		rubbing=0.050000001;
		size[]={10};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,3},
			{0.30000001,0.30000001,0.30000001,0}
		};
		lifeTimeVar=0.5;
		positionVar[]={5,5,5};
		MoveVelocityVar[]={30,20,30};
		rotationVelocityVar=1;
		sizeVar=0.5;
	};
	class nwge_MK82Stones3: Default
	{
		interval=0.001;
		particleShape="nwge\data\dirt_big";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=6;
		moveVelocity[]={0,15,0};
		rotationVelocity=1;
		weight=20;
		volume=7.9000001;
		rubbing=0;
		size[]={1};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,3},
			{0.30000001,0.30000001,0.30000001,0}
		};
		lifeTimeVar=0.2;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={12,10,12};
		rotationVelocityVar=5;
		sizeVar=0.2;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82exp1: Default
	{
		particleEffects="nwge_MK82exp1Link";
		interval=0.059999999;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=0.2;
		moveVelocity[]={0,70,0};
		rotationVelocity=1;
		weight=10;
		volume=7.9000001;
		rubbing=0.40000001;
		size[]={0.050000001};
		color[]=
		{
			{1,1,0.40000001,-15},
			{1,1,0.40000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.1;
		MoveVelocityVar[]={20,60,20};
		rotationVelocityVar=1;
		sizeVar=0.5;
	};
	class nwge_MK82exp2: Default
	{
		interval=0.003;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.60000002;
		moveVelocity[]={0,0,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.80000001;
		size[]={0,10};
		color[]=
		{
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-0.89999998},
			{1,1,0.5,-0.80000001},
			{1,1,0.5,-0.69999999},
			{1,1,0.5,-0.60000002},
			{1,1,0.5,-0.5},
			{1,1,0.5,-0.40000001},
			{1,1,0.5,-0.30000001},
			{1,1,0.5,-0.2},
			{1,1,0.5,-0.1},
			{1,1,0.5,0}
		};
		MoveVelocityVar[]={20,50,20};
		rotationVelocityVar=10;
		sizeVar=0.1;
		emissiveColor[]=
		{
			{10000,10000,10000,0.079999998}
		};
	};
	class nwge_MK82spa1: Default
	{
		interval=0.0049999999;
		particleShape="nwge\data\Flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.079999998;
		lifeTime=1.3;
		rotationVelocity=1;
		weight=200;
		volume=0.1;
		rubbing=0;
		size[]={0.30000001};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.80000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.5;
		MoveVelocityVar[]={30,30,30};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class nwge_MK82spa2: Default
	{
		interval=0.0060000001;
		particleShape="nwge\data\Flare";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=3;
		moveVelocity[]={0,80,0};
		rotationVelocity=1;
		weight=11;
		volume=7.9000001;
		rubbing=1;
		size[]={0.5};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		randomDirectionPeriod=0.15000001;
		randomDirectionIntensity=0.15000001;
		lifeTimeVar=0.5;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={150,150,150};
		rotationVelocityVar=1;
		sizeVar=0.2;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		randomDirectionPeriodVar=0.15000001;
		randomDirectionIntensityVar=0.15000001;
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class nwge_MK82spa3: Default
	{
		interval=0.003;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,200,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.80000001;
		size[]={25};
		color[]=
		{
			{1,0.5,0.2,-0.0020000001},
			{1,0.5,0.2,0}
		};
		positionVar[]={5,5,5};
		MoveVelocityVar[]={2,50,2};
		rotationVelocityVar=30;
		sizeVar=0.5;
		emissiveColor[]=
		{
			{1200,1200,1200,0.60000002}
		};
	};
	class nwge_MK82exp1Link1: Default
	{
		interval=0.02;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.40000001;
		moveVelocity[]=
		{
			"0+(speedX/1)",
			"0+(speedY/1)",
			"0+(speedZ/1)"
		};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.80000001;
		size[]={8};
		color[]=
		{
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-0.89999998},
			{1,1,0.5,-0.80000001},
			{1,1,0.5,-0.69999999},
			{1,1,0.5,-0.60000002},
			{1,1,0.5,-0.5},
			{1,1,0.5,-0.40000001},
			{1,1,0.5,-0.30000001},
			{1,1,0.5,-0.2},
			{1,1,0.5,-0.1},
			{1,1,0.5,0}
		};
		animationSpeed[]={1.6};
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=2;
		sizeVar=0.1;
		emissiveColor[]=
		{
			{10000,10000,10000,0.079999998}
		};
	};
	class nwge_MK82exp1Link2: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4;
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={8,12};
		color[]=
		{
			{0.0099999998,0.0099999998,0.0099999998,1},
			{0.0099999998,0.0099999998,0.0099999998,0.80000001},
			{0.0099999998,0.0099999998,0.0099999998,0.89999998},
			{0.0099999998,0.0099999998,0.0099999998,0.80000001},
			{0.0099999998,0.0099999998,0.0099999998,0.69999999},
			{0.0099999998,0.0099999998,0.0099999998,0.60000002},
			{0.0099999998,0.0099999998,0.0099999998,0.5},
			{0.0099999998,0.0099999998,0.0099999998,0.40000001},
			{0.0099999998,0.0099999998,0.0099999998,0.30000001},
			{0.0099999998,0.0099999998,0.0099999998,0.2},
			{0.0099999998,0.0099999998,0.0099999998,0.1},
			{0.0099999998,0.0099999998,0.0099999998,0}
		};
		animationSpeed[]={1,0.25};
		lifeTimeVar=0.1;
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=20;
		sizeVar=0.25;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82exp1Link4: Default
	{
		interval=0.0099999998;
		particleShape="nwge\data\smoke_02";
		angleVar=360;
		lifeTime=0.60000002;
		weight=10;
		volume=7.9000001;
		rubbing=0.075000003;
		positionVar[]={50,50,50};
		sizeVar=0.25;
		destroyOnWaterSurface=1;
		bounceOnSurface=0;
		bounceOnSurfaceVar=0;
		Size[]={200};
		color[]=
		{
			{1,1,1,-0.001},
			{1,1,1,0}
		};
		randomDirectionPeriod=1;
		emissiveColor[]=
		{
			{80,80,80,0},
			{0,0,0,0}
		};
	};
	class nwge_MK82Tra2Link1: Default
	{
		interval=0.050000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"0+(speedX/1)",
			"0+(speedY/1)",
			"0+(speedZ/1)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=2;
		size[]={1,3,6};
		color[]=
		{
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.69999999},
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={0.2};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra2Link2: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=2;
		moveVelocity[]=
		{
			"0+(speedX/0.5)",
			"0+(speedY/0.5)",
			"0+(speedZ/0.5)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=3;
		size[]={2,20};
		color[]=
		{
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.69999999},
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		randomDirectionPeriod=6;
		randomDirectionIntensity=2;
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra2Link4: Default
	{
		interval=0.050000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"0+(speedX/1)",
			"0+(speedY/1)",
			"0+(speedZ/1)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=2;
		size[]={1,3,6};
		color[]=
		{
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.80000001},
			{0.050000001,0.045000002,0.039999999,0.69999999},
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.5},
			{0.050000001,0.045000002,0.039999999,0.40000001},
			{0.050000001,0.045000002,0.039999999,0.30000001},
			{0.050000001,0.045000002,0.039999999,0.2},
			{0.050000001,0.045000002,0.039999999,0.1},
			{0.050000001,0.045000002,0.039999999,0}
		};
		animationSpeed[]={0.2};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra2Link5: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=2;
		moveVelocity[]=
		{
			"0+(speedX/0.5)",
			"0+(speedY/0.5)",
			"0+(speedZ/0.5)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=3;
		size[]={2,20};
		color[]=
		{
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.80000001},
			{0.050000001,0.045000002,0.039999999,0.69999999},
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.5},
			{0.050000001,0.045000002,0.039999999,0.40000001},
			{0.050000001,0.045000002,0.039999999,0.30000001},
			{0.050000001,0.045000002,0.039999999,0.2},
			{0.050000001,0.045000002,0.039999999,0.1},
			{0.050000001,0.045000002,0.039999999,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		randomDirectionPeriod=6;
		randomDirectionIntensity=2;
		positionVar[]={0.5,0.5,0.5};
		MoveVelocityVar[]={10,10,10};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra2Link7: Default
	{
		interval=1;
		particleShape="nwge\data\dirt_big";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=4;
		moveVelocity[]=
		{
			"0+(speedX)/1.9",
			"0+(speedY)/1.9",
			"0+(speedZ)/1.9"
		};
		rotationVelocity=1;
		weight=20;
		volume=7.9000001;
		rubbing=0;
		size[]={1.5};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,3},
			{0.30000001,0.30000001,0.30000001,0}
		};
		lifeTimeVar=0.2;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=5;
		sizeVar=0.2;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra1Link1: Default
	{
		interval=0.050000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"0+(speedX/1)",
			"0+(speedY/1)",
			"0+(speedZ/1)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=2;
		size[]={1,3,6};
		color[]=
		{
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.69999999},
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={0.2};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra1Link2: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=2;
		moveVelocity[]=
		{
			"0+(speedX/0.5)",
			"0+(speedY/0.5)",
			"0+(speedZ/0.5)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=4;
		size[]={3,15,15,20};
		color[]=
		{
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.69999999},
			{0.1,0.1,0.1,0.60000002},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.30000001},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		randomDirectionPeriod=6;
		randomDirectionIntensity=2;
		MoveVelocityVar[]={60,60,60};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra1Link4: Default
	{
		interval=0.050000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"0+(speedX/1)",
			"0+(speedY/1)",
			"0+(speedZ/1)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=2;
		size[]={1,3,6};
		color[]=
		{
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.80000001},
			{0.050000001,0.045000002,0.039999999,0.69999999},
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.5},
			{0.050000001,0.045000002,0.039999999,0.40000001},
			{0.050000001,0.045000002,0.039999999,0.30000001},
			{0.050000001,0.045000002,0.039999999,0.2},
			{0.050000001,0.045000002,0.039999999,0.1},
			{0.050000001,0.045000002,0.039999999,0}
		};
		animationSpeed[]={0.2};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class nwge_MK82Tra1Link5: Default
	{
		interval=0.079999998;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=2;
		moveVelocity[]=
		{
			"0+(speedX/0.5)",
			"0+(speedY/0.5)",
			"0+(speedZ/0.5)"
		};
		weight=11;
		volume=7.9000001;
		rubbing=4;
		size[]={3,15,15,20};
		color[]=
		{
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.80000001},
			{0.050000001,0.045000002,0.039999999,0.69999999},
			{0.050000001,0.045000002,0.039999999,0.60000002},
			{0.050000001,0.045000002,0.039999999,0.5},
			{0.050000001,0.045000002,0.039999999,0.40000001},
			{0.050000001,0.045000002,0.039999999,0.30000001},
			{0.050000001,0.045000002,0.039999999,0.2},
			{0.050000001,0.045000002,0.039999999,0.1},
			{0.050000001,0.045000002,0.039999999,0}
		};
		animationSpeed[]={0.80000001,0.40000001};
		randomDirectionPeriod=6;
		randomDirectionIntensity=2;
		MoveVelocityVar[]={60,60,60};
		rotationVelocityVar=5;
		destroyOnWaterSurface=1;
	};
	class SmokeShellWhite: Default
	{
		interval=0.1;
		particleEffects="nwge_smokeshelLink";
		lifeTime=22;
		weight=10.1;
		volume=7.9000001;
		size[]={0.1,2,9};
		moveVelocity[]={0.40000001,0.30000001,0.5};
		MoveVelocityVar[]={0.5,0.1,0.40000001};
	};
	class nwge_smokeshelLinkl: Default
	{
		interval=23;
		particleShape="nwge\data\smoke_02";
		particleFSLoop=0;
		angleVar=0.1;
		timerPeriod=0.1;
		lifeTime=22;
		moveVelocity[]={0.40000001,0.30000001,0.5};
		rotationVelocity=1;
		weight=10.1;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.1,2,3};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0},
			{0.60000002,0.60000002,0.60000002,1},
			{0.60000002,0.60000002,0.60000002,0.94999999},
			{0.60000002,0.60000002,0.60000002,0.89999998},
			{0.60000002,0.60000002,0.60000002,0.85000002},
			{0.60000002,0.60000002,0.60000002,0.80000001},
			{0.60000002,0.60000002,0.60000002,0.75},
			{0.60000002,0.60000002,0.60000002,0.69999999},
			{0.60000002,0.60000002,0.60000002,0.64999998},
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.60000002,0.60000002,0.60000002,0.55000001},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0.44999999},
			{0.60000002,0.60000002,0.60000002,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.34999999},
			{0.60000002,0.60000002,0.60000002,0.30000001},
			{0.60000002,0.60000002,0.60000002,0.25},
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.60000002,0.60000002,0.60000002,0.1},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={0.60000002,0.60000002,0.60000002,1};
		animationSpeed[]={1.5,0.5};
		MoveVelocityVar[]={0.5,0.1,0.40000001};
		rotationVelocityVar=15;
		sizeVar=0.5;
	};
	class nwge_LauExplos: Default
	{
		interval=0.029999999;
		particleShape="nwge\data\explosion_02";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.30000001;
		weight=10;
		volume=7.9000001;
		rubbing=0.001;
		size[]=
		{
			"0.0125*intensity+6",
			"0.0125*intensity+12",
			"0.0125*intensity+6"
		};
		color[]=
		{
			{1,1,0.5,-8},
			{1,1,0.5,-1}
		};
		sizeVar=0.2;
		rotationVelocityVar=25;
		positionVar[]={0.2,0.2,0.2};
		moveVelocity[]={0,1,0};
		MoveVelocityVar[]={0.2,0.5,0.2};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
	};
	class nwge_LauSpark1: Default
	{
		interval=0.001;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.25;
		size[]={0.25};
		color[]=
		{
			{1,1,0.69999999,-10},
			{1,1,0.69999999,-8},
			{1,1,0.69999999,-6},
			{1,1,0.69999999,-4},
			{1,1,0.69999999,-2},
			{1,1,0.69999999,-1},
			{1,1,0.69999999,0}
		};
		MoveVelocityVar[]={60,80,60};
		positionVar[]={1,1,1};
		sizeVar=0.1;
		emissiveColor[]=
		{
			{100000,100000,100000,0},
			{0,0,0,0}
		};
	};
	class nwge_CarAmmoSpark1: Default
	{
		interval=0.050000001;
		particleShape="A3\data_f\cl_fire";
		lifeTime=6;
		rotationVelocity=1;
		weight=0.0049999999;
		volume=0.0041999999;
		size[]={0.050000001,0.029999999,0.02};
		color[]=
		{
			{1,1,1,1},
			{0,0,0,0}
		};
		animationSpeed[]={0,1};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		lifeTimeVar=0.80000001;
		moveVelocityVar[]={1,0.1,1};
		sizeVar=0.0099999998;
		emissiveColor[]=
		{
			{200,200,20,1}
		};
	};
	class nwge_CarAmmoSpark2: Default
	{
		interval=0.050000001;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=3.5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=1;
		weight=1.05;
		volume=1;
		rubbing=0.17;
		size[]={0.1,0.1,0.1,0.1,0.1,0.079999998,0.079999998,0.079999998,0.079999998,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.55000001;
		lifeTimeVar=2.5;
		positionVar[]={0,0.2,0};
		MoveVelocityVar[]={0.2,1,0.2};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0.30000001;
		randomDirectionIntensityVar=0.15000001;
	};
	class nwge_CarAmmoSparkBig: Default
	{
		particleEffects="nwge_CarAmmoSparkBigPlus";
		interval=0.0040000002;
		particleShape="nwge\data\sparkseffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1;
		moveVelocity[]={0,20,0};
		rotationVelocity=1;
		weight=40;
		volume=7.9000001;
		rubbing=0.2;
		size[]={0.40000001};
		color[]=
		{
			{1,1,0.60000002,-15},
			{1,1,0.60000002,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.2;
		MoveVelocityVar[]={30,15,30};
		rotationVelocityVar=1;
		sizeVar=0.2;
	};
	class nwge_CarAmmoDestSmoke: Default
	{
		positionVar[]={0,5,0};
		moveVelocity[]={0,3,0};
		MoveVelocityVar[]={0,1.5,0};
		interval=0.15000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=0.5;
		lifeTime=76;
		weight=0.050000001;
		volume=0.039999999;
		size[]={2.0999999,16};
		color[]=
		{
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.80000001},
			{0.2,0.2,0.2,0.34999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.050000001;
		onSurface=0;
		lifeTimeVar=52;
		rotationVelocityVar=12;
		colorVar[]={0,0,0,0.050000001};
	};
	class nwge_CarAmmoDestructionSmoke: Default
	{
		interval=0.02;
		circleRadius=1.2;
		positionVar[]={0.5,0,0.5};
		MoveVelocityVar[]={1,0.1,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSFrameCount=40;
		particleFSLoop=0;
		angleVar=1;
		lifeTime=3.2;
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		size[]={1.25,1.5,2.5};
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.60000002},
			{0.050000001,0.050000001,0.050000001,0.89999998},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.64999998},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.25},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onSurface=0;
		lifeTimeVar=0.69999999;
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
	};
	class nwge_CarAmmoSparkBigLink1: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1.5;
		moveVelocity[]=
		{
			"0+(speedX/6)",
			"0+(speedY/6)",
			"0+(speedZ/6)"
		};
		weight=12;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={0.2};
		color[]=
		{
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-0.89999998},
			{1,1,0.5,-0.80000001},
			{1,1,0.5,-0.69999999},
			{1,1,0.5,-0.60000002},
			{1,1,0.5,-0.5},
			{1,1,0.5,-0.40000001},
			{1,1,0.5,-0.30000001},
			{1,1,0.5,-0.2},
			{1,1,0.5,-0.1},
			{1,1,0.5,0}
		};
		animationSpeed[]={0.25};
		MoveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=2;
		sizeVar=0.1;
		emissiveColor[]=
		{
			{100000,100000,100000,0},
			{0,0,0,0}
		};
	};
	class nwge_CarAmmoSparkBigLink2: nwge_CarAmmoSparkBigLink1
	{
		rotationVelocityVar=10;
	};
	class nwge_CarFuelExp: Default
	{
		particleEffects="nwge_CarFuelExpLink";
		interval=0.02;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=0.40000001;
		moveVelocity[]={0,50,0};
		rotationVelocity=1;
		weight=6;
		volume=7.9000001;
		rubbing=0.5;
		size[]={0.050000001};
		color[]=
		{
			{1,1,0.40000001,-15},
			{1,1,0.40000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.15000001;
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
	};
	class nwge_CarFuelSparks: Default
	{
		interval=0.050000001;
		particleShape="A3\data_f\cl_fire";
		lifeTime=6;
		rotationVelocity=1;
		weight=0.0049999999;
		volume=0.0041999999;
		size[]={0.050000001,0.029999999,0.02};
		color[]=
		{
			{1,1,1,1},
			{0,0,0,0}
		};
		animationSpeed[]={0,1};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		lifeTimeVar=0.80000001;
		moveVelocityVar[]={1,0.1,1};
		sizeVar=0.0099999998;
		emissiveColor[]=
		{
			{200,200,20,1}
		};
	};
	class nwge_CarFuelDestSmoke: Default
	{
		position[]={0,0,-1};
		moveVelocity[]={0,5,0};
		circleRadius=1.2;
		interval=0.15000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=76;
		weight=0.050000001;
		volume=0.039999999;
		size[]={3,30,30};
		color[]=
		{
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,1},
			{0.2,0.2,0.2,0.34999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		animationSpeed[]={0,0,0.2,0.5,1};
		randomDirectionPeriod=1;
		randomDirectionPeriodVar=0.5;
		randomDirectionIntensity=0.15000001;
		randomDirectionIntensityVar=0.075000003;
		lifeTimeVar=52;
		rotationVelocityVar=15;
		colorVar[]={0,0,0,0.0099999998};
	};
	class nwge_CarFuelDestructionSmoke: Default
	{
		interval=0.02;
		circleRadius=1.2;
		position[]={0,-1,0};
		positionVar[]={0.5,0,0.5};
		MoveVelocityVar[]={1,0.1,1};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSFrameCount=40;
		particleFSLoop=0;
		angleVar=1;
		lifeTime=3.2;
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		size[]={1.25,1.5,2.5};
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.60000002},
			{0.050000001,0.050000001,0.050000001,0.89999998},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.64999998},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.25},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onSurface=0;
		lifeTimeVar=0.69999999;
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
	};
	class nwge_CarFuelExpLink1: Default
	{
		interval=0.079999998;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=64;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4;
		moveVelocity[]=
		{
			"0+(speedX/25)",
			"0+(speedY/25)",
			"0+(speedZ/25)"
		};
		weight=6;
		volume=7.9000001;
		rubbing=1;
		size[]={1,10,14,14,14,14};
		color[]=
		{
			{1,1,1,-2},
			{1,1,1,0}
		};
		animationSpeed[]={0.5};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=2;
		sizeVar=0.1;
		emissiveColor[]=
		{
			{500,500,500,0},
			{0,0,0,0}
		};
	};
	class nwge_VEESpark1: Default
	{
		interval=0.0060000001;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=2.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=24;
		volume=8;
		rubbing=0;
		size[]={0.1,0.090000004,0.079999998,0.079999998,0.079999998,0.059999999,0.059999999,0.059999999,0.059999999,0};
		color[]=
		{
			{1,1,1,-50}
		};
		animationSpeed[]={1000};
		lifeTimeVar=1;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={6,9,6};
		rotationVelocityVar=2;
	};
	class nwge_VEESpark2: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\Flare";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.18000001;
		size[]={0.2};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class nwge_VEEExplParSml: Default
	{
		interval="0.03*interval+0.03";
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,4,0};
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.1;
		size[]={3,4.5};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.33000001};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.1;
		positionVar[]={2,1,2};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
	};
	class nwge_VEESmok1: Default
	{
		interval=0.029999999;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=3;
		moveVelocity[]={0,2,0};
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.025;
		size[]={3,7,10};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.5},
			{0.40000001,0.40000001,0.40000001,0.40000001},
			{0.60000002,0.5,0.5,0.30000001},
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=2.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={1.8,1,1.8};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class nwge_VEESmok2: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=20;
		moveVelocity[]={0,10,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={6,15};
		color[]=
		{
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,1},
			{0.15000001,0.15000001,0.15000001,0.89999998},
			{0.15000001,0.15000001,0.15000001,0.80000001},
			{0.15000001,0.15000001,0.15000001,0.69999999},
			{0.15000001,0.15000001,0.15000001,0.60000002},
			{0.15000001,0.15000001,0.15000001,0.5},
			{0.15000001,0.15000001,0.15000001,0.40000001},
			{0.15000001,0.15000001,0.15000001,0.30000001},
			{0.15000001,0.15000001,0.15000001,0.2},
			{0.15000001,0.15000001,0.15000001,0.1},
			{0.15000001,0.15000001,0.15000001,0}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		lifeTimeVar=0.5;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={2,10,2};
		rotationVelocityVar=10;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_VEEBall1: Default
	{
		interval=0.02;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		moveVelocity[]={0,10,0};
		rotationVelocity=10;
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={0,2,4,4,4,4,4};
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,-0.89999998},
			{1,1,1,-0.80000001},
			{1,1,1,-0.69999999},
			{1,1,1,-0.60000002},
			{1,1,1,-0.5},
			{1,1,1,-0.40000001},
			{1,1,1,-0.30000001},
			{1,1,1,-0.2},
			{1,1,1,-0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,5};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		MoveVelocityVar[]={3,8,3};
		rotationVelocityVar=1;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class nwge_VEEBall3: Default
	{
		interval=0.0099999998;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]={0,15,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={1,4,0};
		color[]=
		{
			{1,1,0.2,-2},
			{1,1,1,-0.5},
			{1,1,1,-0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1.5};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=1000;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class nwge_VEEBExplBal1: Default
	{
		interval=0.0099999998;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]={0,15,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={1,4,0};
		color[]=
		{
			{1,1,0.2,-2},
			{1,1,1,-0.5},
			{1,1,1,-0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1.5};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=1000;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class nwge_VEEBExplBal2: Default
	{
		interval="0.02*interval+0.02";
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=2;
		moveVelocity[]={0,5,0};
		rotationVelocity=1;
		weight=0.039999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0225*intensity+6",
			"0.0225*intensity+8"
		};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		lifeTimeVar=0.5;
		positionVar[]={2,2,2};
		MoveVelocityVar[]={3,5,3};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0,0,0,1};
	};
	class nwge_VEEBExplPart: Default
	{
		interval="0.1*interval+0.1";
		particleShape="nwge\data\explosion_11";
		particleFSNtieth=8;
		particleFSFrameCount=64;
		particleFSLoop=0;
		angleVar=1;
		lifeTime=1;
		rotationVelocity=1;
		weight=0.057999998;
		volume=0.039999999;
		rubbing=0.1;
		size[]={1.5,20};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0}
		};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.1;
		rotationVelocityVar=1;
		sizeVar=0.2;
		colorVar[]={0,0,0,1};
	};
	class nwge_VEEBExpl: Default
	{
		particleEffects="nwge_VEEBExplEmit";
		interval=0.02;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.40000001;
		moveVelocity[]={0,50,0};
		rotationVelocity=1;
		weight=12.1;
		volume=7.9000001;
		rubbing=0.40000001;
		size[]={0.050000001};
		color[]=
		{
			{1,1,0.40000001,-15},
			{1,1,0.40000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.1;
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
	};
	class nwge_VEEBExplSmoke1: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=20;
		moveVelocity[]={0,10,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={6,15};
		color[]=
		{
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,1},
			{0.15000001,0.15000001,0.15000001,0.89999998},
			{0.15000001,0.15000001,0.15000001,0.80000001},
			{0.15000001,0.15000001,0.15000001,0.69999999},
			{0.15000001,0.15000001,0.15000001,0.60000002},
			{0.15000001,0.15000001,0.15000001,0.5},
			{0.15000001,0.15000001,0.15000001,0.40000001},
			{0.15000001,0.15000001,0.15000001,0.30000001},
			{0.15000001,0.15000001,0.15000001,0.2},
			{0.15000001,0.15000001,0.15000001,0.1},
			{0.15000001,0.15000001,0.15000001,0}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		lifeTimeVar=0.5;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={2,10,2};
		rotationVelocityVar=10;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_VEEBSpark1: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\Flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=0.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.18000001;
		size[]={0.2};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class nwge_VEEBSpark2: Default
	{
		interval=0.001;
		particleShape="nwge\data\Flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=4;
		moveVelocity[]={0,50,0};
		rotationVelocity=1;
		weight=50;
		volume=7.9000001;
		rubbing=5;
		size[]={0.40000001};
		color[]=
		{
			{1,1,0.69999999,1},
			{1,1,0.60000002,0}
		};
		randomDirectionPeriod=0.25;
		randomDirectionIntensity=0.25;
		lifeTimeVar=1;
		positionVar[]={0.1,0.1,0.1};
		MoveVelocityVar[]={100,50,100};
		rotationVelocityVar=20;
		sizeVar=0.1;
		randomDirectionPeriodVar=1;
		randomDirectionIntensityVar=1;
		bounceOnSurface=0.30000001;
		bounceOnSurfaceVar=0.1;
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class nwge_VEEBExplSpark: Default
	{
		particleEffects="nwge_VEEBExplSparkBlast";
		interval=0.0020000001;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1.2;
		moveVelocity[]={0,20,0};
		weight=10.2;
		volume=7.9000001;
		rubbing=0.40000001;
		size[]={0.1};
		color[]=
		{
			{1,1,0.69999999,-15},
			{1,1,0.69999999,-15}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.1;
		MoveVelocityVar[]={40,20,40};
		sizeVar=0.2;
	};
	class nwge_VEEBExplEmitLink: Default
	{
		interval=0.0099999998;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=3;
		particleFSFrameCount=16;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.80000001;
		moveVelocity[]=
		{
			"0+(speedX/15)",
			"0+(speedY/15)",
			"0+(speedZ/15)"
		};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={0,1,3,4,4,4,4};
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-0.89999998},
			{1,1,1,-0.80000001},
			{1,1,1,-0.69999999},
			{1,1,1,-0.60000002},
			{1,1,1,-0.5},
			{1,1,1,-0.40000001},
			{1,1,1,-0.30000001},
			{1,1,1,-0.2},
			{1,1,1,-0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1.2};
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=10;
		sizeVar=0.1;
		emissiveColor[]=
		{
			{10000,10000,10000,0},
			{0,0,0,0}
		};
	};
	class nwge_VEEBExplEmitLinkSmoke1: Default
	{
		interval=0.02;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=4;
		moveVelocity[]=
		{
			"0+(speedX/15)",
			"0+(speedY/15)",
			"0+(speedZ/15)"
		};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={2,12};
		color[]=
		{
			{0.0049999999,0.0049999999,0.0049999999,0},
			{0.0049999999,0.0049999999,0.0049999999,0.80000001},
			{0.0049999999,0.0049999999,0.0049999999,0.75},
			{0.0049999999,0.0049999999,0.0049999999,0.69999999},
			{0.0049999999,0.0049999999,0.0049999999,0.64999998},
			{0.0049999999,0.0049999999,0.0049999999,0.60000002},
			{0.0049999999,0.0049999999,0.0049999999,0.55000001},
			{0.0049999999,0.0049999999,0.0049999999,0.5},
			{0.0049999999,0.0049999999,0.0049999999,0.44999999},
			{0.0049999999,0.0049999999,0.0049999999,0.40000001},
			{0.0049999999,0.0049999999,0.0049999999,0.34999999},
			{0.0049999999,0.0049999999,0.0049999999,0.30000001},
			{0.0049999999,0.0049999999,0.0049999999,0.25},
			{0.0049999999,0.0049999999,0.0049999999,0.2},
			{0.0049999999,0.0049999999,0.0049999999,0.15000001},
			{0.0049999999,0.0049999999,0.0049999999,0.1},
			{0.0049999999,0.0049999999,0.0049999999,0.050000001},
			{0.0049999999,0.0049999999,0.0049999999,0}
		};
		animationSpeed[]={0.2};
		lifeTimeVar=0.1;
		MoveVelocityVar[]={2,2,2};
		rotationVelocityVar=10;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriod=0.0089999996;
		randomDirectionIntensity=0.0089999996;
		randomDirectionPeriodVar=0.0089999996;
		randomDirectionIntensityVar=0.0089999996;
	};
	class nwge_VEEBExplSparkBlastLink: Default
	{
		interval=0.0040000002;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.039999999;
		moveVelocity[]=
		{
			"0+(speedX/1)",
			"0+(speedY/1)",
			"0+(speedZ/1)"
		};
		weight=10.1;
		volume=7.9000001;
		rubbing=0.40000001;
		size[]={0.1};
		color[]=
		{
			{1,1,0.69999999,-15},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
	};
	class nwge_VEESSpark1: Default
	{
		interval=0.0060000001;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=2.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=24;
		volume=8;
		rubbing=0;
		size[]={0.1,0.090000004,0.079999998,0.079999998,0.079999998,0.059999999,0.059999999,0.059999999,0.059999999,0};
		color[]=
		{
			{1,1,1,-50}
		};
		animationSpeed[]={1000};
		lifeTimeVar=1;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={6,9,6};
		rotationVelocityVar=2;
	};
	class nwge_VEESSpark2: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\Flare";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.18000001;
		size[]={0.2};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class nwge_VEESExplParSml: Default
	{
		interval="0.03*interval+0.03";
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.25;
		moveVelocity[]={0,4,0};
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.1;
		size[]={3,4.5};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.33000001};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.1;
		positionVar[]={2,1,2};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
	};
	class nwge_VEESSmok1: Default
	{
		interval=0.029999999;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=3;
		moveVelocity[]={0,2,0};
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.025;
		size[]={3,7,10};
		color[]=
		{
			{0.30000001,0.30000001,0.30000001,0.5},
			{0.40000001,0.40000001,0.40000001,0.40000001},
			{0.60000002,0.5,0.5,0.30000001},
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0.1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.1;
		lifeTimeVar=2.5;
		positionVar[]={0.2,0.2,0.2};
		MoveVelocityVar[]={1.8,1,1.8};
		rotationVelocityVar=20;
		sizeVar=0.30000001;
		colorVar[]={0,0,0,0.30000001};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.050000001;
	};
	class nwge_VEESSmok2: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=20;
		moveVelocity[]={0,10,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={6,15};
		color[]=
		{
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,1},
			{0.15000001,0.15000001,0.15000001,0.89999998},
			{0.15000001,0.15000001,0.15000001,0.80000001},
			{0.15000001,0.15000001,0.15000001,0.69999999},
			{0.15000001,0.15000001,0.15000001,0.60000002},
			{0.15000001,0.15000001,0.15000001,0.5},
			{0.15000001,0.15000001,0.15000001,0.40000001},
			{0.15000001,0.15000001,0.15000001,0.30000001},
			{0.15000001,0.15000001,0.15000001,0.2},
			{0.15000001,0.15000001,0.15000001,0.1},
			{0.15000001,0.15000001,0.15000001,0}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		lifeTimeVar=0.5;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={2,10,2};
		rotationVelocityVar=10;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_VEESBall1: Default
	{
		interval=0.02;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		moveVelocity[]={0,10,0};
		rotationVelocity=10;
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={0,2,4,4,4,4,4};
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,-0.89999998},
			{1,1,1,-0.80000001},
			{1,1,1,-0.69999999},
			{1,1,1,-0.60000002},
			{1,1,1,-0.5},
			{1,1,1,-0.40000001},
			{1,1,1,-0.30000001},
			{1,1,1,-0.2},
			{1,1,1,-0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,5};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		MoveVelocityVar[]={3,8,3};
		rotationVelocityVar=1;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class nwge_VEESBall3: Default
	{
		interval=0.0099999998;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=0.5;
		moveVelocity[]={0,15,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={1,4,0};
		color[]=
		{
			{1,1,0.2,-2},
			{1,1,1,-0.5},
			{1,1,1,-0.1},
			{1,1,1,0}
		};
		animationSpeed[]={1.5};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=1000;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class HDust1: Default
	{
		interval="0.02-0.015*((density*2.8)interpolate[0,0.6,0,0.6])";
		lifeTime=3;
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.5*((density*2.8)interpolate[0,0.6,0,0.6])"
		};
	};
	class HDust1M: Default
	{
		interval="0.02-0.01*((density*2.8)interpolate[0,0.6,0,0.6])";
		lifeTime=3;
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.25*((density*2.8)interpolate[0,0.6,0,0.6])"
		};
	};
	class HDust1L: Default
	{
		interval="0.035-0.01*((density*2.8)interpolate[0,0.6,0,0.6])";
		lifeTime=3;
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.25*((density*2.8)interpolate[0,0.6,0,0.6])"
		};
	};
	class HDust1Long: Default
	{
		circleRadius=5.6999998;
		interval="0.25-0.17*((density*3.8)interpolate[0,0.6,0,0.6])";
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.02*((density*3.8)interpolate[0,0.6,0,0.6])"
		};
	};
	class HDust1LongM: Default
	{
		circleRadius=5.6999998;
		interval="0.25-0.13*((density*3.8)interpolate[0,0.6,0,0.6])";
		lifeTime=8;
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.014*((density*3.8)interpolate[0,0.6,0,0.6])"
		};
	};
	class HDust1LongBig: Default
	{
		circleRadius=5.6999998;
		interval="0.25-0.235*((density*3.8)interpolate[0.3,0.6,0.3,0.6])";
		lifeTime=30;
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.02*((density*3.8)interpolate[0,0.6,0,0.6])"
		};
	};
	class HDust1LongBigM: Default
	{
		circleRadius=5.6999998;
		interval="0.25-0.185*((density*3.8)interpolate[0.3,0.6,0.3,0.6])";
		lifeTime=8;
		colorCoef[]=
		{
			1,
			1,
			1,
			"0.014*((density*3.8)interpolate[0,0.6,0,0.6])"
		};
	};
	class nwge_HeliExplFire: Default
	{
		interval=0.050000001;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1;
		moveVelocity[]={0,10,0};
		rotationVelocity=10;
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={0,2,4,4,4,4,4};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0.89999998},
			{1,1,1,0.80000001},
			{1,1,1,0.69999999},
			{1,1,1,0.60000002},
			{1,1,1,0.5},
			{1,1,1,0.40000001},
			{1,1,1,0.30000001},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,-5};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		positionVar[]={1.3,1.3,1.3};
		MoveVelocityVar[]={5,8,5};
		rotationVelocityVar=1;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class nwge_HeliExplFireMin1: Default
	{
		position[]={0,0,1.5};
		circleRadius=0.5;
		interval=0.029999999;
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		lifeTime=0.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.050000001,0.1,0.30000001,0.050000001};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		lifeTimeVar=0.1;
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.2;
		constantDistance=2;
	};
	class nwge_HeliDestructionSmoke: Default
	{
		interval=0.02;
		circleRadius=1.2;
		position[]={0,-1,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		timerPeriod=1;
		lifeTime=3;
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.55000001,0.85000002,1.45};
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.30000001},
			{0.050000001,0.050000001,0.050000001,0.60000002},
			{0.1,0.1,0.1,0.55000001},
			{0.1,0.1,0.1,0.55000001},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.2},
			{0.1,0.1,0.1,0.1},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onSurface=0;
		lifeTimeVar=0.69999999;
		positionVar[]={0.40000001,0,0.40000001};
		MoveVelocityVar[]={0.5,0.1,0.5};
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
	};
	class nwge_HeliDestSmoke: Default
	{
		interval=0.25;
		circleRadius=0.2;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=0.5;
		lifeTime=76;
		moveVelocity[]={0,3,0};
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={2.0999999,25};
		color[]=
		{
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.60000002},
			{0.2,0.2,0.2,0.41999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.050000001;
		onSurface=0;
		lifeTimeVar=52;
		positionVar[]={0.1,0.30000001,0.1};
		MoveVelocityVar[]={0.1,1.5,0.1};
		rotationVelocityVar=12;
		colorVar[]={0,0,0,0.050000001};
	};
	class nwge_HeliFire1: Default
	{
		interval=0.02;
		particleShape="A3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1;
		moveVelocity[]={0,10,0};
		rotationVelocity=10;
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={0,2,4,4,4,4,4};
		color[]=
		{
			{1,1,1,-1},
			{1,1,1,-0.89999998},
			{1,1,1,-0.80000001},
			{1,1,1,-0.69999999},
			{1,1,1,-0.60000002},
			{1,1,1,-0.5},
			{1,1,1,-0.40000001},
			{1,1,1,-0.30000001},
			{1,1,1,-0.2},
			{1,1,1,-0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,5};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		MoveVelocityVar[]={3,8,3};
		rotationVelocityVar=1;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class nwge_HeliSmoke1: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\smoke_02";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=20;
		moveVelocity[]={0,10,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={6,9,12};
		color[]=
		{
			{0.15000001,0.15000001,0.15000001,1},
			{0.15000001,0.15000001,0.15000001,0.89999998},
			{0.15000001,0.15000001,0.15000001,0.80000001},
			{0.15000001,0.15000001,0.15000001,0.69999999},
			{0.15000001,0.15000001,0.15000001,0.60000002},
			{0.15000001,0.15000001,0.15000001,0.5},
			{0.15000001,0.15000001,0.15000001,0.40000001},
			{0.15000001,0.15000001,0.15000001,0.30000001},
			{0.15000001,0.15000001,0.15000001,0.2},
			{0.15000001,0.15000001,0.15000001,0.1},
			{0.15000001,0.15000001,0.15000001,0}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		lifeTimeVar=0.5;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={2,10,2};
		rotationVelocityVar=10;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_HeliSpark1: Default
	{
		interval=0.0049999999;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.079999998;
		lifeTime=1.3;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=200;
		volume=0.1;
		rubbing=0;
		size[]={0.30000001};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.80000001,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.5;
		MoveVelocityVar[]={30,30,30};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
	};
	class nwge_HeliExpSparksFire: Default
	{
		interval="0.03/((speed+0.01)*0.8+1)";
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		angleVar=1;
		timerPeriod=3;
		lifeTime="0.3/((speed+0.01)/2+1)";
		moveVelocity[]={0,0.15000001,0};
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.16;
		size[]={0.30000001,0};
		color[]=
		{
			{1,0.80000001,0.80000001,-80},
			{1,0.80000001,0.80000001,-80},
			{0,0,0,0}
		};
		lifeTimeVar=0.15000001;
		positionVar[]={0.0099999998,0.039999999,0.0099999998};
		moveVelocityVar[]={0.0099999998,0.039999999,0.0099999998};
		sizeVar=0.059999999;
		colorVar[]={0.1,0.1,0.1,0};
	};
	class nwge_HeliExpSparksSmoke: Default
	{
		interval="0.08/((speed+0.01)*0.8+1)";
		particleShape="nwge\data\smoke_02";
		angleVar=1;
		lifeTime=1.2;
		moveVelocity[]={0,0.60000002,0};
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.22;
		size[]={0.1,0.60000002};
		color[]=
		{
			{0.1,0.1,0.1,0.059999999},
			{0.2,0.2,0.2,0.039999999},
			{0.2,0.2,0.2,0.02},
			{0.30000001,0.30000001,0.30000001,0.0099999998},
			{0.40000001,0.40000001,0.40000001,0.0049999999}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=0.40000001;
		randomDirectionIntensity=0.02;
		lifeTimeVar=0.5;
		positionVar[]={0.079999998,0.039999999,0.079999998};
		MoveVelocityVar[]={0.079999998,0.1,0.079999998};
		sizeVar=0.1;
		randomDirectionPeriodVar=0.1;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_PlanExplFire: Default
	{
		interval=0.050000001;
		particleShape="a3\data_f\particleeffects\universal\universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1;
		moveVelocity[]={0,10,0};
		rotationVelocity=10;
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={0,2,4,4,4,4,4};
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0.89999998},
			{1,1,1,0.80000001},
			{1,1,1,0.69999999},
			{1,1,1,0.60000002},
			{1,1,1,0.5},
			{1,1,1,0.40000001},
			{1,1,1,0.30000001},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,-5};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		positionVar[]={1.3,1.3,1.3};
		MoveVelocityVar[]={5,8,5};
		rotationVelocityVar=1;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
		emissiveColor[]=
		{
			{1000,1000,1000,0}
		};
	};
	class nwge_PlanExplFireMin1: Default
	{
		position[]={0,0,1.5};
		circleRadius=0.5;
		interval=0.029999999;
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=0.1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		lifeTime=0.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={0.050000001,0.1,0.30000001,0.050000001};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		lifeTimeVar=0.1;
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.2;
		constantDistance=2;
	};
	class nwge_PlanDestructionSmoke: Default
	{
		interval=0.02;
		circleRadius=1.2;
		position[]={0,-1,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		angleVar=1;
		timerPeriod=1;
		lifeTime=3.2;
		rotationVelocity=18;
		weight=0.050799999;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={1,1.5,2.5};
		color[]=
		{
			{0.050000001,0.050000001,0.050000001,0.60000002},
			{0.050000001,0.050000001,0.050000001,0.89999998},
			{0.1,0.1,0.1,0.80000001},
			{0.1,0.1,0.1,0.64999998},
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,0.34999999},
			{0.1,0.1,0.1,0.25},
			{0.1,0.1,0.1,0.15000001},
			{0.1,0.1,0.1,0}
		};
		animationSpeed[]={1.1,0.89999998,0.60000002};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.2;
		onSurface=0;
		lifeTimeVar=0.69999999;
		positionVar[]={0.40000001,0,0.40000001};
		MoveVelocityVar[]={1,0.1,1};
		rotationVelocityVar=0.5;
		sizeVar=0.2;
		colorVar[]={0,0,0,0.1};
	};
	class nwge_PlanExplSmoke: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=20;
		moveVelocity[]={0,10,0};
		weight=10.1;
		volume=7.9000001;
		rubbing=1;
		size[]={6,15};
		color[]=
		{
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,0},
			{0.15000001,0.15000001,0.15000001,1},
			{0.15000001,0.15000001,0.15000001,0.89999998},
			{0.15000001,0.15000001,0.15000001,0.80000001},
			{0.15000001,0.15000001,0.15000001,0.69999999},
			{0.15000001,0.15000001,0.15000001,0.60000002},
			{0.15000001,0.15000001,0.15000001,0.5},
			{0.15000001,0.15000001,0.15000001,0.40000001},
			{0.15000001,0.15000001,0.15000001,0.30000001},
			{0.15000001,0.15000001,0.15000001,0.2},
			{0.15000001,0.15000001,0.15000001,0.1},
			{0.15000001,0.15000001,0.15000001,0}
		};
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.0099999998;
		lifeTimeVar=0.5;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={2,10,2};
		rotationVelocityVar=10;
		sizeVar=0.25;
		randomDirectionPeriodVar=0.0099999998;
		randomDirectionIntensityVar=0.0099999998;
	};
	class nwge_PlanExplSparks: Default
	{
		interval=0.0020000001;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		timerPeriod=0.1;
		lifeTime=0.5;
		moveVelocity[]={0,10,0};
		rotationVelocity=1;
		weight=0.15000001;
		volume=0.1;
		rubbing=0.18000001;
		size[]={0.5};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		animationSpeed[]={-2};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
		rotationVelocityVar=1;
		sizeVar=0.5;
		colorVar[]={0.050000001,0.050000001,0.050000001,0};
		emissiveColor[]=
		{
			{10000,10000,8000,0.5}
		};
		destroyOnWaterSurface=1;
	};
	class nwge_PlanDestSpark: Default
	{
		interval=0.050000001;
		particleShape="A3\data_f\cl_fire";
		lifeTime=6;
		rotationVelocity=1;
		weight=0.0049999999;
		volume=0.0041999999;
		rubbing=0.050000001;
		size[]={0.079999998,0.059999999,0.039999999,0.02,0.0099999998};
		color[]=
		{
			{1,1,1,1},
			{0,0,0,0}
		};
		animationSpeed[]={0,1};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		lifeTimeVar=2;
		moveVelocityVar[]={0.30000001,0.1,0.30000001};
		sizeVar=0.039999999;
		emissiveColor[]=
		{
			{100,100,10,1}
		};
		position[]={0,-0.2,0};
	};
	class nwge_PlanDestSmoke: Default
	{
		interval=0.25;
		circleRadius=0.2;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=0.5;
		lifeTime=76;
		moveVelocity[]={0,3,0};
		weight=0.050000001;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]={2.0999999,25};
		color[]=
		{
			{0.1,0.1,0.1,0.40000001},
			{0.1,0.1,0.1,0.60000002},
			{0.2,0.2,0.2,0.41999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		animationSpeed[]={0.80000001,0.30000001,0.25};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.050000001;
		onSurface=0;
		lifeTimeVar=66;
		positionVar[]={0.5,0.30000001,0.5};
		MoveVelocityVar[]={0.34999999,0.75,0.34999999};
		rotationVelocityVar=12;
	};
	class nwge_TankSpark2: Default
	{
		interval=0.0099999998;
		particleShape="nwge\data\SparksEffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=3.5;
		moveVelocity[]={0,1.5,0};
		rotationVelocity=1;
		weight=1.05;
		volume=1;
		rubbing=0.17;
		size[]={0.1,0.1,0.1,0.1,0.1,0.079999998,0.079999998,0.079999998,0.079999998,0};
		color[]=
		{
			{1,0.30000001,0.30000001,-6.5},
			{1,0.30000001,0.30000001,-6},
			{1,0.30000001,0.30000001,-5.5},
			{1,0.30000001,0.30000001,-4.5}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.55000001;
		lifeTimeVar=2.5;
		positionVar[]={0,0.2,0};
		MoveVelocityVar[]={0.2,1,0.2};
		rotationVelocityVar=2;
		sizeVar=0.039999999;
		colorVar[]={0,0.15000001,0.15000001,0};
		randomDirectionPeriodVar=0.30000001;
		randomDirectionIntensityVar=0.15000001;
	};
	class nwge_TankSparkBig: Default
	{
		particleEffects="nwge_TankSparkBigPlus";
		interval=0.02;
		particleShape="nwge\data\sparkseffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1;
		moveVelocity[]={0,20,0};
		rotationVelocity=1;
		weight=40;
		volume=7.9000001;
		rubbing=0.2;
		size[]={0.40000001};
		color[]=
		{
			{1,1,0.60000002,-15},
			{1,1,0.60000002,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.2;
		MoveVelocityVar[]={30,15,30};
		rotationVelocityVar=1;
		sizeVar=0.2;
	};
	class nwge_TankSparkBigLink1: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1.5;
		moveVelocity[]=
		{
			"0+(speedX/6)",
			"0+(speedY/6)",
			"0+(speedZ/6)"
		};
		weight=12;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={0.2};
		color[]=
		{
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-0.89999998},
			{1,1,0.5,-0.80000001},
			{1,1,0.5,-0.69999999},
			{1,1,0.5,-0.60000002},
			{1,1,0.5,-0.5},
			{1,1,0.5,-0.40000001},
			{1,1,0.5,-0.30000001},
			{1,1,0.5,-0.2},
			{1,1,0.5,-0.1},
			{1,1,0.5,0}
		};
		animationSpeed[]={0.25};
		MoveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=2;
		sizeVar=0.1;
		emissiveColor[]=
		{
			{100000,100000,100000,0},
			{0,0,0,0}
		};
	};
	class nwge_TankWheSpark1: Default
	{
		interval=0.050000001;
		particleShape="A3\data_f\cl_fire";
		lifeTime=6;
		rotationVelocity=1;
		weight=0.0049999999;
		volume=0.0041999999;
		size[]={0.050000001,0.029999999,0.02};
		color[]=
		{
			{1,1,1,1},
			{0,0,0,0}
		};
		animationSpeed[]={0,1};
		randomDirectionPeriod=0.30000001;
		randomDirectionIntensity=0.30000001;
		lifeTimeVar=0.80000001;
		moveVelocityVar[]={1,0.1,1};
		sizeVar=0.0099999998;
		emissiveColor[]=
		{
			{200,200,20,1}
		};
	};
	class nwge_TankWheSparkBig: Default
	{
		particleEffects="nwge_TankWheSparkBigPlus";
		interval=0.039999999;
		particleShape="nwge\data\sparkseffect";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1;
		moveVelocity[]={0,20,0};
		rotationVelocity=1;
		weight=40;
		volume=7.9000001;
		rubbing=0.2;
		size[]={0.40000001};
		color[]=
		{
			{1,1,0.60000002,-15},
			{1,1,0.60000002,0}
		};
		colorCoef[]={1,1,1,-5};
		animationSpeed[]={-2};
		lifeTimeVar=0.2;
		MoveVelocityVar[]={30,15,30};
		rotationVelocityVar=1;
		sizeVar=0.2;
	};
	class nwge_TankWheDestSmoke: Default
	{
		moveVelocity[]={0,5,0};
		circleRadius=0.5;
		interval=0.15000001;
		particleShape="nwge\data\smoke_01";
		particleFSLoop=0;
		angleVar=0.5;
		lifeTime=66;
		weight=0.050000001;
		volume=0.039999999;
		size[]={2,20,20};
		color[]=
		{
			{0.1,0.1,0.1,0.5},
			{0.1,0.1,0.1,1},
			{0.2,0.2,0.2,0.34999999},
			{0.2,0.2,0.2,0.30000001},
			{0.2,0.2,0.2,0.2},
			{0.2,0.2,0.2,0.1},
			{0.2,0.2,0.2,0.059999999},
			{0.34999999,0.34999999,0.34999999,0.0099999998},
			{0.34999999,0.34999999,0.34999999,0}
		};
		randomDirectionPeriod=0.5;
		randomDirectionPeriodVar=0.25;
		randomDirectionIntensity=0.075000003;
		randomDirectionIntensityVar=0.039999999;
		lifeTimeVar=50;
		rotationVelocityVar=10;
		colorVar[]={0,0,0,0.0099999998};
	};
	class nwge_TankWheSparkBigLink1: Default
	{
		interval=0.0080000004;
		particleShape="nwge\data\flare";
		particleFSLoop=0;
		angleVar=360;
		lifeTime=1.5;
		moveVelocity[]=
		{
			"0+(speedX/6)",
			"0+(speedY/6)",
			"0+(speedZ/6)"
		};
		weight=12;
		volume=7.9000001;
		rubbing=0.075000003;
		size[]={0.2};
		color[]=
		{
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-1},
			{1,1,0.5,-0.89999998},
			{1,1,0.5,-0.80000001},
			{1,1,0.5,-0.69999999},
			{1,1,0.5,-0.60000002},
			{1,1,0.5,-0.5},
			{1,1,0.5,-0.40000001},
			{1,1,0.5,-0.30000001},
			{1,1,0.5,-0.2},
			{1,1,0.5,-0.1},
			{1,1,0.5,0}
		};
		animationSpeed[]={0.25};
		MoveVelocityVar[]={2.5,2.5,2.5};
		rotationVelocityVar=2;
		sizeVar=0.1;
		emissiveColor[]=
		{
			{100000,100000,100000,0},
			{0,0,0,0}
		};
	};
	class nwge_TankExplFireMin1: ObjectDestructionFire1
	{
		position[]={0,0,1.5};
		interval=0.0099999998;
		lifeTime=0.5;
		circleRadius=1;
		circleVelocity[]={0.5,0.5,0.5};
		moveVelocity[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		size[]={0.050000001,0.80000001,0.80000001};
		rotationVelocityVar=0;
	};
	class nwge_TankExplFireMin2: nwge_TankExplFireMin1
	{
		position[]={0,-0.5,-1.5};
	};
	class nwge_TankExplFireMin3: nwge_TankExplFireMin1
	{
		position[]={0,0,0.75};
	};
	class nwge_TankExplFireMin4: nwge_TankExplFireMin1
	{
		position[]={0,-0.5,-0.75};
	};
	class nwge_TankWheExplFireMin1: ObjectDestructionFire1
	{
		position[]={0,0,1.5};
		interval=0.0099999998;
		lifeTime=0.5;
		circleRadius=0.60000002;
		circleVelocity[]={0.5,0.5,0.5};
		moveVelocity[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		size[]={0.050000001,0.80000001,0.80000001};
		rotationVelocityVar=0;
	};
	class nwge_DustTank2: nwge_DustTank1
	{
		moveVelocityVarConst[]={15,1.2,0};
	};
	class nwge_DustTank3: nwge_DustTank2
	{
		moveVelocityVarConst[]={0,1.2,-15};
	};
	class nwge_DustTank4: nwge_DustTank3
	{
		moveVelocityVarConst[]={-15,1.2,0};
	};
	class nwge_objectdestructionfire1: ObjectDestructionFire2
	{
		size[]={1.2,0.40000001};
	};
	class nwge_objectdestructionfire1a: nwge_objectdestructionfire1
	{
		position[]={0,0,-1};
	};
	class nwge_objectdestructionfire1b: nwge_objectdestructionfire1
	{
		position[]={0,0,-2};
	};
	class nwge_objectdestructionfire2: ObjectDestructionFire2
	{
		size[]={0.89999998,0.40000001};
	};
	class nwge_objectdestructionfire1small: ObjectDestructionFire1Small
	{
		size[]={0.89999998,0.30000001};
	};
	class nwge_ObjectDestructionFire2Small: ObjectDestructionFire2Small
	{
		size[]={0.89999998,0.2};
	};
	class nwge_ObjectDestructionFire3Small: ObjectDestructionFire2Small
	{
		positionVar[]={0,0,0};
		interval="0.005/((speed+0.01)*0.8+5)";
		size[]={0.2,0.02};
		lifeTime="0.005/((speed+0.01)/2+5)";
	};
	class nwge_82Smoke2: nwge_82Smoke1
	{
		particleShape="nwge\data\smoke_02";
		weight=10.1;
		size[]={4,10};
	};
	class nwge_82Smoke3: nwge_82Smoke1
	{
		particleShape="nwge\data\smoke_03";
		weight=11;
	};
	class nwge_82Smoke4: nwge_82Smoke1
	{
		particleShape="nwge\data\smoke_02";
		lifeTime=20;
		weight=10.1;
		size[]={4,10};
		color[]=
		{
			{0.68000001,0.57999998,0.47999999,0.1},
			{0.68000001,0.57999998,0.47999999,0}
		};
	};
	class nwge_82Dust2: nwge_82Dust1
	{
		moveVelocityVarConst[]={15,1.2,0};
	};
	class nwge_82Dust3: nwge_82Dust1
	{
		moveVelocityVarConst[]={0,1.2,-15};
	};
	class nwge_82Dust4: nwge_82Dust1
	{
		moveVelocityVarConst[]={-15,1.2,0};
	};
	class nwge_82Dust5: nwge_82Dust1
	{
		particleShape="A3\data_f\ParticleEffects\universal\refract";
		weight=10;
		volume=7.9000001;
		color[]=
		{
			{1,1,1,0.60000002},
			{1,1,1,0}
		};
	};
	class nwge_82Dust6: nwge_82Dust5
	{
		moveVelocityVarConst[]={15,1.2,0};
	};
	class nwge_82Dust7: nwge_82Dust5
	{
		moveVelocityVarConst[]={0,1.2,-15};
	};
	class nwge_82Dust8: nwge_82Dust5
	{
		moveVelocityVarConst[]={-15,1.2,0};
	};
	class nwge_82Explode2: nwge_82Explode1
	{
		particleShape="nwge\data\explosion_05";
	};
	class nwge_82Explode3: nwge_82Explode1
	{
		particleShape="nwge\data\explosion_08";
	};
	class nwge_82SmokeTrail1Link5: nwge_82SmokeTrail1Link4
	{
		lifeTime=8;
	};
	class nwge_82SmokeTrail2Link5: nwge_82SmokeTrail2Link4
	{
		lifeTime=8;
	};
	class nwge_155SmokeTrail2: nwge_155SmokeTrail1
	{
		particleEffects="nwge_155SmokeTrail2Link1";
		lifeTime=0.2;
		moveVelocity[]=
		{
			"(surfNormalX/1)*60",
			"(surfNormalY/1)*60",
			"(surfNormalZ/1)*60"
		};
		MoveVelocityVar[]={120,60,120};
	};
	class nwge_155SmokeBlastcore: nwge_155SmokeTrail1
	{
		particleEffects="nwge_155SmokeBlastcoreLink1";
		interval=0.0080000004;
		lifeTime=0.1;
		moveVelocity[]=
		{
			"(surfNormalX/1)*50",
			"(surfNormalY/1)*50",
			"(surfNormalZ/1)*50"
		};
		MoveVelocityVar[]={40,40,40};
	};
	class nwge_155StonesSmall2: nwge_155StonesSmall1
	{
		moveVelocityVarConst[]={80,40,0};
	};
	class nwge_155StonesSmall3: nwge_155StonesSmall1
	{
		moveVelocityVarConst[]={0,40,-80};
	};
	class nwge_155StonesSmall4: nwge_155StonesSmall1
	{
		moveVelocityVarConst[]={-80,40,0};
	};
	class nwge_155Dust2: nwge_155Dust1
	{
		moveVelocityVarConst[]={30,1.2,0};
	};
	class nwge_155Dust3: nwge_155Dust1
	{
		moveVelocityVarConst[]={0,1.2,-30};
	};
	class nwge_155Dust4: nwge_155Dust1
	{
		moveVelocityVarConst[]={-30,1.2,0};
	};
	class nwge_155Dust6: nwge_155Dust5
	{
		moveVelocityVarConst[]={30,1.2,0};
	};
	class nwge_155Dust7: nwge_155Dust5
	{
		moveVelocityVarConst[]={0,1.2,-30};
	};
	class nwge_155Dust8: nwge_155Dust5
	{
		moveVelocityVarConst[]={-30,1.2,0};
	};
	class nwge_155Explode2: nwge_155Explode1
	{
		particleShape="nwge\data\explosion_05";
	};
	class nwge_155Explode3: nwge_155Explode1
	{
		particleShape="nwge\data\explosion_08";
		color[]=
		{
			{1,1,0.5,-4},
			{1,1,0.5,0}
		};
	};
	class nwge_DustArty2: nwge_DustArty1
	{
		moveVelocityVarConst[]={15,1.2,0};
	};
	class nwge_DustArty3: nwge_DustArty2
	{
		moveVelocityVarConst[]={0,1.2,-15};
	};
	class nwge_DustArty4: nwge_DustArty3
	{
		moveVelocityVarConst[]={-15,1.2,0};
	};
	class nwge_ArtilleryFiredR: nwge_ArtilleryFiredL
	{
		moveVelocity[]=
		{
			"-8*directionX",
			"-8*directionY",
			"-8*directionZ"
		};
		positionVarConst[]=
		{
			"-directionLocalX",
			"-directionLocalY",
			"-directionLocalZ"
		};
		MoveVelocityVarConst[]=
		{
			"-5*directionX",
			"-5*directionY",
			"-5*directionZ"
		};
	};
	class nwge_MK82ground2: nwge_MK82ground1
	{
		moveVelocity[]={0,200,0};
		animationSpeed[]={0.2};
		positionVar[]={6,6,6};
		MoveVelocityVar[]={10,200,10};
	};
	class nwge_MK82ground4: nwge_MK82ground3
	{
		lifeTime=12;
		moveVelocity[]={0,200,0};
		positionVar[]={6,6,6};
		MoveVelocityVar[]={10,200,10};
		rotationVelocityVar=20;
	};
	class nwge_MK82Trail2: nwge_MK82Trail1
	{
		particleEffects="nwge_MK82Tra2Link";
		lifeTime=3.7;
		lifeTimeVar=0.25;
		MoveVelocityVar[]={70,50,70};
	};
	class nwge_MK82Dust2: nwge_MK82Dust1
	{
		moveVelocityVarConst[]={30,1.2,0};
	};
	class nwge_MK82Dust3: nwge_MK82Dust1
	{
		moveVelocityVarConst[]={0,1.2,-30};
	};
	class nwge_MK82Dust4: nwge_MK82Dust1
	{
		moveVelocityVarConst[]={-30,1.2,0};
	};
	class nwge_MK82Dust5: nwge_MK82Dust1
	{
		particleShape="A3\data_f\ParticleEffects\universal\refract";
		weight=10;
		volume=7.9000001;
		color[]=
		{
			{1,1,1,0.60000002},
			{1,1,1,0}
		};
	};
	class nwge_MK82Dust6: nwge_MK82Dust5
	{
		moveVelocityVarConst[]={30,1.2,0};
	};
	class nwge_MK82Dust7: nwge_MK82Dust5
	{
		moveVelocityVarConst[]={0,1.2,-30};
	};
	class nwge_MK82Dust8: nwge_MK82Dust5
	{
		moveVelocityVarConst[]={-30,1.2,0};
	};
	class nwge_MK82exp1Link3: nwge_MK82exp1Link2
	{
		particleShape="nwge\data\smoke_02";
	};
	class nwge_MK82Tra2Link3: nwge_MK82Tra2Link2
	{
		particleShape="nwge\data\smoke_02";
		lifeTime=8;
	};
	class nwge_MK82Tra2Link6: nwge_MK82Tra2Link5
	{
		particleShape="nwge\data\smoke_02";
		lifeTime=8;
		MoveVelocityVar[]={20,20,20};
	};
	class nwge_MK82Tra1Link3: nwge_MK82Tra1Link2
	{
		particleShape="nwge\data\smoke_02";
		lifeTime=8;
	};
	class nwge_MK82Tra1Link6: nwge_MK82Tra1Link5
	{
		particleShape="nwge\data\smoke_02";
		lifeTime=8;
	};
	class nwge_LauSpark2: nwge_LauSpark1
	{
		MoveVelocityVar[]={30,30,30};
		positionVar[]={4,4,4};
		randomDirectionPeriodVar=1;
		randomDirectionIntensityVar=1;
		animationSpeed[]={-2};
		randomDirectionPeriod=1;
		randomDirectionIntensity=1;
	};
	class nwge_CarFuelExpLink2: nwge_CarFuelExpLink1
	{
		interval=0.039999999;
		lifeTime=5;
		rotationVelocityVar=10;
	};
	class nwge_VEESmok3: nwge_VEESmok2
	{
		particleShape="nwge\data\smoke_02";
		moveVelocity[]={0,5,0};
		color[]=
		{
			{0.02,0.02,0.02,0},
			{0.02,0.02,0.02,1},
			{0.02,0.02,0.02,0.89999998},
			{0.02,0.02,0.02,0.80000001},
			{0.02,0.02,0.02,0.69999999},
			{0.02,0.02,0.02,0.60000002},
			{0.02,0.02,0.02,0.5},
			{0.02,0.02,0.02,0.40000001},
			{0.02,0.02,0.02,0.30000001},
			{0.02,0.02,0.02,0.2},
			{0.02,0.02,0.02,0.1},
			{0.02,0.02,0.02,0}
		};
		MoveVelocityVar[]={3,5,3};
	};
	class nwge_VEEBall2: nwge_VEEBall1
	{
		interval=0.050000001;
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0.89999998},
			{1,1,1,0.80000001},
			{1,1,1,0.69999999},
			{1,1,1,0.60000002},
			{1,1,1,0.5},
			{1,1,1,0.40000001},
			{1,1,1,0.30000001},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,-5};
		positionVar[]={1.3,1.3,1.3};
		MoveVelocityVar[]={5,8,5};
	};
	class nwge_VEEBExplSmoke2: nwge_VEEBExplSmoke1
	{
		particleShape="nwge\data\smoke_02";
		moveVelocity[]={0,5,0};
		color[]=
		{
			{0.02,0.02,0.02,0},
			{0.02,0.02,0.02,1},
			{0.02,0.02,0.02,0.89999998},
			{0.02,0.02,0.02,0.80000001},
			{0.02,0.02,0.02,0.69999999},
			{0.02,0.02,0.02,0.60000002},
			{0.02,0.02,0.02,0.5},
			{0.02,0.02,0.02,0.40000001},
			{0.02,0.02,0.02,0.30000001},
			{0.02,0.02,0.02,0.2},
			{0.02,0.02,0.02,0.1},
			{0.02,0.02,0.02,0}
		};
		MoveVelocityVar[]={3,5,3};
	};
	class nwge_VEEBExplEmitLinkSmoke2: nwge_VEEBExplEmitLinkSmoke1
	{
		particleShape="nwge\data\smoke_02";
		lifeTime=8;
		animationSpeed[]={0.80000001,0.40000001};
		sizeVar=0.050000001;
		colorVar[]={0,0,0,0.1};
	};
	class nwge_VEESBall2: nwge_VEESBall1
	{
		interval=0.050000001;
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0.89999998},
			{1,1,1,0.80000001},
			{1,1,1,0.69999999},
			{1,1,1,0.60000002},
			{1,1,1,0.5},
			{1,1,1,0.40000001},
			{1,1,1,0.30000001},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		colorCoef[]={1,1,1,-5};
		positionVar[]={1.3,1.3,1.3};
		MoveVelocityVar[]={5,8,5};
	};
	class nwge_HeliShard2: nwge_Shard2
	{
		interval=0.12;
	};
	class nwge_HeliShard2Static: nwge_Shard2Static
	{
		interval=0.07;
	};
	class nwge_HeliShard3: nwge_Shard3
	{
		interval=0.1;
	};
	class nwge_HeliShard3Static: nwge_Shard3Static
	{
		interval=0.059999999;
	};
	class nwge_HeliExplFireMin2: nwge_HeliExplFireMin1
	{
		position[]={0,-0.5,-1.5};
	};
	class nwge_HeliExplFireMin3: nwge_HeliExplFireMin1
	{
		position[]={0,-1,-3.5};
		circleRadius=0;
	};
	class nwge_HeliExplFireMin4: nwge_HeliExplFireMin1
	{
		position[]={0,-0.5,-0.75};
	};
	class nwge_HeliExplFireMin5: nwge_HeliExplFireMin1
	{
		position[]={0,0,0.75};
	};
	class nwge_HeliDestSpark1: nwge_HeliDestSpark
	{
		circleRadius=0.5;
		position[]={0,-0.5,-0.75};
	};
	class nwge_HeliDestSpark2: nwge_HeliDestSpark
	{
		circleRadius=0.5;
		position[]={0,0,0.75};
	};
	class nwge_HeliDestSmoke1: nwge_HeliDestSmoke
	{
		interval=0.25;
		lifeTime=0.5;
		position[]={0,-1,-3.5};
		particleShape="nwge\data\smoke_03";
		size[]={1,2.5};
		lifeTimeVar=1;
		MoveVelocityVar[]={0.5,1.5,0.5};
	};
	class nwge_HeliFire2: nwge_HeliFire1
	{
		interval=0.050000001;
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0.89999998},
			{1,1,1,0.80000001},
			{1,1,1,0.69999999},
			{1,1,1,0.60000002},
			{1,1,1,0.5},
			{1,1,1,0.40000001},
			{1,1,1,0.30000001},
			{1,1,1,0.2},
			{1,1,1,0.1},
			{1,1,1,0}
		};
		positionVar[]={1.3,1.3,1.3};
		MoveVelocityVar[]={5,8,5};
	};
	class nwge_HeliSmoke2: nwge_HeliSmoke1
	{
		particleShape="nwge\data\smoke_01";
		size[]={9,12,15};
		moveVelocity[]={0,5,0};
		color[]=
		{
			{0.02,0.02,0.02,0},
			{0.02,0.02,0.02,1},
			{0.02,0.02,0.02,0.89999998},
			{0.02,0.02,0.02,0.80000001},
			{0.02,0.02,0.02,0.69999999},
			{0.02,0.02,0.02,0.60000002},
			{0.02,0.02,0.02,0.5},
			{0.02,0.02,0.02,0.40000001},
			{0.02,0.02,0.02,0.30000001},
			{0.02,0.02,0.02,0.2},
			{0.02,0.02,0.02,0.1},
			{0.02,0.02,0.02,0}
		};
		MoveVelocityVar[]={3,5,3};
	};
	class nwge_HeliSpark2: nwge_HeliSpark1
	{
		interval=0.0020000001;
		timerPeriod=0.1;
		lifeTime=0.5;
		moveVelocity[]={0,10,0};
		weight=0.15000001;
		rubbing=0.18000001;
		size[]={0.2};
		color[]=
		{
			{1,1,0.80000001,-1},
			{1,1,0.69999999,0}
		};
		lifeTimeVar=1;
		positionVar[]={1,1,1};
		MoveVelocityVar[]={100,100,100};
	};
	class nwge_PlanShard1: nwge_Shard1
	{
		interval=0.1;
	};
	class nwge_PlanShard1Static: nwge_Shard1Static
	{
		interval=0.059999999;
	};
	class nwge_PlanShard2: nwge_Shard2
	{
		interval=0.090000004;
	};
	class nwge_PlanShard2Static: nwge_Shard2Static
	{
		interval=0.055;
	};
	class nwge_PlanShard3: nwge_Shard3
	{
		interval=0.079999998;
	};
	class nwge_PlanShard3Static: nwge_Shard3Static
	{
		interval=0.050000001;
	};
	class nwge_PlanExplFireMin2: nwge_PlanExplFireMin1
	{
		position[]={0,-0.5,-1.5};
	};
	class nwge_PlanExplFireMin3: nwge_PlanExplFireMin1
	{
		position[]={0,-1,-3.5};
		circleRadius=0;
	};
	class nwge_PlanExplFireMin4: nwge_PlanExplFireMin1
	{
		position[]={0,-0.5,-0.75};
	};
	class nwge_PlanExplFireMin5: nwge_PlanExplFireMin1
	{
		position[]={0,0,0.75};
	};
	class nwge_TankDestSpark1: nwge_TankSpark1
	{
		circleRadius=0.5;
		position[]={0,-0.5,-0.75};
	};
	class nwge_TankDestSpark2: nwge_TankSpark1
	{
		circleRadius=0.5;
		position[]={0,0,0.75};
	};
	class nwge_TankSparkBigLink2: nwge_TankSparkBigLink1
	{
		rotationVelocityVar=10;
	};
	class nwge_TankWheExplFireMin2: nwge_TankWheExplFireMin1
	{
		position[]={0,-0.5,-1.5};
	};
	class nwge_TankWheExplFireMin3: nwge_TankWheExplFireMin1
	{
		position[]={0,0,0.75};
	};
	class nwge_TankWheExplFireMin4: nwge_TankWheExplFireMin1
	{
		position[]={0,-0.5,-0.75};
	};
	class nwge_TankWheDestSpark1: nwge_TankWheSpark1
	{
		circleRadius=0.5;
		position[]={0,-0.5,-0.75};
	};
	class nwge_TankWheDestSpark2: nwge_TankWheSpark1
	{
		circleRadius=0.5;
		position[]={0,0,0.75};
	};
	class nwge_TankWheSparkBigLink2: nwge_TankWheSparkBigLink1
	{
		rotationVelocityVar=10;
	};
	class nwge_smokeshelArtyLinkl: Default
	{
		interval=33;
		particleShape="nwge\data\smoke_02";
		particleFSLoop=0;
		angleVar=0.1;
		timerPeriod=0.1;
		lifeTime=32;
		moveVelocity[]={0.40000001,0.30000001,0.5};
		rotationVelocity=1;
		weight=10.1;
		volume=7.9000001;
		rubbing=0.050000001;
		size[]={0.1,2,3};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0},
			{0.60000002,0.60000002,0.60000002,1},
			{0.60000002,0.60000002,0.60000002,0.94999999},
			{0.60000002,0.60000002,0.60000002,0.89999998},
			{0.60000002,0.60000002,0.60000002,0.85000002},
			{0.60000002,0.60000002,0.60000002,0.80000001},
			{0.60000002,0.60000002,0.60000002,0.75},
			{0.60000002,0.60000002,0.60000002,0.69999999},
			{0.60000002,0.60000002,0.60000002,0.64999998},
			{0.60000002,0.60000002,0.60000002,0.60000002},
			{0.60000002,0.60000002,0.60000002,0.55000001},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0.44999999},
			{0.60000002,0.60000002,0.60000002,0.40000001},
			{0.60000002,0.60000002,0.60000002,0.34999999},
			{0.60000002,0.60000002,0.60000002,0.30000001},
			{0.60000002,0.60000002,0.60000002,0.25},
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.15000001},
			{0.60000002,0.60000002,0.60000002,0.1},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		colorCoef[]={0.60000002,0.60000002,0.60000002,1};
		animationSpeed[]={1.5,0.5};
		MoveVelocityVar[]={0.5,0.1,0.40000001};
		rotationVelocityVar=15;
		sizeVar=0.5;
	};
};
class MissileEffects
{
	class Light1
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.015;
		interval=1;
		lifeTime=1;
	};
};
class FX_Missile_AA
{
	class FX_Missile_AA_light_01
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.015;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AA_high
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class FX_Plane_Missile_AA_medium
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_AA_low
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class FX_Missile_AG
{
	class FX_Missile_AG_light_01
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.015;
		interval=1;
		lifeTime=1;
	};
	class FX_Plane_Missile_AG_high
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class FX_Plane_Missile_AG_medium
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_AG_low
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class FX_Missile_SAM
{
	class FX_Missile_SAM_light_01
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.015;
		interval=1;
		lifeTime=1.5;
	};
	class FX_Plane_Missile_SAM_high
	{
		simulation="particles";
		type="FX_MissileTrail_SAM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=2;
	};
	class FX_Plane_Missile_SAM_medium
	{
		simulation="particles";
		type="FX_MissileTrail_SAM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_SAM_low
	{
		simulation="particles";
		type="FX_MissileTrail_SAM";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class FX_Missile_SAM_LongRange
{
	class FX_Missile_SAM_light_01
	{
		simulation="light";
		type="RocketLight";
		position[]={0,0,0};
		intensity=0.015;
		interval=1;
		lifeTime=1.5;
	};
	class FX_Plane_Missile_SAM_high
	{
		simulation="particles";
		type="FX_MissileTrail_SAM_LongRange";
		position[]={0,0,0};
		intensity=2;
		interval=0.0020000001;
		lifeTime=1;
		qualityLevel=2;
	};
	class FX_Plane_Missile_SAM_medium
	{
		simulation="particles";
		type="FX_MissileTrail_SAM_LongRange";
		position[]={0,0,0};
		intensity=1.4;
		interval=1;
		lifeTime=1;
		qualityLevel=1;
	};
	class FX_Plane_Missile_SAM_low
	{
		simulation="particles";
		type="FX_MissileTrail_SAM_LongRange";
		position[]={0,0,0};
		intensity=1.3;
		interval=1;
		lifeTime=1;
		qualityLevel=0;
	};
};
class RocketBackEffectsRPG7
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=1;
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPG7";
		intensity=1;
		interval=0.1;
		lifeTime=1.2;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPG7";
		intensity=1;
		interval=0.1;
		lifeTime=1;
	};
};
class RocketBackEffectsNLAW
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireNLAW";
		enabled="(density interpolate [0.98,0.981,-1,1])";
		lifeTime=1.1;
	};
	class RocketBacksmoke1
	{
		simulation="particles";
		type="RocketBacksmokeNLAW";
		enabled="(density interpolate [0.98,0.981,-1,1])";
		lifeTime=1.2;
	};
};
class RocketBackEffectsRPG
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireRPG";
		enabled="(density interpolate [0.98,0.981,-1,1])";
		lifeTime=1.1;
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPG";
		enabled="(density interpolate [0.98,0.981,-1,1])";
		lifeTime=1.1;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPG";
		enabled="(density interpolate [0.98,0.981,-1,1])";
		lifeTime=1.2;
	};
};
class RocketBackEffectsRPGNT
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=1.1;
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=1.1;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=1.2;
	};
};
class RocketBackEffectsNLAWNT
{
	class RocketBackfire1
	{
		simulation="particles";
		type="RocketBackfireSmallRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=1.1;
	};
	class RocketBacksmoke2
	{
		simulation="particles";
		type="RocketBacksmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=1.1;
	};
	class RocketFrontsmoke
	{
		simulation="particles";
		type="RocketFrontsmokeRPGNT";
		intensity=1;
		interval=0.1;
		lifeTime=1.2;
	};
};
class BombCrater
{
	class BombSmk1
	{
		simulation="particles";
		type="BombSmk1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.40000001;
	};
	class BombSmk2
	{
		simulation="particles";
		type="BombSmk2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.69999999;
	};
	class BombSmk3
	{
		simulation="particles";
		type="BombSmk3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
};
class CannonFire
{
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.15000001;
		interval=1;
		lifeTime=0.25;
	};
	class Smoke
	{
		simulation="particles";
		type="CannonSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=4;
	};
	class Flash
	{
		simulation="particles";
		type="CannonFlash";
		position[]={0,0,0};
		intensity=2;
		interval=1;
		lifeTime=1;
	};
};
class ClusterCraterEffects
{
	class Light
	{
		simulation="light";
		type="nwge_ClustLig";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class LightExp
	{
		simulation="particles";
		type="nwge_ClustLightExpl";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Dirt: LightExp
	{
		type="nwge_ClustDir";
	};
	class Explode: Dirt
	{
		type="nwge_ClustExplos";
	};
};
class nwge_ShardFire1
{
	class Light
	{
		simulation="light";
		type="nwge_ShardLightLink";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=14;
		enabled="distToWater";
	};
	class Smoke: Light
	{
		simulation="particles";
		type="nwge_ShardSmokeLink";
	};
	class Firee: Smoke
	{
		type="nwge_ObjectDestructionFire3Small";
	};
};
class nwge_ShardFire2
{
	class Light
	{
		simulation="light";
		type="nwge_ShardLightLink";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=10;
		enabled="distToWater";
	};
	class Smoke: Light
	{
		simulation="particles";
		type="nwge_ShardSmokeLink";
	};
	class Firee: Smoke
	{
		type="nwge_ObjectDestructionFire3Small";
	};
};
class nwge_ShardFire3
{
	class Light
	{
		simulation="light";
		type="nwge_ShardLightLink";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=6;
		enabled="distToWater";
	};
	class Smoke: Light
	{
		simulation="particles";
		type="nwge_ShardSmokeLink";
	};
	class Firee: Smoke
	{
		type="nwge_ObjectDestructionFire3Small";
	};
};
class nwge_80mm_Smoke
{
	class Dirt1
	{
		simulation="particles";
		type="nwge_82Stones";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		enabled="distToWater";
	};
	class Dirt2: Dirt1
	{
		type="nwge_82StonesSmall1";
	};
	class Smoke1: Dirt2
	{
		type="nwge_82SmokeDark";
	};
	class Smoke2: Smoke1
	{
		type="nwge_82SmokeTrail1";
	};
	class Smoke3: Smoke2
	{
		type="nwge_82SmokeTrail2";
	};
	class Smoke4: Smoke3
	{
		type="nwge_82Smoke1";
	};
	class Smoke5: Smoke4
	{
		type="nwge_82Smoke2";
	};
	class Smoke6: Smoke5
	{
		type="nwge_82Smoke3";
	};
	class Smoke7: Smoke6
	{
		type="nwge_82Smoke4";
	};
	class Dust1: Smoke7
	{
		type="nwge_82Dust1";
	};
	class Dust2: Dust1
	{
		type="nwge_82Dust2";
	};
	class Dust3: Dust2
	{
		type="nwge_82Dust3";
	};
	class Dust4: Dust3
	{
		type="nwge_82Dust4";
	};
	class Dust5: Dust4
	{
		type="nwge_82Dust5";
	};
	class Dust6: Dust5
	{
		type="nwge_82Dust6";
	};
	class Dust7: Dust6
	{
		type="nwge_82Dust7";
	};
	class Dust8: Dust7
	{
		type="nwge_82Dust8";
	};
	class Dust9: Dust8
	{
		type="CircleDustBig";
	};
};
class nwge_80mm_Explode
{
	class Light
	{
		simulation="light";
		type="nwge_LigFast";
		position[]={0,0,2};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class LightExp
	{
		simulation="particles";
		type="nwge_82LightExpl";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Spark
	{
		simulation="particles";
		type="nwge_82Sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		enabled="distToWater";
	};
	class Explode1: Spark
	{
		type="nwge_82Explode1";
	};
	class Explode2: Explode1
	{
		type="nwge_82Explode2";
	};
	class Explode3: Explode2
	{
		type="nwge_82Explode3";
	};
};
class nwge_82SmokeTrail1Link1
{
	class Link
	{
		simulation="particles";
		type="nwge_82SmokeTrail1Link2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_82SmokeTrail1Link3
{
	class Link
	{
		simulation="particles";
		type="nwge_82SmokeTrail1Link4";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
	class Link2
	{
		simulation="particles";
		type="nwge_82SmokeTrail1Link5";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_82SmokeTrail2Link1
{
	class Link
	{
		simulation="particles";
		type="nwge_82SmokeTrail2Link2";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_82SmokeTrail2Link3
{
	class Link
	{
		simulation="particles";
		type="nwge_82SmokeTrail2Link4";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
	class Link2
	{
		simulation="particles";
		type="nwge_82SmokeTrail2Link5";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_155mm_Smoke
{
	class Smoke1
	{
		simulation="particles";
		type="nwge_155SmokeBigDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		enabled="distToWater";
	};
	class Smoke2: Smoke1
	{
		type="nwge_155SmokeTrail1";
	};
	class Smoke3: Smoke2
	{
		type="nwge_155SmokeTrail2";
	};
	class Smoke4: Smoke3
	{
		type="nwge_155SmokeBlastcore";
	};
	class Dirt1: Smoke4
	{
		type="DirtMed";
	};
	class Dirt2: Dirt1
	{
		type="nwge_155Stones";
	};
	class Dirt2a: Dirt2
	{
		type="nwge_155StonesBig";
	};
	class Dirt3a: Dirt2a
	{
		type="nwge_155StonesSmall1";
	};
	class Dirt3b: Dirt3a
	{
		type="nwge_155StonesSmall2";
	};
	class Dirt3c: Dirt3b
	{
		type="nwge_155StonesSmall3";
	};
	class Dirt3d: Dirt3c
	{
		type="nwge_155StonesSmall4";
	};
	class Dirt4a: Dirt3d
	{
		type="nwge_155Dirt";
	};
	class Dirt4b: Dirt4a
	{
		type="nwge_155Dirt";
	};
	class Dust1: Dirt4b
	{
		type="nwge_155Dust1";
	};
	class Dust2: Dust1
	{
		type="nwge_155Dust2";
	};
	class Dust3: Dust2
	{
		type="nwge_155Dust3";
	};
	class Dust4: Dust3
	{
		type="nwge_155Dust4";
	};
	class Dust5: Dust4
	{
		type="nwge_155Dust5";
	};
	class Dust6: Dust5
	{
		type="nwge_155Dust6";
	};
	class Dust7: Dust6
	{
		type="nwge_155Dust7";
	};
	class Dust8: Dust7
	{
		type="nwge_155Dust8";
	};
	class Dust9: Dust8
	{
		type="CircleDustBig";
	};
};
class nwge_155mm_Explode
{
	class Light
	{
		simulation="light";
		type="nwge_LigFastBig";
		position[]={0,0,5};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class LightExp
	{
		simulation="particles";
		type="nwge_155LightExpl";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Sparks
	{
		simulation="particles";
		type="nwge_155Sparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		enabled="distToWater";
	};
	class Explode1: Sparks
	{
		type="nwge_155Explode1";
		position[]={0,0,0};
	};
	class Explode2: Explode1
	{
		type="nwge_155Explode2";
		position[]={0,0,0};
	};
	class Explode3: Explode2
	{
		type="nwge_155Explode3";
		position[]={0,0,0};
	};
};
class nwge_155SmokeTrail1Link1
{
	class Link
	{
		simulation="particles";
		type="nwge_155SmokeTrail1Link2";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_155SmokeTrail1Link3
{
	class Link
	{
		simulation="particles";
		type="nwge_155SmokeTrail1Link4";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
	class Link2
	{
		simulation="particles";
		type="nwge_155SmokeTrail1Link4";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_155SmokeTrail2Link1
{
	class Link
	{
		simulation="particles";
		type="nwge_155SmokeTrail2Link2";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_155SmokeTrail2Link3
{
	class Link
	{
		simulation="particles";
		type="nwge_155SmokeTrail2Link4";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
	class Link2
	{
		simulation="particles";
		type="nwge_155SmokeTrail2Link5";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_155SmokeBlastcoreLink1
{
	class Link
	{
		simulation="particles";
		type="nwge_155SmokeBlastcoreLink2";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
};
class nwge_155SmokeBlastcoreLink3
{
	class Link
	{
		simulation="particles";
		type="nwge_155SmokeBlastcoreLink4";
		intensity=1;
		interval=1;
		lifeTime=5;
		enabled="distToWater";
	};
};
class ArtilleryFired1
{
	class Light1
	{
		simulation="light";
		type="nwge_FirLigCan1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Light2: Light1
	{
		type="nwge_FirLigCan2";
	};
	class Smoke2
	{
		simulation="particles";
		type="nwge_ArtilleryFired1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke4: Smoke2
	{
		type="nwge_ArtilleryFiredF";
	};
	class Spark: Smoke4
	{
		type="nwge_ArtillerySparks";
	};
	class Dust1: Spark
	{
		type="nwge_DustArty1";
	};
	class Dust2: Dust1
	{
		type="nwge_DustArty2";
	};
	class Dust3: Dust2
	{
		type="nwge_DustArty3";
	};
	class Dust4: Dust3
	{
		type="nwge_DustArty4";
	};
};
class ArtilleryFiredL
{
	class nwge_Smoke
	{
		simulation="particles";
		type="nwge_ArtilleryFiredL";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class ArtilleryFiredR
{
	class nwge_Smoke
	{
		simulation="particles";
		type="nwge_ArtilleryFiredR";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
};
class nwge_MK82_Smoke
{
	class Dust1
	{
		simulation="particles";
		type="nwge_MK82Dust1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		enabled="distToWater";
	};
	class Dust2: Dust1
	{
		type="nwge_MK82Dust2";
	};
	class Dust3: Dust2
	{
		type="nwge_MK82Dust3";
	};
	class Dust4: Dust3
	{
		type="nwge_MK82Dust4";
	};
	class Dust5: Dust4
	{
		type="nwge_MK82Dust5";
	};
	class Dust6: Dust5
	{
		type="nwge_MK82Dust6";
	};
	class Dust7: Dust6
	{
		type="nwge_MK82Dust7";
	};
	class Dust8: Dust7
	{
		type="nwge_MK82Dust8";
	};
	class Dust9: Dust8
	{
		type="CircleDustBig";
	};
	class Smoke1: Dust9
	{
		type="nwge_MK82ground1";
	};
	class Smoke2: Smoke1
	{
		type="nwge_MK82ground2";
	};
	class Smoke3: Smoke2
	{
		type="nwge_MK82ground3";
	};
	class Smoke4: Smoke3
	{
		type="nwge_MK82ground4";
	};
	class Smoke5: Smoke4
	{
		type="nwge_MK82Trail1";
	};
	class Smoke6: Smoke5
	{
		type="nwge_MK82Trail2";
	};
	class Dirt1: Smoke6
	{
		type="nwge_MK82Stones1";
	};
	class Dirt2: Dirt1
	{
		type="nwge_MK82Stones2";
	};
	class Dirt3: Dirt2
	{
		type="nwge_MK82Stones3";
	};
};
class nwge_MK82_Explode
{
	class LightExp
	{
		simulation="particles";
		type="nwge_MK82LightExpl";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Light1
	{
		simulation="light";
		type="nwge_MK82light1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.079999998;
	};
	class Light2: Light1
	{
		type="nwge_MK82light2";
		lifeTime=0.5;
	};
	class Light3: Light1
	{
		type="nwge_MK82light3";
		lifeTime=0.30000001;
	};
	class Explo1
	{
		simulation="particles";
		type="nwge_MK82exp1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
		enabled="distToWater";
	};
	class Explo2: Explo1
	{
		type="nwge_MK82exp2";
	};
	class Explo3: Explo2
	{
		type="nwge_MK82exp3";
	};
	class Spark1: Explo3
	{
		type="nwge_MK82spa1";
	};
	class Spark2: Spark1
	{
		type="nwge_MK82spa2";
	};
	class Spark3: Spark2
	{
		type="nwge_MK82spa3";
	};
};
class nwge_MK82exp1Link
{
	class Trail1
	{
		simulation="light";
		type="nwge_MK82light2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
		enabled="distToWater";
	};
	class Trail2
	{
		simulation="particles";
		type="nwge_MK82exp1Link1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=0.1;
		enabled="distToWater";
	};
	class Trail3: Trail2
	{
		type="nwge_MK82exp1Link2";
	};
	class Trail4: Trail3
	{
		type="nwge_MK82exp1Link3";
	};
	class Trail5: Trail4
	{
		type="nwge_MK82exp1Link4";
	};
};
class nwge_MK82Tra1Link
{
	class Trail1
	{
		simulation="particles";
		type="nwge_MK82Tra1Link1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=2;
		enabled="distToWater";
	};
	class Trail2: Trail1
	{
		type="nwge_MK82Tra1Link2";
	};
	class Trail3: Trail2
	{
		type="nwge_MK82Tra1Link3";
	};
	class Trail4: Trail3
	{
		type="nwge_MK82Tra1Link4";
	};
	class Trail5: Trail4
	{
		type="nwge_MK82Tra1Link5";
	};
	class Trail6: Trail5
	{
		type="nwge_MK82Tra1Link6";
	};
};
class nwge_MK82Tra2Link
{
	class Trail1
	{
		simulation="particles";
		type="nwge_MK82Tra2Link1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
	class Trail2: Trail1
	{
		type="nwge_MK82Tra2Link2";
	};
	class Trail3: Trail2
	{
		type="nwge_MK82Tra2Link3";
	};
	class Trail4: Trail3
	{
		type="nwge_MK82Tra2Link4";
	};
	class Trail5: Trail4
	{
		type="nwge_MK82Tra2Link5";
	};
	class Trail6: Trail5
	{
		type="nwge_MK82Tra2Link6";
	};
	class Trail7: Trail6
	{
		type="nwge_MK82Tra2Link7";
	};
};
class nwge_smokeshelLink
{
	class SmokeShell
	{
		simulation="particles";
		type="nwge_smokeshelLinkl";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=20;
		enabled="distToWater";
	};
};
class ATMissileExplosion
{
	class nwge_Lig1
	{
		simulation="light";
		type="nwge_LauLig";
		position[]={0,1,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.80000001;
	};
	class nwge_Lig2
	{
		simulation="particles";
		type="nwge_LauLightExpl";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class nwge_Exp
	{
		simulation="particles";
		type="nwge_LauExplos";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
	class nwge_Spark1
	{
		simulation="particles";
		type="nwge_LauSpark1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class nwge_Spark2
	{
		simulation="particles";
		type="nwge_LauSpark2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class nwge_CarAmmoSparkBigPlus
{
	class Trail1
	{
		simulation="particles";
		type="nwge_CarAmmoSparkBigLink1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
	class Trail2: Trail1
	{
		type="nwge_CarAmmoSparkBigLink2";
	};
};
class nwge_CarFuelExpLink
{
	class Exp1
	{
		simulation="particles";
		type="nwge_CarFuelExpLink1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=3;
		enabled="distToWater";
	};
	class Exp2: Exp1
	{
		type="nwge_CarFuelExpLink2";
	};
	class Smok: Exp2
	{
		type="nwge_CarFuelSmokLink";
	};
	class Fire: Exp2
	{
		type="nwge_CarFuelFireLink";
		lifeTime=0.2;
	};
};
class nwge_VehicleExplosionEffects
{
	class FireLight
	{
		simulation="light";
		type="nwge_VEELight";
		intensity=0.001;
		interval=1;
		position[]={0,1.5,0};
		lifeTime=120;
		enabled="distToWater";
	};
	class LightExp1: FireLight
	{
		type="nwge_VEELightExp1";
		lifeTime=0.40000001;
	};
	class LightExp2: LightExp1
	{
		type="nwge_VEELightExp2";
		lifeTime=1;
	};
	class Shard1
	{
		simulation="particles";
		type="nwge_Shard1";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shard2: Shard1
	{
		type="nwge_Shard2";
	};
	class Shard3: Shard2
	{
		type="nwge_Shard3";
	};
	class SharStat1: Shard3
	{
		type="nwge_Shard1Static";
	};
	class SharStat2: SharStat1
	{
		type="nwge_Shard2Static";
	};
	class SharStat3: SharStat2
	{
		type="nwge_Shard3Static";
	};
	class Spark1: SharStat3
	{
		type="nwge_VEESpark1";
	};
	class Spark2: Spark1
	{
		type="nwge_VEESpark2";
	};
	class ExpSmok1: Spark2
	{
		type="nwge_VEEExpSmok1";
	};
	class ExpSmok2: ExpSmok1
	{
		type="nwge_VEEExpSmok2";
	};
	class Explos: ExpSmok2
	{
		type="nwge_VEEExplParSml";
	};
	class Smoke1: Explos
	{
		type="nwge_VEESmok1";
	};
	class Smoke2: Smoke1
	{
		type="VehExpSmoke2Small";
	};
	class Smoke3: Smoke2
	{
		type="nwge_VEESmok2";
	};
	class Smoke4: Smoke3
	{
		type="nwge_VEESmok3";
	};
	class Fireball1: Smoke4
	{
		type="nwge_VEEBall1";
	};
	class Fireball2: Fireball1
	{
		type="nwge_VEEBall2";
	};
	class Fireball3: Fireball2
	{
		type="nwge_VEEBall3";
		lifeTime=1;
	};
};
class nwge_VEEBExplSparkBlast
{
	class Trail
	{
		simulation="particles";
		type="nwge_VEEBExplSparkBlastLink";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
	};
};
class nwge_VEEBExplEmit
{
	class Trail1
	{
		simulation="particles";
		type="nwge_VEEBExplEmitLink";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
	class Trail2: Trail1
	{
		type="nwge_VEEBExplEmitLinkSmoke1";
	};
	class Trail3: Trail2
	{
		type="nwge_VEEBExplEmitLinkSmoke2";
	};
};
class nwge_VehicleExplosionEffectsBig
{
	class FireLight
	{
		simulation="light";
		type="nwge_VEEBLight";
		intensity=0.001;
		interval=1;
		position[]={0,1.5,0};
		lifeTime=120;
		enabled="distToWater";
	};
	class LightExp1: FireLight
	{
		type="nwge_VEEBLightExp1";
		lifeTime=0.40000001;
	};
	class LightExp2: LightExp1
	{
		type="nwge_VEEBLightExp2";
		lifeTime=1;
	};
	class Shard1
	{
		simulation="particles";
		type="nwge_Shard1";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shard2: Shard1
	{
		type="nwge_Shard2";
	};
	class Shard3: Shard2
	{
		type="nwge_Shard3";
	};
	class SharStat1: Shard3
	{
		type="nwge_Shard1Static";
	};
	class SharStat2: SharStat1
	{
		type="nwge_Shard2Static";
	};
	class SharStat3: SharStat2
	{
		type="nwge_Shard3Static";
	};
	class Expl1
	{
		simulation="particles";
		type="nwge_VEEBExplBal1";
		position[]={0,0,-3};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Expl2: Expl1
	{
		type="nwge_VEEBExplBal2";
		position[]={0,0,0};
	};
	class Expl3: Expl2
	{
		type="nwge_VEEBExplPart";
	};
	class Expl4: Expl3
	{
		type="nwge_VEEBExplBlst";
	};
	class Expl5: Expl4
	{
		type="nwge_VEEBExpl";
	};
	class Smok1: Expl5
	{
		type="nwge_VEEBExplSmoke1";
	};
	class Smok2: Smok1
	{
		type="nwge_VEEBExplSmoke2";
	};
	class Spark1: Smok2
	{
		type="nwge_VEEBSpark1";
	};
	class Spark2: Spark1
	{
		type="nwge_VEEBSpark2";
	};
	class Spark3: Spark2
	{
		type="nwge_VEEBExplSpark";
	};
};
class nwge_VehicleExplosionEffectsSmall
{
	class LightExp1
	{
		simulation="light";
		type="nwge_VEESLightExp1";
		intensity=0.001;
		interval=1;
		position[]={0,1.5,0};
		lifeTime=0.1;
		enabled="distToWater";
	};
	class LightExp2: LightExp1
	{
		type="nwge_VEESLightExp2";
		lifeTime=0.30000001;
	};
	class Shard1
	{
		simulation="particles";
		type="nwge_Shard2";
		position[]={0,0.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class SharStat1: Shard1
	{
		type="nwge_Shard2Static";
	};
	class Spark1: SharStat1
	{
		type="nwge_VEESSpark1";
	};
	class Spark2: Spark1
	{
		type="nwge_VEESSpark2";
	};
	class ExpSmok1: Spark2
	{
		type="nwge_VEESExpSmok1";
	};
	class ExpSmok2: ExpSmok1
	{
		type="nwge_VEESExpSmok2";
	};
	class Explos: ExpSmok2
	{
		type="nwge_VEESExplParSml";
	};
	class Smoke1: Explos
	{
		type="nwge_VEESSmok1";
	};
	class Smoke2: Smoke1
	{
		type="VehExpSmoke2Small";
	};
	class Smoke3: Smoke2
	{
		type="nwge_VEESSmok2";
	};
	class Fireball1: Smoke3
	{
		type="nwge_VEESBall1";
	};
	class Fireball2: Fireball1
	{
		type="nwge_VEESBall2";
	};
	class Fireball3: Fireball2
	{
		type="nwge_VEESBall3";
		lifeTime=1;
	};
};
class nwge_HeliExplEfe1
{
	class Light
	{
		simulation="light";
		type="nwge_HeliExpLig1";
		position[]={0,1.5,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Shards
	{
		simulation="particles";
		type="nwge_HeliShard3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Fire1: Shards
	{
		type="nwge_HeliFire1";
	};
	class Fire2: Fire1
	{
		type="nwge_HeliFire2";
	};
	class Fire3: Fire2
	{
		type="ExplosionParticles";
	};
	class Smoke: Fire3
	{
		type="CloudMedDark";
	};
	class Spark: Smoke
	{
		type="nwge_HeliSpark2";
	};
};
class nwge_HeliExplEfe2
{
	class LightExp
	{
		type="nwge_HeliLightExpl";
		simulation="particles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Shard2: LightExp
	{
		type="nwge_HeliShard2";
	};
	class Shard3: Shard2
	{
		type="nwge_HeliShard3";
	};
	class SharStat2: Shard3
	{
		type="nwge_HeliShard2Static";
	};
	class SharStat3: SharStat2
	{
		type="nwge_HeliShard3Static";
	};
	class Fire1: SharStat3
	{
		type="nwge_HeliFire1";
	};
	class Fire2: Fire1
	{
		type="nwge_HeliFire2";
	};
	class Fire3: Fire2
	{
		type="ExplosionParticles";
	};
	class Smoke1: Fire3
	{
		type="nwge_HeliSmoke1";
	};
	class Smoke2: Smoke1
	{
		type="nwge_HeliSmoke2";
	};
	class Smoke3: Smoke2
	{
		type="CloudMedDark";
	};
	class Spark1: Smoke3
	{
		type="nwge_HeliSpark1";
	};
	class Spark2: Spark1
	{
		type="nwge_HeliSpark2";
	};
};
class nwge_TankSparkBigPlus
{
	class Trail1
	{
		simulation="particles";
		type="nwge_TankSparkBigLink1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
	class Trail2: Trail1
	{
		type="nwge_TankSparkBigLink2";
	};
};
class nwge_TankWheSparkBigPlus
{
	class Trail1
	{
		simulation="particles";
		type="nwge_TankWheSparkBigLink1";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=5;
		enabled="distToWater";
	};
	class Trail2: Trail1
	{
		type="nwge_TankWheSparkBigLink2";
	};
};
class CfgLights
{
	class nwge_ShardLightLink
	{
		diffuse[]={1,0.5,0.2};
		color[]={1,0.5,0.2};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity=3000;
		blinking=0;
		drawLight=0;
		flareSize=0.1;
		flareMaxDistance=6500;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=5;
		};
		position[]={0,0,0};
	};
	class nwge_LigFast
	{
		diffuse[]={0.096100003,0.0722,0.0031000001,0};
		color[]={0.96100003,0.722,0.030999999,1};
		ambient[]={0.096100003,0.0722,0.0031000001,0};
		brightness=10;
		intensity=1000000;
		flareSize=25;
		flareMaxDistance=3000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_LigFastBig
	{
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=13;
		intensity=10000000;
		flareSize=50;
		flareMaxDistance=6000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
	};
	class nwge_FirLigCan1
	{
		diffuse[]={2,1.9,1.6};
		color[]={1,0.89999998,0.60000002};
		ambient[]={0,0,0,0};
		brightness=40000;
		size=1;
		intensity=40000;
		drawLight=0;
		blinking=0;
		position[]={0,0,0};
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
	};
	class nwge_FirLigCan2
	{
		diffuse[]={0.93699998,0.63099998,0.259};
		color[]={0.93699998,0.63099998,0.259};
		ambient[]={0.93699998,0.63099998,0.259};
		brightness=300;
		intensity=10000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=70;
		flareMaxDistance=4000;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]=
		{
			"positionX+0.5*directionLocalX",
			"positionY+0.5*directionLocalY",
			"positionZ+0.5*directionLocalZ"
		};
	};
	class nwge_ClustLig
	{
		diffuse[]={0.096100003,0.0722,0.0031000001,0};
		color[]={0.96100003,0.722,0.030999999,1};
		ambient[]={0.096100003,0.0722,0.0031000001,0};
		brightness=10;
		intensity=1000000;
		flareSize=25;
		flareMaxDistance=3000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_MK82light1
	{
		diffuse[]={0,0,0};
		color[]={0.69999999,0.69999999,0.69999999};
		ambient[]={0.029999999,0.029999999,0.029999999,0};
		brightness=200;
		intensity=100000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=20;
		flareMaxDistance=6000;
		useFlare=1;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,0,0};
	};
	class nwge_MK82light2
	{
		diffuse[]={0,0,0};
		color[]={0.65499997,0.53500003,0};
		ambient[]={0.155,0.035,0,0};
		brightness=100;
		intensity=10000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=14;
		flareMaxDistance=6000;
		useFlare=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,0,0};
	};
	class nwge_MK82light3
	{
		diffuse[]={1,0.44999999,0.15000001};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=13;
		intensity=10000000;
		flareSize=50;
		flareMaxDistance=6000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_LauLig
	{
		diffuse[]={0.096100003,0.0722,0.0031000001,0};
		color[]={0.96100003,0.722,0.030999999,1};
		ambient[]={0.096100003,0.0722,0.0031000001,0};
		brightness=10;
		intensity=1000000;
		flareSize=25;
		flareMaxDistance=3000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_VEELight
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=200;
		intensity=50000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=15;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,0,0};
	};
	class nwge_VEELightExp1
	{
		diffuse[]={0.69999999,0.69999999,0.69999999};
		color[]={0.69999999,0.69999999,0.69999999};
		ambient[]={0.30000001,0.30000001,0.30000001,0};
		brightness=400;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_VEELightExp2
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=300;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=30;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,40,0};
	};
	class nwge_VEEBLight
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=100;
		intensity=30000;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=15;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,0,0};
	};
	class nwge_VEEBLightExp1
	{
		diffuse[]={0.69999999,0.69999999,0.69999999};
		color[]={0.69999999,0.69999999,0.69999999};
		ambient[]={0.30000001,0.30000001,0.30000001,0};
		brightness=300;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_VEEBLightExp2
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=200;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=30;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,40,0};
	};
	class nwge_VEESLightExp1
	{
		diffuse[]={0.69999999,0.69999999,0.69999999};
		color[]={0.69999999,0.69999999,0.69999999};
		ambient[]={0.30000001,0.30000001,0.30000001,0};
		brightness=400;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_VEESLightExp2
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=300;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=30;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,40,0};
	};
	class nwge_HeliLight
	{
		diffuse[]={1,0.40000001,0.15000001};
		color[]={1,0.40000001,0.15000001};
		ambient[]={0,0,0,0};
		brightness=100;
		size=1;
		intensity=10000;
		drawLight=0;
		blinking=0;
		flareMaxDistance=5000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=400;
			hardLimitEnd=1000;
		};
		position[]={0,0,0};
	};
	class nwge_HeliExpLig1
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=10;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=30;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_HeliExpLig2
	{
		diffuse[]={0.69999999,0.69999999,0.69999999};
		color[]={0.69999999,0.69999999,0.69999999};
		ambient[]={0.30000001,0.30000001,0.30000001,0};
		brightness=100;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_HeliExpLig3
	{
		diffuse[]={0.89999998,0.44999999,0.15000001};
		color[]={0.89999998,0.44999999,0.15000001};
		ambient[]={0.89999998,0.44999999,0.15000001};
		brightness=300;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=40;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_HeliSmallLight
	{
		diffuse[]={1,0.5,0.2};
		color[]={1,0.5,0.2};
		ambient[]={0,0,0,0};
		brightness=10;
		intensity=3000;
		blinking=0;
		drawLight=0;
		flareSize=0.1;
		flareMaxDistance=6500;
		useFlare=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=5;
		};
		position[]={0,0,0};
	};
	class nwge_PlanLight
	{
		diffuse[]={1,0.40000001,0.15000001};
		color[]={1,0.40000001,0.15000001};
		ambient[]={0,0,0,0};
		brightness=100;
		size=1;
		intensity=20000;
		drawLight=0;
		blinking=0;
		flareMaxDistance=5000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=600;
			hardLimitEnd=1000;
		};
		position[]={0,0,0};
	};
	class nwge_PlanExpLig1
	{
		diffuse[]={0,0,0};
		color[]={1,0.44999999,0.15000001};
		ambient[]={0.1,0.039999999,0.015};
		brightness=10;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=30;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=0;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_PlanExpLig2
	{
		diffuse[]={0.69999999,0.69999999,0.69999999};
		color[]={0.69999999,0.69999999,0.69999999};
		ambient[]={0.30000001,0.30000001,0.30000001,0};
		brightness=100;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=50;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
	class nwge_PlanExpLig3
	{
		diffuse[]={0.89999998,0.44999999,0.15000001};
		color[]={0.89999998,0.44999999,0.15000001};
		ambient[]={0.89999998,0.44999999,0.15000001};
		brightness=300;
		size=1;
		drawLight=0;
		blinking=0;
		flareSize=40;
		flareMaxDistance=5000;
		useFlare=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=0;
			hardLimitStart=1;
			hardLimitEnd=0;
		};
		position[]={0,0,0};
	};
};
class cfgMods
{
	author="Asmo";
	timepacked="1650318334";
};
