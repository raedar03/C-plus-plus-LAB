#include <iostream>
using namespace std;

class Student
{
	protected: char name[100]; int rollno;
	public:
		void studentget() 
		{
			cout << "Enter Student Name: ";
			cin >> name;
			cout << "Enter Student Roll No: ";
			cin >> rollno;
		}
		void studentput()
		{
			cout << "Student Name: " << name << endl;
			cout << "Student Roll: " << rollno << endl;
		}
};

class Exam: public Student
{
	protected: float m[6];
	public:
		void examget()
		{
			for (int i = 0; i<6; i++)
			{
				cout << "Enter Marks for Subject " << i+1 << ": ";
				cin >> m[i];
			}
		}
		void examput()
		{
			for (int i = 0; i<6; i++)
			{
				cout << "Marks for Subject " << i+1 << ": ";
				cout << m[i] << endl;
			}
		}
};

class Result: public Exam
{
	protected: float total_marks, result;
	public:
		void calculate()
		{
			total_marks = 0;
			Student::studentget();
			Exam::examget();
			cout << endl;
			for (int i = 0; i<6; i++)
			{
				total_marks+=m[i];
			}
			result=total_marks/6;
		}
		void display()
		{
			cout << "--- STUDENT MARKSHEET ---" << endl;
			Student::studentput();
			cout << endl;
			Exam::examput();
			cout << endl;
			cout << "Total Marks: " << total_marks << endl;
			cout << "Result: " << result;
		}
};

int main()
{
	Result r1;
	r1.calculate();
	r1.display();
	return 0;
}
