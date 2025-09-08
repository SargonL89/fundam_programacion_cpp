#include <iostream>
using namespace std;

int main() {
    int value=0;
    for (int i=1;i<=20;i++) {
        if (i%2==0) {
            value+=i;
        }
    }
    cout << "La suma total de pares es: " << value;
}