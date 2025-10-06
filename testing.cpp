#include<iostream>
using namespace std;

int main()
{
    char c_fin;
    
    do{
        cin>>c_fin;
    }while(c_fin < 'A' || c_fin > 'Z');
    
    for (int i=65;i<=c_fin;i++){
        for(int j=i+1;j<=c_fin;j++){
            cout << char(i) << "," << char(j) << endl;
        }
        
    }
}