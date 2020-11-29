#include <cstdio>

#define NUM 8

int main() {
	int c, pos = 0, blanks = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			blanks = NUM - (pos % 8);
			while (blanks > 0) {
				putchar(' ');
				blanks--;
			}
		}
		else if (c == '\n') {
			putchar(c);
			pos = 0;
		}
		else {
			putchar(c);
			pos++;
		}
	}
	return 0;
}