#include <stdio.h>
int main () {
	int b = 4;
	int *a = &b; // a stores th memory address of b - a -> to b
	
	
	printf("Value of b: %d\n", b);
	printf("Address of b: %p\n", &b);
	printf("Address of a: %p\n", a);

	*a = 50;

	printf("Value of b: %d\n", b);
	printf("Address of b: %p\n", &b);
	printf("Address of a: %p\n", a);

	int x, y, z;
	x = y = z = 0;
	printf("Print 3 numbers: ");
	scanf("%d %d %d", &x, &y, &z);
	printf("Result: %d\n", x + y + z);

	return (0);
}