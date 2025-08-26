#include<stdio.h>
#include<math.h>
int main(){
	double principal,rate,time,compoundInterest,amount;
	
		
	printf("Enter principal amount:");
	scanf("%lf", &principal);
	printf("Enter Rate of interest (in%%):");
	scanf("%lf",&rate);
	printf("Enter Time (in years):");
	scanf("%if",&time);
	amount = principal*pow((1+rate/100),time);
	compoundInterest = amount - principal;
	printf("compound Interest = %.21f\n",compoundInterest);
	printf("Total Amount = %.21f\n",amount);
	return 0;
	}