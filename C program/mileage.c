//Program to find average mileage 
//and cost/KM
#include <stdio.h>
int main(){
	double fuelCost, litres, totalDistance;
	double mileage, costPerKM;
	printf("Fuel Cost : ");
	scanf("%lf", &fuelCost);
	printf("Number of litres : ");
	scanf("%lf", &litres);
	printf("Total Distance : ");
	scanf("%lf", &totalDistance);
	mileage = totalDistance / litres;
	costPerKM = fuelCost/mileage;
	printf("Mileage : %.2lf\n", mileage);
	printf("Cost/KM : %.2lf\n", costPerKM);
	return 0;
}