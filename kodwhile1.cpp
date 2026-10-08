#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int min = a;
	int count = 0;
	
	while (count < 2) {
		if (count == 0 && b < min) min = b;
		if (count == 1 && c < min) min = c;
		count++;
	}
	printf("%d\n", min);
	return 0;
}
