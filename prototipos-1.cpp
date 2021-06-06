#include <iostream>
#include <stdlib.h>

using namespace std;

/*
1. Crear un programa que utilice una función para poder hacer
una conversión entre grados centígrados ( ingresados por el teclado )
a grados Fahrenheit. La formula de conversión es:

F = ( 9 / 5 ) * C + 32

*/

// Declaración de function ( prototipo )
float grados_C_grados_F( float C );

int main(){

    // Declaración de variables
    float grados_Centigrados = 0;

    // Entrada de datos
    cout << "Ingrese los grados centígrados que desea convertir: ";
    cin >> grados_Centigrados;

    // Declaración de variables con funcion
    float grados_F = grados_C_grados_F( grados_Centigrados );

    system( "clear" );

    // Salida de datos
    cout << "Los " << grados_Centigrados << " grados centígrados ingresados son: " << grados_F << " grados fahrenheit." << endl;

    cin.ignore();
    cin.get();
    return 0;
}

// Definición de function ( prototipo )
float grados_C_grados_F( float C ) {
    float result = ( 9 / 5 ) * C + 32;
    return result;
};