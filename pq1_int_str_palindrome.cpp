#include <iostream>
using namespace std;

void int_palindrome(int num) {
    int temp = num, rem, rev=0;
    while (temp != 0) { //loop for reversing the number.
    	rem = temp%10; //takes the last digit.
    	rev = (rev*10)+rem; //adds digit in reverse order.
    	temp = temp/10; //deletes the last digit of the original number (stored in temporary variable).
	}
	if (num==rev) { //condition to check if orginal number is equal to reversed number.
		cout << "The Number is a Palindrome!";
	} else {
		cout << "The Number is NOT a Palindrome.";
	}
}

void str_palindrome(char user_string[]) {
    int i = 0, length=0, flag = 0; //declaring variables
    while (user_string[length] != '\0') { //calculating length of the string
        length++;
    }
    for (i; i<length; i++) { //checking if first half characters match with second half characters.
        if (user_string[i]!=user_string[length-i-1]) {
            flag = 1;
            break; //breaks loop if characters don't match
        }
    }
    if (flag) { //if flag = 1, condition becomes True
        cout << "The String is NOT a Palindrome.";
    } else {
        cout << "The String is a Palindrome!";
    }
}

int main() {
    int UserNum; char UserStr[100]; //declaration of variables
    cout << "Enter a Number: "; //user input for integer/number
    cin >> UserNum;
    int_palindrome(UserNum);

    cout << endl;

    cout << "Enter String (100): "; //user input for string
    cin >> UserStr;
    str_palindrome(UserStr);

    return 0; //end of main
}
