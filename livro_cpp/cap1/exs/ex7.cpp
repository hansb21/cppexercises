#include <stdio.h>

typedef union {
	float p;
	struct {
		unsigned int mantisa: 23;
		unsigned int exponent: 8;
		unsigned int sign: 1;
	} parts;
} float_;

int main() 
{
	float arr[3] = {3.1415, 3.3333, 0.6663};
	
	for (int i = 0; i < 3; i++)
	{
		float_ float1 = { .p = arr[i] };
		printf("number = %.4f\n", float1.p );
		printf("sign = %x\n", float1.parts.sign);
		printf("exponent = %x\n", float1.parts.exponent);
		printf("mantissa = %x\n", float1.parts.mantisa);
	}
	
	return 0;
}
	
