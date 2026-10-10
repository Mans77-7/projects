#include <stdio.h> 
int main(void) {
	int n;
	
	printf("Enter N: ");
	scanf("%d", &n);
	
	int i = 1;
	while (i <= n) {
	printf("%d", i);
	i++;
	}
	printf("\n");
	return 0;
	}

