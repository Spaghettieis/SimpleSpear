class CfgPatches
{
	class seis_simplespear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Melee_Blade"
		};
	};
};
class CfgMods
{
	class seis_simplespear
	{
		dir = "SimpleSpear";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SimpleSpear";
		credits = "Spaghettieis";
		author = "Spaghettieis";
		authorID = "76561199363100280";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"SimpleSpear\Scripts\4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class Spear;
	class seis_simplespear: Spear
	{
		scope=2;
		displayName="Medieval spear";
		descriptionShort="Faithful replica of a medieval spear. Stick em with the pointy end.";
		model="\SimpleSpear\data\seis_simplespear.p3d";
		debug_ItemCategory=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		rotationFlags=17;
		itemSize[]={2,8};
		weight=1700;
		itemBehaviour=2;
		lootTag[]=
		{
			"Farm"
		};
		lootCategory="Tools";
		openItemSpillRange[]={30,60};
		soundImpactType="metal";
		isMeleeWeapon=1;
		suicideAnim="spear";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_4";
				range=2;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_4";
				range=2.5;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_4";
				range=4.0999999;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SimpleSpear\data\seis_simplespear.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SimpleSpear\data\seis_simplespear.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SimpleSpear\data\seis_simplespear_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SimpleSpear\data\seis_simplespear_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SimpleSpear\data\seis_simplespear_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
