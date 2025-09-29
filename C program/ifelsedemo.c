//Program to check the numbe is +ve, -ve or zero
#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	//Method - 1
//	if ( x > 0 )
//		printf("+ve");
//	else if (x < 0)
//		printf("-ve");
//	else
//		printf("Zero");
	//Method - 2
//	x>0?printf("+ve"):(x<0?printf("-ve"):printf("zero"));
	//Method -3
	printf("%s", x>0?"+ve":(x<0:"-ve":"zero"));
	return 0;
}