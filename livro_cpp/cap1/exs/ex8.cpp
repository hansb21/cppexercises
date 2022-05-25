#include <ostream>
#include <bits/stdc++.h>

void signedrange(int type, int sig)
{
	switch(sig)
	{
		case(0):
		{
			int min = pow(2, type - 1);
			int max = min - 1;
			std::cout << "]" << min * (-1) << ", " << max << "]" << std::endl;
			break;	
		}
		case(1):
		{
			unsigned int max = pow(2, type) - 1;
			std::cout << "]0, " << max << "]" << std::endl;
		}	
			break;
	}
}

int main()
{
	std::cout << "Unsigned char range ";
	signedrange(sizeof(unsigned char) * 8, 1);
	std::cout << "Signed char range ";
	signedrange(sizeof(signed char) * 8, 0);
	std::cout << "Unsigned char range ";
	signedrange(sizeof(unsigned char) * 8, 1);
	std::cout << "Signed char range ";
	signedrange(sizeof(signed char) * 8, 0);
	std::cout << "Unsigned short range ";
	signedrange(sizeof(unsigned short) * 8, 1);
	std::cout << "Signed short range ";
	signedrange(sizeof(signed short) * 8, 0);
	std::cout << "Unsigned long range ";
	signedrange(sizeof(unsigned long) * 8, 1);
	std::cout << "Signed long range ";
	signedrange(sizeof(signed long) * 8, 0);
	std::cout << "Double range ";
	signedrange(sizeof(double) * 8, 0);


	return 0;
}
