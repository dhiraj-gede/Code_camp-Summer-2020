#include<iostream>
using namespace std;
int rev(int x){
   int a, remainder=0;
   while(x!=0){
    reaminder=x%10;
    a= a*10+ remainder;
    x=x/10;
   }
   return a;
}
int main(){
  int a, b=0;
  cin>>a;
  b=rev(a);
  cout>>
  return 0;
}
