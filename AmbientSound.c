modded class AmbientHandler
{
    override AmbientHandler(SoundHandler soundHandler)
    {
        super.AmbientHandler(soundHandler);

        //Use CornerLeft and BottomRight Coords
        m_AmbientAreas.Insert(new AmbientArea("AREA NAME/DESCRIPTION", "1000 0 1000", "1000 0 1000", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_04_SoundSet"}));

        daySounds = {"YOUR_MUSIC_SOUNDSETS", "YOUR_MUSIC_SOUNDSETS"};
        nightSounds = {"YOUR_MUSIC_SOUNDSETS", "YOUR_MUSIC_SOUNDSETS"};

        DaySoundSets.InsertAll(daySounds);
        NightSoundSets.InsertAll(nightSounds);
    }
}