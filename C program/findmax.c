//Program to find max value in the list
#include <stdio.h>
int main(){
	int n, max, x;
	scanf("%d", &n);
	for (int i = 1; i<=n; i++){		
		scanf("%d", &x);
		if ( i == 1)
			max = x;
		else if (max < x) 
			max = x;
	}
	printf("Max : %d",max);
	return 0;
}