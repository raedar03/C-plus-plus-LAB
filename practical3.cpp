#include  <iostream>
using namespace std;

void display(int A[10][10], int row, int column) {
	for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
	}
}

void add_matrix(int A[10][10], int B[][10], int C[10][10], int row, int column) {
	if (row!=column) {
		printf("Rows and Columns Must Be Same");
	}
	else {
		for (int i=0; i<row; i++) {
			for (int j=0; j<column; j++) {
				C[i][j] = A[i][j]+B[i][j];
			}
		}
	}
	display(C, row, column);
}

void sub_matrix(int A[10][10], int B[10][10], int C[10][10], int row, int column) {
	if (row!=column) {
		printf("Rows and Columns Must Be Same");
	}
	else {
		for (int i = 0; i<row; i++) {
			for (int j = 0; j<column; j++) {
				C[i][j] = A[i][j]-B[i][j];
			}
		}
	}
	display(C, row, column);
}

void mult_matrix(int A[10][10], int B[10][10], int C[10][10], int row1, int column1, int column2) {
	if (row1!=column2) {
        cout << "Matrix Multiplication Not Possible";
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
	}
	display(C, row1, column2);
}

void trans_matrix(int A[10][10], int B[10][10], int T[10][10], int row1, int column1, int row2, int column2) {
	for (int i=0; i<row1; i++) {
		for (int j=0; j<column1; j++) {
			T[i][j] = A[j][i];
		}
	}
	display(T, row2, column2);
	for (int i=0; i<row2; i++) {
		for (int j=0; j<column2; j++) {
			T[i][j] = B[j][i];
		}
	}
	display(T, row2, column2);
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
		cout << "0. Exit" << endl;
		cout << "Enter Choice: ";
		cin >> ch;
		switch(ch) {
			case 0: {
				flag = 0;
				break;
			}
			case 1: {
				add_matrix(A, B, C, row1, column1);
				break;
			}
			case 2: {
				sub_matrix(A, B, C, row1, column1);
				break;
			}
			case 3: {
				mult_matrix(A,B,C,row1,column1,column2);
				break;
			}
			case 4: {
				trans_matrix(A, B, C, row1, column1, row2, column2);
				break;
			}
			default: {
                cout << "Invalid Choice.";
			}
		}
		cout << "Do You Want to Continue? (1/0)";
		cin >> flag;
	} while (flag);


	return 0;
}
