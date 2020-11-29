#include <cstdio>
#include <ctype.h>

#define MAXCHAR 128

int main() {
	int c;
	int counts[MAXCHAR] = { 0 };
	while ((c = getchar()) != EOF) {
		if (c < MAXCHAR) counts[c]++;
	}
	for (int i = 1; i < MAXCHAR; i++) {
		if (isprint(i)) {
			printf("%4d - %c - %4d : ", i, i, counts[i]);
		}
		else {
			printf("%4d -   - %4d : ", i, counts[i]);
		}
		for (int j = 0; j < counts[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}