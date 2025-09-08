#include<iostream>
using namespace std;

int mayor(double x1, double x2, double x3) {
    if (x1 >= x2 && x1 >= x3) {
        return 1;
    } else if (x2 >= x1 && x2 >= x3) {
        return 2;
    } else {
        return 3;
    }
}

double escalar(double a, double x1, double x2, double x3) {
    switch(mayor(x1, x2, x3)) {
        case 1:
            return a/x1;
        case 2:
            return a/x2;
        case 3:
            return a/x3;
        default:
            return 0;
    };
}

int main()
{
    double x1, x2, x3;
    cout << "Ingrese x1: " << endl;
    cin >> x1;
    cout << "Ingrese x2: " << endl;
    cin >> x2;
    cout << "Ingrese x3: " << endl;
    cin >> x3;
    
    cout << "La coordenada de mayor valor es " << (mayor(x1, x2, x3)) << endl;
    cout << "Las componentes del vector escalado resultan: " << (escalar(x1, x1, x2, x3)) << " " << (escalar(x2, x1, x2, x3)) << " " << (escalar(x3, x1, x2, x3)) << endl; 
    
    return 0;
}