//Additon of two Numbers
#include<stdio.h>
int main()
{
	int number1, number2, sum;
	printf("Enter two Numbers:\n");
	scanf("%d %d",&number1, &number2);
	sum = number1 + number2;
	printf("%d + %d = %d\n", number1, number2, sum);
	return 0;
}
