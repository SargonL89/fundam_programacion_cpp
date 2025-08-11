#include <iostream>
using namespace std;

int main()
{
    int entero;
    int contador = 0;
    int acumulador = 0;
    int contador_pares = 0;
    for (int i = 1; i <= 7; i++)
    {
        cout << "Ingrese un entero: " << endl;
        cin >> entero;
        contador += 1;
        if (entero % 2 == 0)
        {
            acumulador += entero;
            contador_pares += 1;
        }
    }
    cout << "Cantidad de números ingresados: " << contador << endl;
    cout << "Suma de números pares: " << acumulador << endl;
    cout << "Promedio de números pares: " << acumulador / contador_pares << endl;
}