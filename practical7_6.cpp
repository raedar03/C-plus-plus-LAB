#include <iostream>
using namespace std;

class Complex 
{
	private: float real, imag;
	public:
		Complex(float r=0.0, float i=0.0)
		{
			real = r;
			imag = i;
		}
		void input()
		{
			cout << "Enter Real Part: ";
			cin >> real;
			cout << "Enter Imaginary Part: ";
			cin >> imag;
		}
		void operator++()
		{
			++real;
			++imag;
		}
		void operator--()
		{
			--real;
			--imag;
		}
		Complex operator+(const Complex& c)
		{
			Complex temp;
			temp.real = real+c.real;
			temp.imag = imag+c.imag;
			return temp;
		}
		Complex operator-(const Complex& c)
		{
			Complex temp;
			temp.real = real-c.real;
			temp.imag = imag-c.imag;
			return temp;
		}
		void display()
		{
			if (imag >= 0)
			{
				cout << real << " + " << imag << "i" << endl;
			} else {
				cout << real << " - " << -imag << "i" << endl;
			}
		}
};

int main()
{
	Complex c1, c2, sum, diff;
	cout << "Object 1 Input " << endl;
	c1.input();
	cout << "Object 2 Input: " << endl;
	c2.input();
	cout << "Before Applying Operations: " << endl;
	c1.display();
	c2.display();
	
	cout << "After Applying Unary Increment Operation: " << endl;
	++c1;
	++c2;
	cout << "Object 1: " << endl;
	c1.display();
	cout << "Object 2: " << endl;
	c2.display();
	
	cout << "After Applying Unary Decrement Operation: " << endl;
	--c1;
	--c2;
	cout << "Object 1: " << endl;
	c1.display();
	cout << "Object 2: " << endl;
	c2.display();
	
	sum = c1 + c2;
	cout << "Sum: " << endl;
	sum.display();
	diff = c1-c2;
	cout << "Difference: " << endl;
	diff.display();

	return 0;
}
