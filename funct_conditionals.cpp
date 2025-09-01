#include <iostream>
using namespace std;

bool es_verano(int mes) {
    if (mes == 1 || mes == 2 || mes == 12) {
        return true;
    } else {
        return false;
    }
}

void mostrar_mensaje(int mes) {
    if (es_verano(mes)) {
        cout << "Es verano: irse de vacaciones o prender el aire acondicionado hasta que termine la estación" << endl;
    } else {
        cout << "Esta es una excelente época del año!" << endl;
    }
}

int main () {
    int mes;
    cout << "Ingresá el mes: " << endl;
    cin >> mes;
    mostrar_mensaje(mes);
}