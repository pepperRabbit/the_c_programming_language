#include <cstdio>

int main() {
	bool flag = false;
	int c;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			if (!flag) flag = true;
			putchar(c);
		}
		else {
			if (flag) {
				flag = false;
				putchar('\n');
			}
		}
	}
	return 0;
}