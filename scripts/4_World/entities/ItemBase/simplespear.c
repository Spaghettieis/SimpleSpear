class seis_simplespear : Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionClapBearTrapWithThisItem);
		
	}
};