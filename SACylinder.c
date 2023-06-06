#include <stdio.h>
// Program that accept radius,height and print area//
#define pie 3.142
int main()
{
	float Radius, Height;
	printf("Enter the Radius of the Cylinder\n");
	scanf("%f", &Radius);
	printf("Enter the Height of the Cylinder\n");
	scanf("%f", &Height);
	float Area = (2 * pie * Radius * Height) + (2 * pie * Radius * Radius);
	printf("The Surface are is %.2f", Area);
}