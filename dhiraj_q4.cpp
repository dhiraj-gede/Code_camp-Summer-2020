#include<iostream>
using namespace std; 
#define _ endl
int main() {
	int ASCII;
	char ch;
	cin >> ASCII >> ch;
	cout << char(ASCII) << _ << int(ch);
	return 0;
}