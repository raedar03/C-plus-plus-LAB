#include <iostream>
using namespace std;
int main() {
    int UserNum, RemNum = 0, RevNum, TempNum;
    cout << "Enter A Number: ";
    cin >> UserNum;
    TempNum = UserNum;
    cout << "--------------------------------" <<endl;
    cout << "Your Number is: " << UserNum << endl;
    while (TempNum != 0) {
    	RemNum = TempNum%10;
    	RevNum = (RevNum*10)+RemNum;
    	TempNum = TempNum/10;
	}
	cout << "Reversed Number is: " << UserNum << endl;
	if (UserNum==RevNum) {
		cout << "Palindrome!";
	} else {
		cout << "Not Palindrome!";
	}
    
}


