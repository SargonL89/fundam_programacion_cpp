#include <iostream>
using namespace std;

int main() {
    int entero;
    cin >> entero; 

    if (entero > 0 && entero % 2 == 0) {
        cout << "Número positivo y par" << endl;
    } else if (entero > 0 && entero % 2 == 1) {
        cout << "Número positivo y impar" << endl;
    } else if (entero < 0) {
        cout << "Número negativo" << endl;
    } else {
        cout << "Cero" << endl;
    }

    return 0;
}