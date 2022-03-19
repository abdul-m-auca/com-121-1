#include <stdio.h>

int main() {
	puts("what is your full name?");
	char name[512];
	fgets(name,512, stdin);
	printf("Hello, %s!\n", name);
	return 0;
}
