#include<stdio.h>
#include<math.h>
int main(){
	double num;
	printf("Enter a number (positive or negative):");
	scanf("%lf",&num);
	double floorvalue=floor(num);
	double ceilvalue=ceil(num);
	printf("Number entered:%.21f\n",num);
	printf("Floor value:%.21f\n",floorvalue);
	printf("celling value:%.21f\n",ceilvalue);
	return 0;	
}