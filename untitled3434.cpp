#include <stdio.h>

int main(void) {
	double a, b;
	char op;
	
	printf("Enter expression (e.g. 5 + 3): ");
	if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
		printf("Invalid input\n");
		return 1;
	}
	
	if (op == '+') {
		printf("%.2f\n", a + b);
	} else if (op == '-') {
		printf("%.2f\n", a - b);
	} else if (op == '*') {
		printf("%.2f\n", a * b);
	} else if (op == '/') {
		if (b == 0) {
			printf("Error: division by zero\n");
		} else {
			printf("%.2f\n", a / b);
		}
	} else {
		printf("Unknown operator\n");
	}
	
	return 0;
}

