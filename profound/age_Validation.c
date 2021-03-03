#include "stdio.h"

int main()
{
	int age;
	printf("\nEnter Age : \t");
	scanf("%d", &age);

	if (age > 18 || age == 18)
		printf("Your are eligible for voting.");
	else
		printf("Your are Not eligible for voting.");
	return 0;
}
