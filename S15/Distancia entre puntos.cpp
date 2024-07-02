#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

struct Punto {
    float x, y, z;
};

float distancia(Punto a, Punto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

int main() {
    Punto p1, p2;

    cout << "Ingrese las coordenadas del punto 1 (x y z): ";
    cin >> p1.x >> p1.y >> p1.z;
    cout << "Ingrese las coordenadas del punto 2 (x y z): ";
    cin >> p2.x >> p2.y >> p2.z;

    cout << "Distancia entre los puntos: " << distancia(p1, p2) << endl;
    _getch();
    return 0;
}