// Implementing simple calculator
#include <stdio.h>
#include <math.h>
int main(){
	int choice;
	double x, y, result;
	char sign;
	while(1){
		aa: // label
		printf("My Simple Calculator App\n");
		printf("************************\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Remainder\n");
		printf("6. Exit\n");		https://bit.ly/4nDFMdz
		printf("Enter your choice : ");
		scanf("%d", &choice);
		if (choice >=1 && choice <=5){
			printf("Number 1 : ");
			scanf("%lf", &x);
			printf("Number 2 : ");
			scanf("%lf", &y);
		}
		switch(choice){
			case 1:
				result = x + y; sign = '+';break;
			case 2:
				result = x - y; sign = '-';break;
			case 3:
				result = x * y; sign = 'x';break;
			case 4:
				if (y == 0){
					printf("Divisor cannot be zero\n");
					goto aa;
				}
				result = x / y; sign = '/';break;
			case 5:
				result =fmod(x,y); sign = '%';break;
			case 6:
				printf("Thank you so much for being very interactive!\n");
				return 0;
			default:
				printf("Invalid Input!\n");
				goto aa;
		}
		if (choice >=1 && choice <= 5 ){
			if((long)x == x)
				printf("%ld", (long)x);
			else
				printf("%.2lf", x);
			printf(" %c ", sign);
			if((long)y == y)
				printf("%ld", (long)y);
			else
				printf("%.2lf", y);
			printf(" = ");
			if((long)result == result)
				printf("%ld", (long)result);
			else
				printf("%.2lf", result);				
			printf("\n");
		}
	} //while
	return 0;
}
	
	
