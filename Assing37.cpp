#include<stdio.h>
int main(){
	int num,reversed=0,rem,org;
	printf("Enter the no:");
	scanf("%d",&num);
	org=num;
	while(num!=0){
		rem=num%10;
		rev = rev*10+rem;
		num=num/10}
		if(org==rev)
		printf("The no is palindrom%",org);
		else
		printf("The no is not palindrom%",org);
	return 0;
	}