#include <iostream>
using namespace std;

class Y;

class X
{
	int a;
	public:
		void get()
		{
			cout << "Enter Value 1: "; cin >> a;
		}
		void put()
		{
			cout << "Value 1: " << a;
			cout << endl;
		}
		friend void swapNUM(X &, Y &);
};

class Y
{
	int b;
	public:
		void get()
		{
			cout << "Enter Value 2: "; cin >> b;
		}
		void put()
		{
			cout << "Value 2: " << b;
			cout << endl;
		}
		friend void swapNUM(X &, Y &);
};

void swapNUM(X &x, Y &y)
{
	int t = x.a;
	x.a = y.b;
	y.b = t;
}

int main()
{
	X x; Y y;
	x.get(); y.get();
	cout << "Before Swap: " << endl;
	x.put(); 
	y.put(); 
	swapNUM(x,y);
	cout << "After Swap: " << endl;
	x.put(); 
	y.put(); 
	return 0;
}
