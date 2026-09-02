#include <iostream>
using namespace std;

void swap_reference(int *a, int *b) {
	cout << "Before Swap: Var1 = " << *a << " Var2 = " << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "After Swap: Var1 = " << *a << " Var2 = " << *b << endl;
}

void swap_value(int a, int b) {
	cout << "Before Swap: Var1 = " << a << " Var2 = " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "After Swap: Var1 = " << a << " Var2 = " << b << endl;
}

int main() {
	int a1,b1,a2,b2;
	cout << "(Reference) Enter Variable 1: ";
	cin >> a1;
	cout << "(Reference) Enter Variable 2: ";
	cin >> b1;
	swap_reference(&a1,&b1);
	cout << "(Value) Enter Variable 1: ";
	cin >> a2;
	cout << "(Value) Enter Variable 2: ";
	cin >> b2;
	swap_value(a2,b2);
	return 0;
}
