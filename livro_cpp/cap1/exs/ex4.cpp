#include <iostream>
#include <string>

using namespace std;


int main()
{
	
	const char *types[6] = { "int", "unsigned char", "unsigned int", "signed char", "signed int"};
	
	
	for (int i = 0; i < 5; i++)
	{
		cout << (types[i])<< endl;
		cout << "sizeof=" << sizeof(i) << endl;
		cout << sizeof(char) << endl;
	}
	return 0;
}
