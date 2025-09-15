#include <iostream>
using namespace std;

void mayor_menor(int quantity, int &mayor, int &menor) {
    int num; 

    cin >> num;
    mayor = num; 
    menor = num;

    for (int i=1;i<quantity;i++){
        cin >> num;
        if (num>mayor) {
            mayor=num;
        } 
        if (num<menor) {
            menor=num;
        }
    }
}

int main() {
    int n, max, min;
    cout << "Ingrese la cantidad de numbers: ";
    cin >> n;

    mayor_menor(n, max, min);

    cout << "El mayor es: " << max << endl;
    cout << "El menor es: " << min << endl;

    return 0;
}