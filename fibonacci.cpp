#include<iostream>
#include<cmath>
using namespace std;

int fibo(int i){
    if (i==0) 
        return 0;
    if (i==1)
        return 1;
    return fibo(i - 1) + fibo(i - 2);
}

int main()
{
  int N;
  cin >> N;
  int fibonacci[N];
  
  for (int i=0;i<N;i++){
      fibonacci[i] = fibo(i);
  }

  for(int i=0; i<N; i++)
    cout << fibonacci[i] << " ";

  return 0;
}