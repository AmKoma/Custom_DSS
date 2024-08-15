modded class AmbientHandler
{
    override AmbientHandler(SoundHandler soundHandler)
    {
        super.AmbientHandler(soundHandler);

        //Use Corner Top-Left and Corner Bottom-Right Coords
        m_AmbientAreas.Insert(new AmbientArea("AREA NAME/DESCRIPTION", "1000 0 1000", "1000 0 1000", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_04_SoundSet"}));

        //Global sounds
        daySounds = {"YOUR_MUSIC_SOUNDSETS", "YOUR_MUSIC_SOUNDSETS"};
        nightSounds = {"YOUR_MUSIC_SOUNDSETS", "YOUR_MUSIC_SOUNDSETS"};

        DaySoundSets.InsertAll(daySounds);
        NightSoundSets.InsertAll(nightSounds);
    }
}
