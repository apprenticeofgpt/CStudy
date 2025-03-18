#include <stdio.h>
int main()
{
	int a, b, result;
	scanf_s("%d %d", &a, &b);


	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;	
	printf("%d / %d = %d", a, b, result);	

}