//Program to calculate TNEB bill
#include <stdio.h> // 9943115155

int main(){
	int units;
	double bill_amount;
	scanf("%d", &units);
	if (units <=100)
		bill_amount = 0;
	else if (units<=200)
		bill_amount = (units - 100) * 2.25;
	else if (units<=400)
		bill_amount = 225+(units-200)*4.5;
	else if (units <= 500)
		bill_amount = 0+225+900+(units-400)*6;
	else
		bill_amount = 0 + 225 + 900 + 600 + (units - 500) * 8;
	printf("Bill Amount : Rs.%.2lf", bill_amount);
	return 0;
}