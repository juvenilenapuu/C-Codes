// Program that accept radius,height and calculate volume
#include <stdio.h>
#define pie 3.142
int main()
{
	float Radius;
	printf("Enter Radius\n");
	scanf("%f", &Radius);
	float Height;
	printf("Enter Height\n");
	scanf("%f", &Height);
	float Volume = (pie * Radius * Radius * Height);
	printf("The Volume of a Cylinder is %f", Volume);
	return 0;
}