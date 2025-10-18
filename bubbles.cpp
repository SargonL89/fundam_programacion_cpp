#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N=5;
    const int M=3;
    float valores[N][M];
    
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> valores[i][j];
        }
    }
    
    for (int i=0;i<N;i++){
        for (int j=0;j<M-1;j++){
            for (int k=0;k<M-j-1;k++){
                if (valores[i][k] < valores[i][k+1]){
                    float temp = valores[i][k];
                    valores[i][k] = valores[i][k+1];
                    valores[i][k+1] = temp;
                }
            }
        }
    }
    
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cout << setw(7) << valores[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}