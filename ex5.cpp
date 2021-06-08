#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*

5. Crear un programa que mediante funciones permita resolver ecuaciones
de tipo ax^2 + bx + c = 0

*/

// Definición de funcion
float funcion_cuadratica1 ( int a, int b, int c );
float funcion_cuadratica2 ( int a, int b, int c );

int main(){

    // Declaración de variables
    int a;
    int b;
    int c;
    float resultado1;
    float resultado2;

    // Entrada de datos
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    // Procesos
    float valor_x1 = funcion_cuadratica1( a, b, c );
    float valor_x2 = funcion_cuadratica2( a, b, c );

    // Salida de datos
    cout << "El valor de x1 es: " << valor_x1 << endl;
    cout << "El valor de x2 es: " << valor_x2 << endl;

    cin.ignore();
    cin.get();
    return 0;
}

float funcion_cuadratica1 ( int a, int b, int c ) {
    float resultado1;
    resultado1 = ( - b + sqrt( pow( b, 2 ) - 4 * a * c ) ) / ( 2 * a );
    return resultado1;
};

float funcion_cuadratica2 ( int a, int b, int c ) {
    float resultado2;
    resultado2 = ( - b - sqrt( pow( b, 2 ) - 4 * a * c ) ) / ( 2 * a );
    return resultado2;
};