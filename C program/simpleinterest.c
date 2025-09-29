//Program to calculate simple interest
#include <stdio.h>

int main(){
	long int principal;
	double rate, years, interest;
	printf("Principal Amount : "); //Principal Amount : 10000
	scanf("%li", &principal);
	printf("Number of Years : ");
	scanf("%lf", &years);
	printf("Rate of Interest : ");
	scanf("%lf", &rate);
	interest = principal * years * rate / 100;
	printf("Interest Amount :Rs. %.2lf", interest);
	return 0;
}