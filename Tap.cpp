#import "Arduino.h"
#import "Tap.h"

Tap::Tap(int pin) {
  pinMode(pin, INPUT);
  _pin = pin;
  _asBeenHit = false;
}

boolean Tap::isHit() {
  if (digitalRead(_pin) == HIGH && _asBeenHit == false) {
    _asBeenHit = true;
    return true;
  } else if (digitalRead(_pin) == LOW && _asBeenHit) {
    _asBeenHit = false;
    return false;
  } else {
    return false;
  }
}
