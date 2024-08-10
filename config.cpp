class CfgPatches
{
    class YOURMODNAME
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgMods
{
    class YOURMODNAME
    {
        dir = "YOURMODNAME";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "YOURMODNAME";
        credits = "YOURNAME";
        author = "YOURNAME";
        authorID = "YOURSTEAMID";
        version = "1.0";
        extra = 0;
        type = "mod";

        dependencies[] = {"Mission"};

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"YOURMODNAME/scripts/4_World"};
            };
        };
    };
};