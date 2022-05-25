#include <iostream>

int main()
{
	char alpha[] = "abcdefghijklmnopqrstuvxywz";
	char* p = alpha;
	int i = 0;	
	while (*p++)
	{
		std::cout << "*p=" << *p;
		std::cout << " i=" << i++ << std::endl;
	}
	return 0;
}
