#include <cstdio>

int getline(char s[], int lim) {
	int i, c;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') s[i++] = c;
	s[i] = '\0';
	return i;
}

void swap(char &a, char &b) {
	char temp;
	temp = a;
	a = b;
	b = temp;
}

void reverse(char s[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int j = len - 2 - i;
		if (i >= j) break;
		swap(s[i], s[j]);
	}
}

int main() {
	char s[1000];
	int len;
	while ((len = getline(s, 1000)) > 0) {
		reverse(s, len);
		printf("%s", s);
	}
	return 0;
}