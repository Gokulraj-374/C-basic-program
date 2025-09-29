//Program to find greatest of two values
#include <stdio.h>
int main(){
//	int x, y;
//	scanf("%d%d", &x, &y);
//	if (x > y)
//		printf("%d is greater", x);
//	else
//		printf("%d is greater", y);
	double x, y;
	scanf("%lf %lf", &x, &y);
	printf("%g is greater", x > y ? x: y);
	return 0;	
}