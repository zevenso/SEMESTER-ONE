#include <iostream>
#include <conio.h>

using namespace std;

struct Persona {
    int aprobacion;
    int edad;
    char economia;
};


int main() {
    srand(time(0));

    int N;
    do {
        cout << "Ingrese el numero de personas encuestadas (max 100): ";
        cin >> N;
    } while (N > 100 || N <= 0);


    Persona encuestados[100];

    for (int i = 0; i < N; ++i) {
        encuestados[i].aprobacion = rand() % 5 + 1;
        encuestados[i].edad = rand() % 83 + 18; 
        char niveleseconomicos[] = { 'A', 'B', 'C', 'D' };
        encuestados[i].economia = niveleseconomicos[rand() % 4];
    }
 
    int economicoA = 0;
    int joven = 100;

    for (int i = 0; i < N; ++i) {
        if (encuestados[i].economia == 'A') economicoA++;
        if (encuestados[i].edad < joven) joven = encuestados[i].edad;
    }
    int uno = 0, dos = 0, tres = 0, cuatro = 0, cinco = 0;

    for (int i = 0; i < N; i++) {
    
        if (encuestados[i].aprobacion == 1) uno++;
        if (encuestados[i].aprobacion == 2) dos++;
        if (encuestados[i].aprobacion == 3) tres++;
        if (encuestados[i].aprobacion == 4) cuatro++;
        if (encuestados[i].aprobacion == 5) cinco++;
        
    }

    cout << endl << "Cantidad de personas encuestadas del nivel socio economico A: " << economicoA;
    cout << endl << "La persona mas joven encuestada tiene " << joven << " anios";


    _getch();
    return 0;
}