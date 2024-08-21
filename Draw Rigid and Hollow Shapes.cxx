#include <iostream>

using namespace std;

void show_rigid_rectangle(int length,int width)
{
	for (int i=0;i<length;i++) {
	for (int j=0;j<width;j++) {
	cout << "*";
	}
	cout << endl;
	}
}
void show_hollow_rectangle(int length,int width)
{
	for (int j=0;j<width;j++)
	cout << "*";
	cout << endl;
	for (int i=1;i<length-1;i++) {
		cout << "*";
		for (int j=1;j<width-1;j++)
		cout << " ";
		cout << "*";
		cout << endl;
	}
	for (int j=0;j<width;j++)
	cout << "*";
	cout << endl;
}
void show_triangle(int length)
{
	for (int i=0;i<length;i++) {
	for (int j=0;j<i;j++) {
	cout << "*";
	}
	cout << endl;
	}
}

int main()
{
	show_hollow_rectangle(12,8);
	cout << endl << endl;
	show_hollow_rectangle(5,12);
	return 0;
}