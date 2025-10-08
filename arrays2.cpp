#include <iostream>
using namespace std;

double promedio(int enteros[], int quantity) {
    int suma = 0;
    double prom = 0.0;

    for (int i=0;i<quantity;i++){
        suma += enteros[i];
    }

    prom = suma / double(quantity);
    return prom;
}

int menor(int enteros[], int limit){
    int menor = 0;

    for (int i=0;i<limit;i++){
        if (enteros[i]<menor) {
            menor = enteros[i];
        }
    }

    return menor;
}

int mayor(int enteros[], int limit){
    int mayor = 0;

    for (int i=0;i<limit;i++){
        if (enteros[i]>mayor) {
            mayor = enteros[i];
        }
    }

    return mayor;
}

int main() {
    int enteros[15] = {7, 8, 2, 10, 12, 4, 56, 37, 3, 8, 6, 9, 0, 11, 15};
    int mayor_num, menor_num;
    double prom;

    mayor_num = mayor(enteros, 15);
    menor_num = menor(enteros, 15);
    prom = promedio(enteros, 15);

    cout << "El mayor número es: " << mayor_num << endl;
    cout << "El menor número es: " << menor_num << endl;
    cout << "El promedio es: " << prom << endl;
}