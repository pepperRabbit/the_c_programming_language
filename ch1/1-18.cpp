#include <cstdio>

int getline(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int solve(char s[]) {
	int count = 0;
	while (s[count] != '\n') {
		count++;
	}
	count--;
	while (count >= 0 && (s[count] == ' ' || s[count] == '\t')) {
		count--;
	}
	if (count >= 0) {
		s[++count] = '\n';
		s[++count] = '\0';
	}
	return count;
}

int main() {
	int len;
	char s[1000];
	while ((len = getline(s,1000)) > 0) {
		if (solve(s) > 0) {
			printf("%s", s);
		}
	}
	return 0;
}