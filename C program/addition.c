//Program to add two values
#include <stdio.h>

int main(){
	//declarations
//	int x, y, z;
	float x, y, z;
//	x = 10,  y= 20;
	x = 5.5, y = 7.9;
	z = x + y;
//	printf("%d", z);  ==> CTRL+/ ==> TOGGLE COMMAND BUTTON
//	printf("%d + %d = %d", x, y, z);
	printf("%.2f + %.2f = %.2f", x, y, z);	
	return 0;
}
// scanf() --> syntax
// int scanf(<control_string>,<address_of_argument_list>);

