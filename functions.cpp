// Incluyendo funciones en C++

#include <iostream>
using namespace std;

void mostrarMayor(int a, int b) {
    if (a != b) {
        if (a > b) {
            cout << a << " es mayor que " << b << endl;
        } else {
            cout << b << " es mayor que " << a << endl;
        }
    } else {
        cout << a << " es igual que " << b << endl;
    }
}

int restar(int a, int b) {
    return a - b;
}

int main() {
    int n1, n2;
    cout << "Ingresa un numero: ";
    cin >> n1;
    cout << "Ingresa otro numero: ";
    cin >> n2;

    mostrarMayor(n1, n2);
    cout << "El resultado de la resta es: " << restar(n1, n2) << endl;

    return 0;
}