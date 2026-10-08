#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int min = a;
	
	for (int count = 0; count < 2; count++) {
		if (count == 0 && b < min) min = b;
		if (count == 1 && c < min) min = c;
	}
	
	printf("%d\n", min);
	return 0;
}
