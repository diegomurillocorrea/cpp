#include <iostream>
#include <stdlib.h>

using namespace std;

/*

3. Escribir una funcion que reciba como parámetro por referencia
una cadena de caracteres y que la retorne de forma inversa,
por ejemplo "hola" se convertiria en "aloh";

*/

void reverse_string ( string cadena_de_texto );

int main(){
    string cadena_a_ingresar;

    cout << "Ingresa cualquer cadena de texto:" << endl;
    cin >> cadena_a_ingresar;

    system( "clear" );
    cout << "Gracias a la funcion reverse(), la cadena que ingresaste queda así:" << endl << endl;
    reverse_string( cadena_a_ingresar );
    cout << endl;

    cin.ignore();
    cin.get();
    return 0;
}

void reverse_string ( string cadena_de_texto ) {
    int length = cadena_de_texto.length();

    char copia[ length ];
    for ( int i = 0 ; i < length ; i++ ) {
        copia[ i ] = cadena_de_texto[ i ];
    }

    char nueva_cadena_de_texto[ length ];
    for ( int i = 0 ; i < length ; i++ ) {
        nueva_cadena_de_texto[ i ] = copia[ length - ( i + 1 )  ];
    }

    for ( int i = 0 ; i < length ; i++ ) {
        cout << nueva_cadena_de_texto[ i ];
    }
};