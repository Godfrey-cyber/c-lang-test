#include <stdio.h>
// passing by reference
void swap(int *a, int *b) { // function for swaping two variables
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}; 

int main () {
	int x, y;
	x = 5;
	y = 10;
	printf("x: %d, y: %d\n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);
	return (0);
}