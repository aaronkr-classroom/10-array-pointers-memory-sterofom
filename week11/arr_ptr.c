#include <stdio.h>
#define SIZE 10

int main() {
	char data[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int result = 0, i;
	char* p = data;

	for (i = 0; i < SIZE; i++) {
		printf("지금 p: %p, result: %d\n",p, result);
		result = result + *p;
		p++;
	}
	printf("마지막 result: %d\n", result);
	return 0;
}