#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    // Modulo 1: Longitud circunferencia
    const double pi=3.1415;
    //Variables de entrada y salida
    double radio, longitud;
    cout<<"Introducir el valor del radio:"<<endl;
    cin >> radio;
    longitud=2*pi*radio;
    cout<<"La longitud de la circunferencia es: "<<longitud<<endl;
    return 0;
}