//To check whether an integer is palindrome. 
#include <iostream> 
using namespace std;
int main() {
    int UserNum, RemNum = 0, RevNum, TempNum; //declaring variables.
    cout << "Enter A Number: ";
    cin >> UserNum;
    TempNum = UserNum;
    cout << "--------------------------------" <<endl;
    cout << "Your Number is: " << UserNum << endl;
    while (TempNum != 0) { //loop for reversing the number.
    	RemNum = TempNum%10; //takes the last digit.
    	RevNum = (RevNum*10)+RemNum; //adds digit in reverse order.
    	TempNum = TempNum/10; //deletes the last digit of the original number (stored in temporary variable).
	}
	cout << "Reversed Number is: " << UserNum << endl;
	if (UserNum==RevNum) { //condition to check if orginal number is equal to reversed number.
		cout << "Palindrome!";
	} else {
		cout << "Not Palindrome!";
	}
    return 0;
} //end of program.


