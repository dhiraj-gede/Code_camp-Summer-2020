#include<iostream>
using namespace std;
int main(){
  int a=0, b=1, Fibo=0;
  int n=6;
  cin>>n;
  cout<<a<<" "<<b;
  for( int i=0; i<n; i++){
      Fibo=a+b;
      a=b;
      b=Fibo;
      cout<<Fibo<<" ";
    }
   return 0;
  }
    
