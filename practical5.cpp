#include <iostream>
using namespace std;

class Person
{
	char name[64];
	int age;
	char address[64];
	float basic, hra, da, ta, gross;
	public:
		Person() 
		{
			cout << endl;
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Age: ";
			cin >> age;
			cout << "Enter Address: ";
			cin >> address;
			cout << "Enter Basic Salary: ";
			cin >> basic;
			cout << "---------------------";
			cout << endl;
			
		}
		void out() {
			hra = basic*0.5;
			da = basic*0.4;
			ta = basic*0.1;
			gross = basic+hra+da+ta;
			
			cout << "--- SALARY SLIP ---" << endl;
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Address: " << address << endl;
			cout << "Basic: " << basic << endl;
			cout << "HRA: " << hra << endl;
			cout << "DA: " << da << endl;
			cout << "TA: " << ta << endl;
			cout << "Gross Salary: " << gross << endl;
			
			
		}
		inline static void young_eldest(Person p[], int n)
		{
			int young = 0, eldest = 0;
			for (int i = 0; i<n; i++)
			{
				if (p[i].age < p[young].age)
				{
					young = i;
				}
			}
			cout << "Youngest: " << p[young].name << " Age: " << p[young].age; 
			for (int i = 0; i<n; i++)
			{
				if (p[i].age > p[eldest].age)
				{
					eldest = i;
				}
			}
			cout << ", Eldest: " << p[eldest].name << " Age: " << p[eldest].age;  
			cout << endl;
		}
};

int main() {
	int flag;
	Person p[10];
	Person::young_eldest(p,10);
	cout << endl;
	cout << "Do You Want Salary Details (1/0): ";
	cin >> flag;
	if (flag==1) 
	{
		for (int i = 0; i<10; i++) {
			p[i].out();
		}	
	}
	
	return 0;
}
