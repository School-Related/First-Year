#include <LiquidCrystal.h>
#include <string.h>

// Defining Certain notes for songs.
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978

// Defining the Basic Notes
#define SA 256
#define RE 280
#define GA 312
#define MA 346
#define PA 384
#define DHA 426
#define NI 480

// Defining the Arduino Input Pins
#define PREV_PIN 10
#define FORWARD_PIN 11
#define PLAY_PIN 9
#define ON_PIN 13
#define SWITCH_PIN 12
#define melodyPin 8

int basic_frequencies[7] = {SA, RE, GA, MA, PA, DHA, NI};

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

// Declaring Basic Variables and Booleans.
int song = 0, end = 0;
int playing = 0, pause = 1;

// List of Songs
String songs[9] = {
    "Mario Theme",
    "Mario Theme 2",
    "Frequency Sa",
    "Frequency Re",
    "Frequency Ga",
    "Frequency Ma",
    "Frequency Pa",
    "Frequency Dha",
    "Frequency Ni",
};

// Mario main theme melody
int melody[] = {
    NOTE_E7, NOTE_E7, 0, NOTE_E7,
    0, NOTE_C7, NOTE_E7, 0,
    NOTE_G7, 0, 0, 0,
    NOTE_G6, 0, 0, 0,

    NOTE_C7, 0, 0, NOTE_G6,
    0, 0, NOTE_E6, 0,
    0, NOTE_A6, 0, NOTE_B6,
    0, NOTE_AS6, NOTE_A6, 0,

    NOTE_G6, NOTE_E7, NOTE_G7,
    NOTE_A7, 0, NOTE_F7, NOTE_G7,
    0, NOTE_E7, 0, NOTE_C7,
    NOTE_D7, NOTE_B6, 0, 0,

    NOTE_C7, 0, 0, NOTE_G6,
    0, 0, NOTE_E6, 0,
    0, NOTE_A6, 0, NOTE_B6,
    0, NOTE_AS6, NOTE_A6, 0,

    NOTE_G6, NOTE_E7, NOTE_G7,
    NOTE_A7, 0, NOTE_F7, NOTE_G7,
    0, NOTE_E7, 0, NOTE_C7,
    NOTE_D7, NOTE_B6, 0, 0};

// Mario main them tempo
int tempo[] = {
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,

    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,

    9,
    9,
    9,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,

    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,

    9,
    9,
    9,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
    12,
};

// Mario Theme melody
int mario_theme_2_melody[] = {
    NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
    NOTE_AS3, NOTE_AS4, 0,
    0,
    NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
    NOTE_AS3, NOTE_AS4, 0,
    0,
    NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
    NOTE_DS3, NOTE_DS4, 0,
    0,
    NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
    NOTE_DS3, NOTE_DS4, 0,
    0, NOTE_DS4, NOTE_CS4, NOTE_D4,
    NOTE_CS4, NOTE_DS4,
    NOTE_DS4, NOTE_GS3,
    NOTE_G3, NOTE_CS4,
    NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
    NOTE_GS4, NOTE_DS4, NOTE_B3,
    NOTE_AS3, NOTE_A3, NOTE_GS3,
    0, 0, 0};

// Underwolrd tempo
int mario_theme_2_tempo[] = {
    12, 12, 12, 12,
    12, 12, 6,
    3,
    12, 12, 12, 12,
    12, 12, 6,
    3,
    12, 12, 12, 12,
    12, 12, 6,
    3,
    12, 12, 12, 12,
    12, 12, 6,
    6, 18, 18, 18,
    6, 6,
    6, 6,
    6, 6,
    18, 18, 18, 18, 18, 18,
    10, 10, 10,
    10, 10, 10,
    3, 3, 3};

void setup()
{
    Serial.begin(9600);

    // PRINT WELCOME TO MUSIC PLAYER on the LCD Screen

    lcd.begin(16, 2);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("WELCOME TO MUSIC");
    lcd.setCursor(5, 1);
    lcd.print("PLAYER");

    delay(3000);

    // PRINT the First Song
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("SELECT SONG");
    lcd.setCursor(0, 1);
    lcd.print("<");
    lcd.setCursor(15, 1);
    lcd.print(">");
    lcd.setCursor(2, 1);
    lcd.print(songs[song]);

    // Outputs
    pinMode(melodyPin, OUTPUT); // buzzer
    pinMode(ON_PIN, OUTPUT);    // LED

    pinMode(SWITCH_PIN, INPUT);  // main switch
    pinMode(PLAY_PIN, INPUT);    // Play/Pause
    pinMode(PREV_PIN, INPUT);    // Previous song
    pinMode(FORWARD_PIN, INPUT); // Next song
}

void loop()
{
    // Check if The Main switch is turned on, only then we do anything.
    if (digitalRead(SWITCH_PIN) == 1)
    {
        // Switch on the LED indicating that we have turned on.
        digitalWrite(ON_PIN, HIGH);

        // If user presses forward, change song and show it.
        if (digitalRead(FORWARD_PIN) == 1)
        {
            if (song == 8)
                song = -1; // one less so that when it adds, you get back to a legal value
            song++;
            lcd.clear();
            lcd.setCursor(3, 0);
            lcd.print("SELECT SONG");
            lcd.setCursor(0, 1);
            lcd.print("<");
            lcd.setCursor(15, 1);
            lcd.print(">");
            lcd.setCursor(2, 1);
            lcd.print(songs[song]);
        }

        // If user presses Previous, change song and show it.
        if (digitalRead(PREV_PIN) == 1)
        {
            if (song == 0)
                song = 9; // one more so that when it subtracts, you get back to a legal value
            song--;
            lcd.clear();
            lcd.setCursor(3, 0);
            lcd.print("SELECT SONG");
            lcd.setCursor(0, 1);
            lcd.print("<");
            lcd.setCursor(15, 1);
            lcd.print(">");
            lcd.setCursor(2, 1);
            lcd.print(songs[song]);
        }

        // If user presses play, then play the song
        if ((digitalRead(PLAY_PIN) == 1) && (playing == 0) && (pause = 1))
        {
            Serial.println("you pressed to play");
            if (song > 1)
            {
                delay(100);
                tone(melodyPin, basic_frequencies[song - 2], 100);
            }
            else
            {
                delay(100);
                sing(song);
            }
        }
        end = 0;
    }

    // If the main switch is off, then turn of the LED and Print Thank You.
    else if ((digitalRead(SWITCH_PIN) == 0) && (end == 0))
    {
        digitalWrite(ON_PIN, LOW);
        Serial.println("Thank you!");
        end = 1;
    }
}
void sing(int s)
{
    // iterate over the notes of the melody:
    song = s;
    if (song == 1)
    {
        Serial.println(" 'Mario Theme 2'");
        int size = sizeof(mario_theme_2_melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++)
        {
            // if user presses Pause at any time, then break the loop and pause playing.
            if (digitalRead(PLAY_PIN) == 1)
            {
                playing = 0;
                pause = 1;
                delay(1000);
                break;
            }
            // to calculate the note duration, take one second
            // divided by the note type.
            // e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
            int noteDuration = 1000 / mario_theme_2_tempo[thisNote];

            buzz(melodyPin, mario_theme_2_melody[thisNote], noteDuration);

            // to distinguish the notes, set a minimum time between them.
            // the note's duration + 30% seems to work well:
            int pauseBetweenNotes = noteDuration * 1.30;
            delay(pauseBetweenNotes);

            // stop the tone playing:
            buzz(melodyPin, 0, noteDuration);
        }
    }
    else if (song == 0)
    {

        Serial.println(" 'Mario Theme'");
        int size = sizeof(melody) / sizeof(int);
        for (int thisNote = 0; thisNote < size; thisNote++)
        {
            if (digitalRead(PLAY_PIN) == 1)
            {
                playing = 0;
                pause = 1;
                delay(1000);
                break;
            }
            // to calculate the note duration, take one second
            // divided by the note type.
            // e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
            int noteDuration = 1000 / tempo[thisNote];

            buzz(melodyPin, melody[thisNote], noteDuration);

            // to distinguish the notes, set a minimum time between them.
            // the note's duration + 30% seems to work well:
            int pauseBetweenNotes = noteDuration * 1.30;
            delay(pauseBetweenNotes);

            // stop the tone playing:
            buzz(melodyPin, 0, noteDuration);
        }
    }
}

void buzz(int targetPin, long frequency, long length)
{
    long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
    // 1 second's worth of microseconds, divided by the frequency, then split in half since
    // there are two phases to each cycle
    long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
    // multiply frequency, which is really cycles per second, by the number of seconds to
    // get the total number of cycles to produce
    for (long i = 0; i < numCycles; i++)
    {                                  // for the calculated length of time...
        digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
        delayMicroseconds(delayValue); // wait for the calculated delay value
        digitalWrite(targetPin, LOW);  // write the buzzer pin low to pull back the diaphram
        delayMicroseconds(delayValue); // wait again or the calculated delay value
    }
}
