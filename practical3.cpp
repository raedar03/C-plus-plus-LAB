#include  <iostream>
using namespace std;

void add_matrix(int A[10][10], int B[][10], int C[10][10], int row, int column) {
	int i = 0, j = 0;
	if (row!=column) {
		printf("Rows and Columns Must Be Same");
	}
	else {
		for (i; i<r; i++) {
			for (j; j<c; j++) {
				C[i][j] = A[i][j]+B[i][j];
			}
		}	
	}
	cout << C;
}

void sub_matrix(int A[10][10], int B[10][10], int C[10][10], int row, int column) {
	int i = 0, j = 0;
	if (row!=column) {
		printf("Rows and Columns Must Be Same");
	}
	else {
		for (i; i<r; i++) {
			for (j; j<c; j++) {
				C[i][j] = A[i][j]-B[i][j];
			}
		}	
	}
	cout << C;
}

void mult_matrix(int A[10][10], int B[10][10], int C[10][10], int row1, int column1, int column2) {
	
}

void trans_matrix(int A[10][10], int B[10][10], int T[10][10], int row, int column) {
	int i = 0; j = 0;
	for (i; i<row; i++) {
		for (l; j<column; j++) {
			T[i][j] = A[j][i];
		}
	}
	cout << T;
	for (i; i<row; i++) {
		for (l; j<column; j++) {
			T[i][j] = B[j][i];
		}
	}
	cout << T;
}

void display_matrix() {
	
}

int main() {
	int A[10][10], int B[10][10], int row1, row2, column1, column2, i = 0, j = 0, flag = 1,ch;
	cout << "Enter Rows for Matrix A: "; 
	cin >> row1;
	cout << "Enter Rows for Matrix B: ";
	cin >> row2;
	cout << "Enter Columns for Matrix A: ";
	cin >> column1;
	cout << "Enter Columns for Matrix B: ";
	cin >> column2;
	
	cout << "Enter Elements for A: "
	for (i; i<row; i++) {
		for (l; j<column; j++) {
			cin >> A[j][i];
		}
	}
	cout << "Enter Elements for B: "
	for (i; i<row; i++) {
		for (l; j<column; j++) {
			cin >> B[j][i];
		}
	}
	
	do {
		cout << "---MENU---"; endl;
		cout << "1. Addition"; endl;
		cout << "2. Subtraction"; endl;
		cout << "3. Multiplication"; endl;
		cout << "4. Transpose"; endl;
		cout << "5. Display"; endl;
		cout << "0. Exit"; endl;
		cout << "Enter Choice: "
		cin >> ch;
		switch(ch) {
			case 0: {
				
				break;
			}
			case 1: {
				
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
				
				break;
			}
			case 5: {
				
				break;
			}
		}
		cout << "Do You Want to Continue? (1/0)";
		cin >> flag;
	} while (flag)
	
	
	return 0;
}
