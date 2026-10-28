#include <iostream>
using namespace std;

class Media
{
	char title[100], publication[100];
	public:
		virtual void get()
		{
			cout << "Enter Title: "; 
			cin >> title;
			cout << "Enter Publication: "; 
			cin >> publication;
		}
		virtual void put()
		{
			cout << "Title: " << title << endl;
			cout << "Publication: " << publication << endl;
		}
};

class Book: public Media
{
	int pages;
	public:
		void get()
		{
			Media::get();
			cout << "Enter Pages: "; 
			cin >> pages;
		}
		void put()
		{
			Media::put();
			cout << "Pages: " << pages << endl;
		}
};

class Tape: public Media
{
	float playing_time;
	public:
		void get()
		{
			Media::get();
			cout << "Enter Playing Time: "; 
			cin >> playing_time;
		}
		void put()
		{
			Media::put();
			cout << "Playing Time: " << playing_time << "m" << endl;
		}
};

int main()
{
	Media *m; Book b; Tape t;
	cout << "Input: Book Details " << endl;
	m = &b;
	m->get();
	cout << endl;
	cout << "Input: Tape Details " << endl;
	m = &t;
	m->get();
	cout << endl;
	cout << "Output: Book Details " << endl;
	m = &b;
	m->put();
	cout << endl;
	cout << "Output: Tape Details " << endl;
	m = &t;
	m->put();
	cout << endl;
	return 0;
}
