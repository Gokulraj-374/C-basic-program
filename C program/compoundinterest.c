//Program to calculate compound interest
#include <stdio.h>
#include <math.h>
int main(){
	long int principal;
	double rate, years, interest;
	scanf("%ld %lf %lf", &principal, &rate, &years);
	interest = principal * pow(1+rate/100, years);
	printf("Interest Amount : %lf", interest);
	
	return 0;
}
Data type		format specifier

char				%c
signed char			%c
unsigned char		%c
short int			%hi or %hd
signed short int 	%hi or %hd
unsigned short int	%hu
int or signed int	%d or %i
unsigned int		%u
long int			%ld or %li
signed long int 	%ld or %li
unsigned long int	%lu
long long int		%lld or %lli
signed long long int %lld or %lli
unsigned long long int %llu
float				%f, %e, %E, %g, %G
double 				%lf
long double			%Lf
int* (pointer)		%p



