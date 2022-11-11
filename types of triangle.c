
#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c;

	printf("\nEnter the sides of the triangle : ");
	scanf("%f%f%f", &a, &b, &c);

	if(a == b && a == c)
		printf("\nThe triangle is equilateral triangle.");

	if(a != b && b != c && a != c)
		printf("\nThe triangle is scalene.");

	if((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(c,2) + pow(b,2) == pow(a,2)) || pow(a,2) + pow(c,2) == pow(b,2))
		printf("\nThe triangle is right triangle.");

	if((a == b) && a != c|| (a == c) && a!= b || (c == b) && c != a)
		printf("\nThe triangle is isosceles.");

	getch();
	return 0;
}
