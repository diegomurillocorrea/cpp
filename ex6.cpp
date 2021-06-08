#include <iostream>
#include <stdlib.h>

using namespace std;

/*

6. Crear un programa que permita recibir una fecha por medio de tres entradas,
por ejemplo 8, 10 y 1946 y que por medio de una funcion imprima la fecha en
formato 8/10/1946

*/

void fecha ( string dia, string mes, string año );

int main(){
    // Declaración de variables
    string dia, mes, año;

    // Entrada de datos
    cout << "Ingrese una fecha: ";
    cin >> dia;

    cout << "Ingrese un mes: ";
    cin >> mes;

    cout << "Ingrese un año: ";
    cin >> año;

    // Procesos
    cout << "Ingresaste como día: " << dia << endl;
    cout << "Ingresaste como mes: " << mes << endl;
    cout << "Ingresaste como año: " << año << endl;
    cout << "La fecha indicada es: ";
    fecha( dia, mes, año );
    cout << endl;

    cin.ignore();
    cin.get();
    return 0;
}

void fecha ( string dia, string mes, string año ) {
    cout << dia << " / " << mes << " / " << año;
};