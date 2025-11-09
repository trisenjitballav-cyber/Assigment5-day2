#include<stdio.h>
int main(){
	int num,chice;
	printf("Enter:");
	scanf("%d",&num);
	printf("\n Menu:\n");
	printf("1.check if buzzor not\n");
	printf("2.check if even or odd\n");
	printf("3.check if possible or negative\n");
	printf("Enter choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			if(num%7==0||num%10==7)
			printf("%d is a buzz no.\n",num);
			else printf("%d is not buzz no:");
			break;
			case 2:
				if(num%2==0)
				printf("%d is even\n",num);
				else printf("%d is odd".num);
				break;
				case 3:
					if(num>0)
					printf("%d is +ve\n",num);
					else if(num<0)
					printf("%d is -ve\n",num);
					else 
					printf("The no is zero\n");
					break;
					default: printf("Invalid choice!");}
					return 0;
				}
	}
}