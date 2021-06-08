#include <iostream>
#include <stdlib.h>

using namespace std;

/*

2. Escribir un programa que solicite al usuario ingresar un carácter
y que sitúe el carácter en el centro de la pantalla. El usuario podrá
a continuación desplazar el carácter pulsando las letras:
arriba -> ( A ),
abajo -> ( B ),
izquierda -> ( I ),
derecha -> ( D ),
y para finalizar la letra -> ( F )

*/

// Declaración de funciones ( prototipos )
void arriba ( char & caracter );
void abajo ( char & caracter );
void izquierda ( char & caracter );
void derecha ( char & caracter );

int main(){
    // Declaración de variables
    char caracter;
    char letter;
    bool bandera = true;

    // Entrada de datos
    cout << "Ingrese un solo caracter: ";
    cin >> caracter;

    // Salida de datos
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << caracter << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    do {
        cout << "\n¿Qué deseas hacer?" << endl;
        cout << "A. Desplazar el caracter hacia arriba" << endl;
        cout << "B. Desplazar el caracter hacia abajo" << endl;
        cout << "I. Desplazar el caracter hacia la izquierda" << endl;
        cout << "D. Desplazar el caracter hacia la derecha" << endl;
        cout << "F. Finalizar proceso" << endl;
        cin >> letter;

        if ( letter == 'a' || letter == 'A' ) {
            bandera = false;
            arriba( caracter );
        } else if ( letter == 'b' || letter == 'B' ) {
            bandera = false;
            abajo( caracter );
        } else if ( letter == 'i' || letter == 'I' ) {
            bandera = false;
            izquierda( caracter );
        } else if ( letter == 'd' || letter == 'D' ) {
            bandera = false;
            derecha( caracter );
        } else {
            bandera = true;
            cout << "El valor es incorrecto." << endl;
        }

    } while ( !bandera );

    system( "clear" );

    cout << "Gracias por participar" << endl;

    cin.ignore();
    cin.get();
    return 0;
}

void arriba ( char & caracter ) {
    system( "clear" );
    cout << "\t\t\t\t\t\t\t" << caracter << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void abajo ( char & caracter ) {
    system( "clear" );
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << caracter;
}

void izquierda ( char & caracter ) {
    system( "clear" );
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << caracter << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void derecha ( char & caracter ) {
    system( "clear" );
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << caracter << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}