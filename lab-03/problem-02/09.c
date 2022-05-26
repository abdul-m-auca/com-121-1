#include <stdio.h>

void swap(int *p1, int *p2) {
	printf("Before swapping in fucntion : a = %d, b = %d\n", *p1, *p2);
	int t = *p1;
        *p1 =  *p2;
        *p2 = t;
	printf("After swapping in fucntion: a = %d, b = %d\n", *p1, *p2);
}
int main() {

	int a, b;
	scanf("%d %d", &a, &b);
	printf("Before swapping: a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("After swapping: a = %d, b = %d\n", a, b);
	return 0;
}
