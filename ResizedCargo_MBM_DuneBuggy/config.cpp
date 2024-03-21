class CfgPatches
{
    class ResizedCargo_MBM_DuneBuggy
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={
            "DZ_Data",
            "DZ_Scripts",
            "DZ_Vehicles_Wheeled",
			"MBM_DuneBuggy"
        };
    };
};

class CfgMods
{
	class ResizedCargo_MBM_DuneBuggy
    {
        dir="ResizedCargo_MBM_DuneBuggy";
        picture="";
        action="";
        hideName=1;
        hidePicture=1;
        name="ResizedCargo: MBM Dune buggy";
        credits="mebrad";
        author="Spaghettieis";
        authorID="76561199363100280";
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]=
        {
            "World"
        };
	};
};

// Start ResizedCargo_MBM_DuneBuggy mod

class CfgVehicles
{    
	class Inventory_Base;
    class Container_Base;
    class WorldContainer_Base;
    class CarScript;
	class MBM_DuneBuggy: CarScript
	{
		class Cargo
		{
			itemsCargoSize[]={10,15};
		};
	};
	
};

// END ResizedCargo_MBM_DuneBuggy mod

