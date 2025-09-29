//Program to multiply two values
#include <stdio.h>
int main(){
	int x, y, z;
	printf("Enter two integers : ");
	scanf("%d,%d", &x, &y);
	z = x * y;
	printf("%d x %d = %d", x, y, z);
	return 0;
}