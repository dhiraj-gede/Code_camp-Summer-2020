#include<iostream>
using namespace std;
int main(){
 int a;
 char b;
  	cin>>a >> b;
  	if(a%2==0)
    		cout<<"even"<<endl;
   	else
  		cout<<"odd"<<endl;
   	if(b>=65 && b<=91)
		cout<<"uppercase";
	else
		cout<< "lowercase";
  return 0;
}
