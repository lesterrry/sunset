class Buzzer {
  public:
    Buzzer(int pin) {  // constructor
      _pin = pin;
    }

    void sound(unsigned int frequency, uint8_t duration = 0) {
      tone(_pin, frequency, duration);
    }

    void beep(uint8_t frequencyDegree) {
      unsigned int frequency = frequencyDegree * 50;
      tone(_pin, frequency, 25);
      tone(_pin, frequency - 50, 25);
    }

    void playToneA() {
      sound(300, 75);
      sound(250, 50);
      delay(50);
      sound(500, 250);
      delay(200);
      sound(300, 75);
      sound(250, 50);
      delay(50);
      sound(500, 250);
    }

    void playToneB() {
      sound(400, 200);
      delay(50);
      sound(500, 200);
      delay(50);
      sound(600, 200);
    }

  private:
    int _pin;
};
