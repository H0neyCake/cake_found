class CfgPatches
{
class cake_found
{
	units[] = {};
	weapons[] = {};
	requiredVersion = 0.1;
	requiredAddons[] = {};
};
};

class CfgVehicles {	
class Static;
class cake_found : Static {
	scope = 2;
	model = "\cake_found\found_main.p3d";
	displayName = "found_main";
	faction = "Empty";
	vehicleClass = "Small_items";
};
class cake_ramp : Static {
	scope = 2;
	model = "\cake_found\found_ramp.p3d";
	displayName = "found_ramp";
	faction = "Empty";
	vehicleClass = "Small_items";
};
class cake_ramp2 : Static {
	scope = 2;
	model = "\cake_found\found_ramp2.p3d";
	displayName = "found_ramp2";
	faction = "Empty";
	vehicleClass = "Small_items";
};
};