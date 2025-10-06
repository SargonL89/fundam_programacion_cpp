#include <iostream>
using namespace std;

int main() {
    int datos[8] = {1, 3, 6, 8, 5, 7, 2, 4};
    int cantidad_impares = 0;

    for (int i = 0; i < 8; i++) {
        if (datos[i] % 2 == 1) {
            cantidad_impares++;
            datos[i] = datos[i] * 3;
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << datos[i] << " ";
    }
    cout << endl;

    cout << "Cantidad de impares: " << cantidad_impares << endl;
}