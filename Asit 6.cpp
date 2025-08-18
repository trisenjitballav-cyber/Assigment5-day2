#include<stdio.h>
int main() {
	float principal,rate,time,simpleinterest;
	printf("Enter principal amount:");
	scanf("%f",&principal);
	printf("Enter Rate of interest:");
	scanf("f%",&rate);
	printf("Enter Time (in years):");
	scanf("%f",&time);
	simpleinterest=(principal*rate*time)/100;
	printf("simple interest=%.2f\n",simpleinterest);
	return 0;	
}