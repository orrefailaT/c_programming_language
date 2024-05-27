#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* print each word from input on a separate line */
int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			printf("\n");
		} else {
			printf("%c", c);
		}
	}
}
