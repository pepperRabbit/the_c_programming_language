#include <cstdio>

int main() {
	int c;
	int num1 = 0, num2 = 0, num3 = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') num1++;
		else if (c == '\t') num2++;
		else if (c == '\n') num3++;
	}
	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}