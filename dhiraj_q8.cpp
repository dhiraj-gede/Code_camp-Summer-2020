#include<iostream>
using namespace std;
float a(){
    int a,b,c;
    cin>>a>>b>>c;
    float si;
    si=(float)a*b*c/100;
    return si;
}
int main(){
    int p, n , r;
    float SI;
    SI=a();
    cout<<SI;
    return 0;
}
