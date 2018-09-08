using UnrealBuildTool;

public class SuperKnockoutTarget : TargetRules
{
	public SuperKnockoutTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("SuperKnockout");
	}
}
