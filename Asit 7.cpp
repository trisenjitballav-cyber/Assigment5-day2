#include <stdio.h>
int main() {
	float radius,area;
	printf("%f",&radius);
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("Area of the circle=%.2f\n",area);
	return 0;
}