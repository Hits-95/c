#include<stdio.h>
#include<conio.h>

int* temp() {
	int i, arr[5];
	printf("\n Enter : ");
	for(i = 0; i < 5; i++)
		scanf("%d",&arr[i]);
	return arr;
}



int main() {
	temp();
}
