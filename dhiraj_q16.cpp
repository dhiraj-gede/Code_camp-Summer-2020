#include<iostream>
#include<string>
using namespace std;
int npal(int a) {
	int n = 0, rem = 0;
	while (a != 0) {
		rem = a % 10;
		n = n * 10 + rem;
		a = a / 10;
	}
	return n;
}
string  pal(string  f) {
	string a;
	string::reverse_iterator i;
	for ( i = f.rbegin(); i != f.rend(); i++) {
		a += *i;
	}
	return a;
}
int main() {
	int a, n, g; 
	string b, h;
	cout << "Enter your choice to check :\n1. String is Palindrome\n2. Number is Palindrome\nYour choice: ";
	cin >> n;
	switch (n) {
	case 1:
		cout << "Enter a String: ";
		cin >> b;
		h = pal(b);
		if (h == b)
			cout << "String is a Paindrome";
		else
			cout << "Not a Palindrome";
		break;
	case 2: 
		cout << "Enter a Number: ";
		cin >> a;
		g = npal(a);
		if (g == a)
			cout << "Number is a Palindrome";
		else
			cout << "Not a palindrome";
		break;
	default: cout << "Wrong choice! ";
		break;
	}	
	return 0;
}
