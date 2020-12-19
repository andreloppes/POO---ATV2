#include "tempo.hpp"
using namespace std;

void Tempo::consistencia(){
    int aux;

    //Condições para os dias
    if(dia < 0){
        cout << "O VALOR RELATIVO AO DIA NÃO É VÁLIDO";
        exit(0);
    }

    //Condições para as horas
    if (hora >= horasDia){
        aux = (int) (hora / horasDia);
        dia += aux;
        min = min - (horasDia * aux);
    }

    if(hora < 0){
        aux = (int) (hora / horasDia);
        if (hora % horasDia != 0){
            aux -= 1;
            hora = horasDia + (hora % horasDia);
        }else{
            hora = 0;
        }
        dia += aux;
    }

    //Condições para os minutos
    if (min >= minutosHora){
        aux= (int) (min / minutosHora);
        hora += aux;
        min -= minutosHora * aux;
    }

    if(min < 0){
        aux = (int) (min / minutosHora);
        if (min % minutosHora != 0){
            aux -= 1;
            min = minutosHora + (min % minutosHora);
        }else{
            min = 0;
        }
        hora += aux;
    }

    //Condições para os segundos
    if (seg >= segundosMinuto){
        aux= (int) (seg / segundosMinuto);
        min += aux;
        seg -= minutosHora * aux;
    }

    if(seg < 0){
        aux = (int) (seg / segundosMinuto);
        if (seg % segundosMinuto != 0){
            aux -= 1;
            seg = segundosMinuto + (seg % segundosMinuto);
        }else{
            seg = 0;
        }
        min += aux;

    }
}

void Tempo::readTime(){
    char ans;

        cout << "~Leitura dos dados~" << endl;

        cout << "Digite partir de qual membro você deseja começar: |d| dias, |h| horas, |m| minutos, |s|segundos" << endl;
        cin >> ans;
        toupper(ans);
        
        switch (ans)
        {
        case 'D':
        cout << "Digite o dia: " << endl;
        cin >> dia;
        cout << "Digite as horas: " << endl;
        cin >> hora;
        cout << "Digite os minutos: " << endl;
        cin >> min;
        cout << "Digite os segundos: " << endl;
        cin >> seg;
            break;

        case 'H':
        cout << "Digite as horas: " << endl;
        cin >> hora;
        cout << "Digite os minutos: " << endl;
        cin >> min;
        cout << "Digite os segundos: " << endl;
        cin >> seg;
            break;
        
        case 'M':
        cout << "Digite os minutos: " << endl;
        cin >> min;
        cout << "Digite os segundos: " << endl;
        cin >> seg;
            break;
        
        case 'S':
        cout << "Digite os segundos: " << endl;
        cin >> seg;
            break;
        
        default:
        cout << "Opção inválida" << endl;
            break;
        }

        consistencia();
}

void Tempo::printTime(){
    cout << "Dia: " << dia << ", Horas: " << hora << ", Minutos: " << min << ", Segundos: " << seg << endl;
}

void Tempo::secDecrement(){
    seg--;
    consistencia();
}

void Tempo::secIncrement(){
    seg++;
    consistencia();
}
