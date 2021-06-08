#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*

4. Crear un programa que mediante funciones calcule el área de un círculo.

*/

float area_de_un_circulo ( int radio, float resultado );

int main(){
    int radio = 0;
    float resultado = 0;

    cout << "Ingrese: ¿Cuánto mide el radio del círculo?" << endl;
    cin >> radio;

    float resultado_area_circulo = area_de_un_circulo( radio, resultado );

    cout << "El área del círculo es: " << resultado_area_circulo << "." << endl;

    cin.ignore();
    cin.get();
    return 0;
}

float area_de_un_circulo ( int radio, float resultado ) {
    const float pi = 3.1416;
    resultado = pi * pow( radio, 2 );
    return resultado;
}