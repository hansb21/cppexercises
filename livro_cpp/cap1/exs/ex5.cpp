#include <iostream>
#include <cstring>

int main()
{
	const char alpha[] = "abcdefghijklmnopqrstuvxwyz0123456789\n\t";
	
	for (int i = 0; i < strlen(alpha); i++)
		std::cout << "character=(" << alpha[i] << ")" << std::endl << "value=(" << int(alpha[i]) << ")" << std::endl;
	
}

