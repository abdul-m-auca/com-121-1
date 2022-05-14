#include <stdio.h>

#define CHARACTERS_PER_ROW 16
#define FIRST_CHARACTER 33
#define LAST_CHARACTER 126
int main() {
	for (char c = FIRST_CHARACTER, counter = 1; c <=LAST CHARACTER; c++, counter++) {
		putchar(c);
		if (counter % CHARACTERS_PER_ROW ==0) {
			putchar('\n');
		}
	}
	putchar('\n');
	return 0;
}
