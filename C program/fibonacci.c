//Program to print Fibonacci series
#include <stdio.h>
int main(){
	int prev=-1, cur=1, nxt, n;
	scanf("%d", &n);	
	for (int i = 1; i<=n; i++){
		nxt = prev + cur;		
		prev = cur;
		cur = nxt;
	}
	printf("%d ", nxt);
	return 0;
}


https://bit.ly/4nDFMdz