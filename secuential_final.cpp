#include <iostream>
using namespace std;

int suma(int e1, int e2, int e3) {
    return e1 + e2 + e3;
}

double promedio(int e1, int e2, int e3) {
    double prom;
    prom = (e1 + e2 + e3) / 3.0;
    return prom;
}

int producto(int e1, int e2, int e3) {
    return e1 * e2 * e3;
}

int main() {
    int entero1, entero2, entero3;

    cout << "Ingrese el primer numero: " << endl;
    cin >> entero1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> entero2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> entero3;

    cout << "Resultado de la suma: " << suma(entero1, entero2, entero3)<< endl;
    cout << "Resultado del promedio: " << promedio(entero1, entero2, entero3) <<endl;
    cout << "Resultado del producto: " << producto(entero1, entero2, entero3) << endl;

}
