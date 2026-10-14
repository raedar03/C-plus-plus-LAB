#include <iostream>
#include <math.h>
using namespace std;

float AREA(float radius)
{
	float area;
	area = 3.14*pow(radius, 2);
	return area;
}

float AREA(float length, float breadth)
{
	float area;
	area = length*breadth;
	return area;
}

float AREA(float s_a, float s_b, float s_c)
{
	float area, semiperi, rooterand;
	semiperi = (s_a+s_b+s_c)/2;
	rooterand = semiperi*(semiperi-s_a)*(semiperi-s_b)*(semiperi-s_c);
	area = pow(rooterand, 0.5);
	return area;
	
}

int main()
{
	float radius, length, breadth, sidea, sideb, sidec;
	float area_circle, area_rectangle, area_triangle;
	
	cout << "Enter Radius for Circle: ";
	cin >> radius;
	area_circle = AREA(radius);
	cout << "Area of Circle: " << area_circle << endl;
	
	cout << "Enter Length and Breadth for Rectangle: ";
	cin >> length >> breadth;
	area_rectangle = AREA(length, breadth);
	cout << "Area of Rectangle: " << area_rectangle << endl;
	
	cout << "Enter The Three Sides for Triangle: ";
	cin >> sidea >> sideb >> sidec;
	if (sidea+sideb > sidec && sidea+sidec > sideb && sideb+sidec > sidea)
	{
		area_triangle = AREA(sidea, sideb, sidec);
		cout << "Area of Triangle: " << area_triangle << endl;		
	} else {
		cout << "Invalid Triangle" << endl;
	}
	return 0;
}
