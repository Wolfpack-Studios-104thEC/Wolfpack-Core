////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Wed Apr 24 11:48:44 2024 : 'file' last modified on Wed Apr 17 19:43:44 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class WPEC_Core
	{
		author = "Wolfpack Studios";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F_Enoch_Loadorder","CBA_MAIN"};
		requiredversion = 0.1;
	};
};
class CfgFactionClasses
{
	class WPEC_Category_EclipseCompany
	{
		displayName = "104th Eclipse Company";
		priority = 2;
		side = 1;
	};
};
class CfgEditorCategories
{
	class WPEC_categoryEmpty
	{
		displayName = "104th Auxiliary Assets";
	};
};
class CfgEditorSubcategories
{
	class WPEC_Subcategory_Trooper
	{
		displayName = "104th EC Trooper";
	};
	class WPEC_subcategoryAircraftRotary
	{
		displayName = "104th Aircraft (Rotary-Wing)";
	};
	class WPEC_Subcategory_Gonk
	{
		displayName = "Gonk Droids";
	};
	class WPEC_Subcategory_Aries
	{
		displayName = "104th Aries";
	};
};
class CfgFunctions
{
	class WPEC
	{
		tag = "WPEC";
		class ShieldGrenade104th
		{
			file = "WPEC\WPEC_Weapons\Functions";
			class setupEH104th
			{
				postInit = 1;
			};
			class onShieldGrenade104th{};
		};
	};
	class WPEC_Weapon
	{
		file = "\WPEC\WPEC_Weapons\Functions";
		class scripts
		{
			class onHit{};
			class onHitStun{};
			class onHitConcussion{};
		};
	};
};
class Extended_HitPart_EventHandlers
{
	class CAManBase
	{
		hitPart = "(_this select 0) call WPEC_Weapon_fnc_onHit";
	};
};
