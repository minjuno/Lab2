#include <stdio.h>
#include "lib/calc.h"

int main() {
	int a = 30;
	int b = 10;

	printf("Add: %d\n", add(a, b));
	printf("Sub: %d\n", sub(a, b));
	printf("Mul: %d\n", mul(a, b));
	printf("Div: %d\n", div(a, b));

	return 0;
}
