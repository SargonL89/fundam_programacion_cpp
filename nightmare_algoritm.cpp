#include <iostream>
using namespace std;

//determinar e imprimir un mensaje indicando el nombre del arreglo que contenga la mayor cantidad de elementos mayores comparando elemento a elemento los arreglos

int main(){
    int t;
    int cant = 0;
    int elem;
    int count1 = 0;
    int count2 = 0;

    cout << "Ingrese el tamaño t de los arreglos a utilizar" << endl;
    cin >> t;

    int array1[t], array2[t];

    cout << "Ingrese los " << t << " elementos del array 1, recuerde Enteros PARES mayores iguales 0 y menores iguales a 50." << endl;
    while (cant < t) {
        cin >> elem;
        if (elem >= 0 && elem <= 50 && elem % 2 == 0) {
            array1[cant] = elem;
            cant++;
            if (cant < t)
                cout << "Ingrese los " << t << " elementos del array 1, recuerde Enteros PARES mayores iguales 0 y menores iguales a 50." << endl;
        } else {
            cout << "Error RE Ingrese elemento del array 1, recuerde Enteros PARES mayores iguales 0 y menores iguales a 50." << endl;
        }
    }

    cant = 0;
    cout << "Ingrese los " << t << " elementos del array 2, recuerde Enteros PARES mayores iguales 0 y menores iguales a 50." << endl;
    while (cant < t) {
        cin >> elem;
        if (elem >= 0 && elem <= 50 && elem % 2 == 0) {
            array2[cant] = elem;
            cant++;
            if (cant < t)
                cout << "Ingrese los " << t << " elementos del array 2, recuerde Enteros PARES mayores iguales 0 y menores iguales a 50." << endl;
        } else {
            cout << "Error RE Ingrese elemento del array 2, recuerde Enteros PARES mayores iguales 0 y menores iguales a 50." << endl;
        }
    }

    for (int i = 0; i < t; i++) {
        if (array1[i] > array2[i])
            count1++;
        else if (array2[i] > array1[i])
            count2++;
    }

    if (count1 > count2) {
        cout << "El arreglo con mayor cantidad de elementos mayores es array1" << endl;
    } else if (count2 > count1) {
        cout << "El arreglo con mayor cantidad de elementos mayores es array2" << endl;
    } else {
        cout << "EMPATE" << endl;
    }
}