//To check whether an integer is Armstrong's number.
#include <iostream>
#include <cmath>
using namespace std;

//function to calculate size of inputted integer.
int getlength(int num) {
    int temp = num, length=0;
    while (temp != 0) {
        length++;
        temp/=10;
    }
    return length;
}

//involves taking input and algorithm for Armstrong Number.
int main() {
    int UserNum, TempNum, Length, Rem, Sum = 0;
    cout << "Enter A Number: ";
    cin >> UserNum;
    TempNum = UserNum;
    Length = getlength(UserNum);
    while (TempNum != 0) {
        Rem = TempNum%10;
        Sum += pow(Rem, Length);
        TempNum/=10;
    }
    cout << "Sum of Digits (each raised to integer's length): " << Sum << endl;
    if (Sum==UserNum) {
        cout << "It is an Armstrong Number.";
    } else {
        cout << "It is not an Armstrong Number.";
    }
    return 0;
}
