#ifndef SOUND_H
#define SOUND_H


class Sound
{
    public:
        Sound();
        Sound(const Sound& s);
        Sound(int s);
        ~Sound();

        void operator=(const Sound& source);

        int getSound();
        void setSound (int newSound);


    protected:
        int m_sound;

        //Unité fixe : le décibel (dB)

};

#endif // SOUND_H
