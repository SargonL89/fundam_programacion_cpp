#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Ingrese un número del 1 al 7" << endl;
    cin >> day;

    if (day >= 1 && day <= 7){
        switch (day) {
            case 1:
                cout << "Lunes" << endl;
                break;
            case 2:
                cout << "Martes" << endl;
                break;
            case 3:
                cout << "Miércoles" << endl;
                break;
            case 4:
                cout << "Jueves" << endl;
                break;
            case 5:
                cout << "Viernes" << endl;
                break;
            case 6:
                cout << "Sábado" << endl;
                break;
            case 7:
                cout << "Domingo" << endl;
                break;
        }
    } else {
        cout << "Número inválido" << endl;
    }

    return 0;
}