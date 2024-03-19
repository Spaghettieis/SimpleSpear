modded class ModItemRegisterCallbacks
{
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
        super.RegisterTwoHanded(pType, pBehavior);
        	pType.AddItemInHandsProfileIK("seis_simplespear",
		"dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi",
 		pBehavior,
		"DZ/anims/anm/player/ik/two_handed/advanced_spear.anm");

    	};
};