#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string nombre;
    int edad;
    double peso, altura, ind_mc, altura2, edad2, rpeso;

    cout << "Ingrese nombre completo: " << endl;
    getline(cin, nombre);
    cout << "Ingrese edad: " << endl;
    cin >> edad;
    cout << "Ingrese su peso en kg: " << endl;
    cin >> peso;
    cout << "Ingrese su altura en metros: " << endl;
    cin >> altura;

    altura2 = pow(altura, 2);
    ind_mc = peso / altura2;
    edad2 = sqrt(edad);
    rpeso = ceil(peso);

    cout << fixed << setprecision(2) << setfill('*')
        << "Altura al cuadrado: " << setw(10) << altura2 << endl
        << "Indice de masa corporal: " << setw(10) << ind_mc << endl
        << "Raiz cuadrada de la edad: " << setw(10) << edad2 << endl
        << "Peso redondeado hacia arriba: " << setw(10) << rpeso << endl;
}