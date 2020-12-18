#ifndef TIME_MNP
#define TIME_MNP

#define horasDia 24;
#define minutosHora 60;
#define segundosMinuto 60;

#include <iostream>

using namespace std;

class Tempo{
    private:
      int dia, hora, min, seg;

    public:
      void consistencia();
};

#endif