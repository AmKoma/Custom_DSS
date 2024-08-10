class CfgSoundShaders
{
    class baseCharacter_SoundShader;
    class YOURSOUND_SoundShader: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\YOURMODNAME\Data\DynamicSounds\YOUROGG",
                1
            }
        };
        volume=0.25;
    };
}

class CfgSoundSets
{
    class baseCharacter_SoundSet;
    class YOURSOUND_SoundSet: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "YOURSOUND_SoundShader"
        };
        spatial=0;
    };
}