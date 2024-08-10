# Create Your Own Sounds with the Dynamic Sound System Mod

**Note:** Prior knowledge of building mods is required. This guide will only explain what to do with the files and how to set up your custom sounds.

## Step 1: Download and Configure `config.cpp`

1. **Download `config.cpp`:** Start by downloading the `config.cpp` file.
2. **Add SoundShader and SoundSets:** Insert your `SoundShader` and `SoundSets` into the file.

## Step 2: Download `AmbientHandler.c`

1. **Download `AmbientHandler.c`:** Get the `AmbientHandler.c` file for further configuration.

## Step 3: Register Your Sounds

Once you have registered your sounds in `config.cpp`, you can add your `SoundSets`:

```cpp
m_AmbientAreas.Insert(new AmbientArea("AREA NAME/DESCRIPTION", "1000 0 1000", "1000 0 1000", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_04_SoundSet"}));
```

This line allows you to register music for specific areas. For example, you can set up music to play only when you're in Tisy. You can also specify whether the music plays during the day, night, or both.

## Step 4: Add Global Ambient Music
To add global ambient music that plays when the player is not in any ambient area, use the following configuration:

```cpp
daySounds = {"YOUR_MUSIC_SOUNDSETS", "YOUR_MUSIC_SOUNDSETS"};
nightSounds = {"YOUR_MUSIC_SOUNDSETS", "YOUR_MUSIC_SOUNDSETS"};

DaySoundSets.InsertAll(daySounds);
NightSoundSets.InsertAll(nightSounds);
```

Enjoy Your Custom Sounds!
