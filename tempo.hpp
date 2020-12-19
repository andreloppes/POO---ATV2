#ifndef TIME_MNP
#define TIME_MNP

const int horasDia = 24;
const int minutosHora = 60;
const int segundosMinuto = 60;

#include <iostream>

class Tempo{
    private:
      int dia, hora, min, seg;

    public:
      void consistencia();
      void readTime();
      void printTime();
      void secIncrement();
      void secDecrement();
};

#endif
