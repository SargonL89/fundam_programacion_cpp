#include <iostream> 
using namespace std; 

int main() { 
    int number, option; 
    cout << "Opciones: \n 1. Calcular el cuadrado de un número \n 2. Calcular el cubo de un número \n 3. Salir \n Ingrese una opción: " << endl;
    cin >> option;
    
    while (option != 3) { 
        if (option==1) {
            cout << "Ingrese un número: " << endl;
            cin >> number;
            cout << number * number << endl; 
        } else if (option==2){
            cout << "Ingrese un número: " << endl;
            cin >> number;
            cout << number * number * number << endl;
        } else { 
            cout << "Opción inválida" << endl; 
        } 
        cout << "Opciones: \n 1. Calcular el cuadrado de un número \n 2. Calcular el cubo de un número \n 3. Salir \n Ingrese una opción: " << endl; 
        cin >> option; 
    } cout << "Programa terminado" << endl; 
}