#include<stdio.h>
int main(){
	int num,count=0,rem;
	printf("Enter the no:");
	scanf("%d",&num);
	while(num!=0){
		rem = num % 10;
		count=count*10+rem;
		num = num/10;}
		printf("Rev of number is %d",count);
		return 0;
	}