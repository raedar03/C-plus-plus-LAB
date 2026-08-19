// To  check whether a string is palindrome.
#include <iostream>
using namespace std;
int main() {
    char user_string[100]; int i = 0, length=0, flag = 0; //declaring variables
    cout << "Enter String (100): ";
    cin >> user_string;
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
        cout << "Not a Palindrome.";
    } else {
        cout << "Palindrome.";
    }
    return 0;
} //end of program
