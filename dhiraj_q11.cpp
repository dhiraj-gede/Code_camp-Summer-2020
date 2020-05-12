#include<iostream>
using namespace std;
#define c net_salary
int main(){
  int basic_salary;
  float a, b;                                                                                 //a= % of allowences, b= %of deductions;
  float net_salary;
  cin>> basic_salary>> a>> b;
  c = basic_salary + basic_salary * a/100- basic_salary * b/100;
  cout<< c;
  return 0;
}
  
