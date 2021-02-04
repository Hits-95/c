#include"stdio.h"

int main() {
	int yr;
	printf("\nEnter Year: \t");
	scanf("%d", &yr);
	
	if(yr % 400 == 0 && yr % 4 == 0)
		printf("%d is leaf yr", yr);	
	else
		printf("%d is Not leaf yr", yr);	
	getch();
	return 0;
}
