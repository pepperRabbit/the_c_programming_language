#include <cstdio>

#define MAXLEN 10

int main() {
	int overflow = 0, c, len = 0;
	int counts[11] = { 0 };
	bool flag = true;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			flag = false;
			if (len <= MAXLEN) counts[len]++;
			else overflow++;
			len = 0;
		}
		else {
			if(!flag) flag = true;
			len++;
		}
	}
	for (int i = 1; i <= 10; i++) {
		printf("%d\t\t | ", i);
		for (int j = 0; j < counts[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("overflow\t | ");
	for (int j = 0; j < overflow; j++) {
		printf("*");
	}
	printf("\n");
	return 0;
}