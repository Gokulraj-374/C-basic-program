//Program to check whether the given number is odd or even
#include <stdio.h>

int main(){
	int x;
	scanf("%i", &x);
	if (x % 2 == 0)
		printf("Even");
	else
		printf("Odd");	
	
	return 0;
}