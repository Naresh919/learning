//Multiplication of two Numbers
#include<stdio.h>
int main()
{
	int number1, number2, mul;
	printf("Enter two Numbers:\n");
	scanf("%d %d",&number1, &number2);
	mul = number1 * number2;
	printf("%d * %d = %d\n", number1, number2, mul);
	return 0;
}
