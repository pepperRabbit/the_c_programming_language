#include <cstdio>
#define LIMIT 80

int is_print(char s[]) {
	int c, count = 0;
	while ((c = getchar()) != EOF) {
		s[count++] = c;
		if (c == '\n') {
			s[count] = '\0';
			return count;
		}
	}
	return -1;
}

int main() {
	char s[1000];
	int cnt = 0;
	while ((cnt = is_print(s)) != -1) {
		if (cnt > LIMIT) printf("%s", s);
	}
	return 0;
}