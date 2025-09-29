//Program to find area and circumference of the circle
#include <stdio.h>
#include <math.h>
int main(){
	double radius, area, circumference;
	printf("Radius : ");
	scanf("%lf",&radius);
	area = 22.0/7 * pow(radius, 2); // 3.142 * radius * radius
	circumference = 2 * 22.0 / 7 * radius;
	printf("Area : %.2lf\n", area);
	printf("Circumference : %.2lf", circumference);
	return 0;
}