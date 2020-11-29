#include <cstdio>

int main() {
	int c;
	bool flag = false;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (flag) continue;
			flag = true;
		}
		else flag = false;
		putchar(c);
	}
	return 0;
}