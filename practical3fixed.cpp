#include  <iostream>
using namespace std;

void display(int A[][10], int row, int column) {
	for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
	}
}

void add_matrix(int A[][10], int B[][10], int C[][10], int row1, int column1, int row2, int column2) {
	if (row1!=row2 || column1!=column2) {
		printf("Rows and Columns Must Be Same.\n");
	}
	else {
		for (int i=0; i<row1; i++) {
			for (int j=0; j<column1; j++) {
				C[i][j] = A[i][j]+B[i][j];
			}
		}
		display(C, row1, column1);
	}
	
}

void sub_matrix(int A[][10], int B[][10], int C[][10], int row1, int column1, int row2, int column2) {
	if (row1!=row2 || column1!=column2) {
		printf("Rows and Columns Must Be Same.\n");
	}
	else {
		for (int i = 0; i<row1; i++) {
			for (int j = 0; j<column1; j++) {
				C[i][j] = A[i][j]-B[i][j];
			}
		}
		display(C, row1, column1);
	}
	
}

void mult_matrix(int A[][10], int B[][10], int C[][10], int row1, int column1, int row2, int column2) {
	if (row2!=column1) {
        cout << "Matrix Multiplication Not Possible.\n";
	}
	else {
        for (int i=0; i<row1; i++) {
            for (int j=0; j<column2; j++) {
                C[i][j] = 0;
                for (int k=0; k<column1;k++) {
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        display(C, row1, column2);
	}
}

void trans_matrix(int A[][10], int B[][10], int T[][10], int row1, int column1, int row2, int column2) {
	for (int i=0; i<column1; i++) {
		for (int j=0; j<row1; j++) {
			T[i][j] = A[j][i];
		}
	}
	cout << "Transpose of Matrix A:\n";
	display(T, column1, row1);
	for (int i=0; i<column2; i++) {
		for (int j=0; j<row2; j++) {
			T[i][j] = B[j][i];
		}
	}
	cout << "Transpose of Matrix A:\n";
	display(T, column2, row2);
}

int main() {
	int A[10][10], B[10][10], C[10][10], row1, row2, column1, column2, flag = 1,ch;
	cout << "Enter Rows for Matrix A: ";
	cin >> row1;
	cout << "Enter Columns for Matrix A: ";
	cin >> column1;
	cout << "Enter Rows for Matrix B: ";
	cin >> row2;
	cout << "Enter Columns for Matrix B: ";
	cin >> column2;

	cout << "Enter Elements for A: ";
	for (int i = 0; i<row1; i++) {
		for (int j = 0; j<column1; j++) {
			cin >> A[i][j];
		}
	}

	cout << "Enter Elements for B: ";
	for (int i = 0; i<row2; i++) {
		for (int j = 0; j<column2; j++) {
			cin >> B[i][j];
		}
	}

	do {
		cout << "---MENU---" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Transpose" << endl;
		cout << "5. Display" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter Choice: ";
		cin >> ch;
		switch(ch) {
			case 0: {
				flag = 0;
				break;
			}
			case 1: {
				add_matrix(A, B, C, row1, column1, row2, column2);
				break;
			}
			case 2: {
				sub_matrix(A, B, C, row1, column1, row2, column2);
				break;
			}
			case 3: {
				mult_matrix(A,B,C,row1,column1,row2,column2);
				break;
			}
			case 4: {
				trans_matrix(A, B, C, row1, column1, row2, column2);
				break;
			}
			case 5: {
				cout << "Matrix A:" << endl;
				display(A, row1, column1);
				cout << "Matrix B:" << endl;
				display(B, row2, column2);
				break;
			}
			default: {
                cout << "Invalid Choice.";
			}
		}
		cout << "Do You Want to Continue? (1/0): ";
		cin >> flag;
	} while (flag);


	return 0;
}
