#include <stdio.h>
#define RANGE 671065

int main() {
	short prime[RANGE] = {0};
	int i, j;
	for (i = 0; i < RANGE; i++) {
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 0;
	for (i = 2; i < RANGE; i++) {
		if (prime[i] == 1) {
			for (j = i+i; j < RANGE; j += i) {
				prime[j] = 0;
			}
		}
	}
	int number;
	while (scanf("%d", &number) != EOF) {
		if (prime[number] == 1) printf("It's a prime!!!\n");
		else printf("It's not a prime!!!\n");
	}
	return 0;
}