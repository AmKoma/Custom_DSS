modded class AmbientHandler
{
    void AmbientHandler(SoundHandler soundHandler)
    {
        m_SoundHandler = soundHandler;
        SetAmbientSoundCooldown(DayZGame.GetDSSProfileVal(EDSSProfileOptions.AMBIENT_INTERVAL));

        m_AmbientAreas = new array<ref AmbientArea>;


        //Use Corner Top-Left and Corner Bottom-Right Coords
        // m_AmbientAreas.Insert(new AmbientArea("AREA NAME/DESCRIPTION", "1000 0 1000", "1000 0 1000", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_04_SoundSet"}));
        m_AmbientAreas.Insert(new AmbientArea("Tisy", "1259 0 14747", "2506 0 13885", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_07_SoundSet"}));
        m_AmbientAreas.Insert(new AmbientArea("NWAF", "3145 0 11857", "5290 0 9438", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_08_SoundSet", "DS_AmbientMusic_10_SoundSet"}));

        //Global sounds
        ref array<string> daySounds = {"Test_SoundSet"};
        ref array<string> nightSounds = {"Test_SoundSet"};

        //If you want to remove the original global music, uncomment the following two lines
        // DaySoundSets.Clear();
        // DaySoundSets.Clear();
        
        DaySoundSets.InsertAll(daySounds);
        NightSoundSets.InsertAll(nightSounds);
    }
}