//Program to print odd natural numbers upto N

//Input
//10
//Output
//1 3 5 7 9

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	//method - 1
//	for (int i = 1; i<=n; i++ ){
//		if ( i % 2 == 1)
//			printf("%d ", i);
//	}
	for (int i = 1; i<=n; i+=2)
		printf("%d ", i);
	return 0;	
}