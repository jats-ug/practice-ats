#include <stdio.h>

int tally(void) {
	int res = 0, c;

	while ((c = fgetc(stdin)) >= 0) {
		res += c;
	}

	return res;
}

int main(void) {
	int res = tally();
	printf("res=%d\n", res);
}
