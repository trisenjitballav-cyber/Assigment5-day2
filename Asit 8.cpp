#include <stdio.h>
int main() {
	int choice;
	float fahrenheit,celsius;
	printf("Temperature conversion program\n");
	printf("1.Fahrenheit to Celsius\n");
	printf("2.Celsius to Fahrenheit\n");
	printf("Enter your choice (1 or 2):");
	scanf("%d", &choice);
	if (choice== 1){
		printf("Enter temperature in Fahrenheit:");
		scanf("%f",&fahrenheit);
		celsius=(fahrenheit-32)*5.0/9.0;
		printf("Temperature in celsius:%.2\n", celsius);
	}
	else if(choice==2) {
		printf("Enter temperature in celsius:");
		scanf("%f", &celsius);
		fahrenheit=(celsius*9.0/5.0)+32;
		printf("Temperature in Fahrenheit:%.2f\n",fahrenheit);
	}
	else{
		printf("Invalid choice! please enter 1 or 2.\n");
	}
	return 0;
	}