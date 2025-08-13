#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string nombre;
    int edad;
    double altura, altura2, raizEdad, restoAltura;

    cout << "Ingrese nombre: " << endl;
    getline(cin, nombre);
    cout << "Ingrese edad: " << endl;
    cin >> edad;
    cout << "Ingrese altura: " << endl;
    cin >> altura;

    altura2 = pow(altura, 2);
    raizEdad = sqrt(edad);
    restoAltura = fmod(altura, 2);

    cout << fixed << setprecision(3) << setfill('*') << showpos
        << "Nombre ingresado: " << setw(20) << nombre << endl
        << "Altura al cuadrado: " << setw(12) << altura2 << endl
        << "Raiz de la edad: " << setw(12) << raizEdad << endl
        << "Resto altura/2: " << setw(12) << restoAltura << endl;
}