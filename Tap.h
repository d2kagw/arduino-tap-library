#ifndef _hTap
#define _hTap

  #import "Arduino.h"

  class Tap
  {
    public:
      Tap(int pin);
      boolean isHit();
    private:
      int _pin;
      boolean _asBeenHit;
  };

#endif
