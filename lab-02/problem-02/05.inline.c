#include <stdio.h>
#include <stdbool.h>

int main() {
	bool is_whitespace;
	char c = getchar();
	asm(
		"mov $0, %1;"
		"cmp $32, %0;"
		"jne L0;"
		"mov $1. %1;"
		"L0:"
		"cmp $9, %0;"
		"jne L1;"
		"mov $1, %1;"
		"L1:"
		: "+m"(c)
		: "m"(is_whitespace)
		:
	);

	if (is_whitespace) {
		puts("whitespace");
	} else {
		puts("Not a whitespace");
	}
	return 0;
}
