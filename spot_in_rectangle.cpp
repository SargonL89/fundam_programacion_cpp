#include <iostream>
using namespace std;

bool is_borde(double x, double y) {
    if (((x>=2 && x<=4) && (y==1)) ||
        ((x>=2 && x<=4) && (y==5)) ||
        ((x==2) && (y>=1 && y<=5)) ||
        ((x==4) && (y>=1 && y<=5))) {
            return true;
        } else {
            return false;
        }
}

bool is_adentro(double x, double y) {
    if ((x>=2 && x<=4) && (y>=2 && y<=5)) {
            return true;
        } else {
            return false;
        }
}

void determinar(double x1, double y1, double x2, double y2, double x3, double y3) {
    int adentro = 0;
    int afuera = 0;
    int borde = 0;
    
    if (is_borde(x1, y1)) {
        borde++;
    } else if (is_adentro(x1, y1)) {
        adentro++;
    } else {
        afuera++;
    }

    if (is_borde(x2, y2)) {
        borde++;
    } else if (is_adentro(x2, y2)) {
        adentro++;
    } else {
        afuera++;
    }

    if (is_borde(x3, y3)) {
        borde++;
    } else if (is_adentro(x3, y3)) {
        adentro++;
    } else {
        afuera++;
    }

    cout << "Adentro: " << adentro << ", Afuera: " << afuera << ", Borde: " << borde << endl;
}

int main()
{
    double x1, y1, x2, y2, x3, y3; 
    cout << "Ingrese las coordenada x del primer punto: " << endl;
    cin >> x1;
    cout << "Ingrese las coordenada y del primer punto: " << endl;
    cin >> y1;
    cout << "Ingrese las coordenada x del segundo punto: " << endl;
    cin >> x2;
    cout << "Ingrese las coordenada y del segundo punto: " << endl;
    cin >> y2;
    cout << "Ingrese las coordenada x del tercer punto: " << endl;
    cin >> x3;
    cout << "Ingrese las coordenada y del tercer punto: " << endl;
    cin >> y3;
    
    determinar(x1, y1, x2, y2, x3, y3);
    
    return 0;
}