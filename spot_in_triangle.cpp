#include <iostream>
using namespace std;

bool calcular(double x, double y, char c) {
    switch(c) {
        case 'a': 
            if (((x-2)*(5-2)-(y-2)*(5-2) < 0 && (8-2)*(5-2)-(2-2)*(5-2) < 0) ||
                ((x-2)*(5-2)-(y-2)*(5-2) > 0 && (8-2)*(5-2)-(2-2)*(5-2) > 0)) {
                    return true;
                } else {
                    return false;
                }
            break;
        case 'b':
            if (((x-5)*(2-5)-(y-5)*(8-5) < 0 && (2-5)*(2-5)-(2-5)*(8-5) < 0) ||
                ((x-5)*(2-5)-(y-5)*(8-5) > 0 && (2-5)*(2-5)-(2-5)*(8-5) > 0)) {
                    return true;
                } else {
                    return false;
                }
            break;
        case 'c':
            if (((x-8)*(2-2)-(y-2)*(2-8) < 0 && (5-8)*(2-2)-(5-2)*(2-8) < 0) ||
                ((x-8)*(2-2)-(y-2)*(2-8) > 0 && (5-8)*(2-2)-(5-2)*(2-8) > 0)) {
                    return true;
                } else {
                    return false;
                }
            break;
        default:
            return false;
    }
} 

bool adentro(double x, double y) {
    double d1, d2, d3;
    
    char a = 'a';
    char b = 'b';
    char c = 'c';
    
    d1 = calcular(x, y, a);
    d2 = calcular(x, y, b);
    d3 = calcular(x, y, c);
    
    if (d1 && d2 && d3) {
        return true;
    } else {
        return false;
    }
} 