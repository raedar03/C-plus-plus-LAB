#include <iostream>
using namespace std;

void call_value(int a) {
    a+=10;
    cout << "Inside Call By Value: " << a << endl;
}
void call_reference(int &a) {
    a+=10;
    cout << "Inside Call by Reference: " << a << endl;
}
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    cout << "Before Call by Value: " << n << endl;
    call_value(n);
    cout << "After Call by Value: " << n << endl;
    cout << endl;
    cout << "Before Call by Reference: " << n << endl;
    call_reference(n);
    cout << "After Call by Reference: " << n << endl;
    return 0;
}
