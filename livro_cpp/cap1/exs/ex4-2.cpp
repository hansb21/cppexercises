#include <iostream>

using namespace std;


int main()
{
	char b;
	cout << "sizeof=" << sizeof(b) << endl;
	cout << "sizeof=" << sizeof((int)b) << endl;
	cout << "sizeof=" << sizeof((signed int)b) << endl;
	cout << "sizeof=" << sizeof((unsigned int)b) << endl;
	cout << "sizeof=" << sizeof((signed char)b) << endl;
	cout << "sizeof=" << sizeof((unsigned char)b) << endl;
	cout << "sizeof=" << sizeof((long)b) << endl;
	cout << "sizeof=" << sizeof((unsigned long)b) << endl;
