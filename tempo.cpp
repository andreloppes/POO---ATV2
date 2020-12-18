#include "tempo.hpp"

void Tempo::consistencia(){
    int aux;

    //Condições para os dias
    if(dia < 0){
        cout << "O VALOR RELATIVO AO DIA NÃO É VÁLIDO";
        exit(0);
    }

    //Condições para as horas
    if (hora >= horasDia){
        aux = hora / horasDia;
        dia += aux;
        min -= horasDia * aux;
    }

    if(hora < 0){

    }

    //Condições para os minutos
    if (min >= minutosHora){
        aux = min / minutosHora;
        hora += aux;
        min -= minutosHora * aux;
    }

    if(min < 0){

    }

    //Condições para os segundos
    if (seg >= segundosMinuto){
        aux = seg / segundosMinuto;
        min += aux;
        seg -= minutosHora * aux;
    }

    if(seg < 0){

    }
}