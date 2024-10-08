class Buzzer {
  public:
    Buzzer(int pin, bool active = true) {
      _pin = pin;
      _active = active;
    }

    void setActive(bool active) {
      _active = active;
    }

    void sound(unsigned int frequency, uint8_t duration = 0) {
      if (!_active) return;
      tone(_pin, frequency, duration);
    }

    void beep(uint8_t frequencyDegree, uint8_t toneDuration = 25, bool invert = false) {
      if (!_active) return;
      unsigned int frequency = frequencyDegree * 50;
      tone(_pin, frequency, toneDuration);
      delay(toneDuration - 25);
      tone(_pin, frequency + (invert ? -50 : 50), toneDuration);
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
    bool _active;
};

