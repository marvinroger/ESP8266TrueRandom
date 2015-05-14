/**
 * TrueRandom - A true random number generator for Arduino.
 *
 * Copyright (c) 2010 Peter Knight, Tinker.it! All rights reserved.
 */

#ifndef TrueRandom_h
#define TrueRandom_h

#include <inttypes.h>
class TrueRandomClass
{
  public:
    int rand();
    long random();
    long random(long howBig);
    long random(long howsmall, long how);
    int randomBit(void);
    char randomByte(void);
    void memfill(char* location, int size);
    void mac(uint8_t* macLocation);
    void uuid(uint8_t* uuidLocation);
  private:
    int randomBitRaw(void);
    int randomBitRaw2(void);
};
extern TrueRandomClass TrueRandom;
#endif
