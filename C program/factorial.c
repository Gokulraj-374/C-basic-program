#include <stdio.h>

int main(){
	unsigned long long int f=1, n;
	scanf("%llu", &n);
	for (int i = 1; i<=n;i++)
		f=f*i;
	printf("%llu", f);
	return 0;
}