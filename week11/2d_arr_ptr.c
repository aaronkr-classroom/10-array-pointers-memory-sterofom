#include <stdio.h>
#define ROWS 3
#define COLS 5

void printarr(char arr[ROWS][COLS]) {
	printf("배열의 상태:\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main() {
	char data[ROWS][COLS] = { 0 };
	char(*p)[COLS];
	p = data;
	printf("시작 전:\n");
	printarr(data);
	printf("press any key to continue\n");
	getchar();

	(*p)[1] = 3;
	(*(p + 1))[2] = 4;
	(*(p + 2))[4] = 5;

	printf("초기 배열의 상태:\n");
	printarr(data);
	printf("press any key to continue\n");
	getchar();

	p = data;
	p++;
	(*p)[0] = 7;
	(*p)[4] = 8;
	(*(p - 1))[3] = 9;

	printf("두 번째 수정 후 배열의 상태:\n");
	printarr(data);
	printf("press any key to continue\n");
	getchar();

	char* ptr = &data[0][0];
	*(ptr + 6) = 10;
	*(ptr + 10) = 11;
	*(ptr + 14) = 28;

	//ptr의 길이가 ROWS X COLS이므로 ptr의 인덱스가 ROWS X COLS-1까지 갈 수 있다.

	printf("포인터 산술연산 후 배열의 상태:\n");
	printarr(data);
	printf("press any key to continue\n");
	getchar();

	//첫번째와 세번째 행 바꾸기
	char tmp[COLS];
	for (int i = 0; i < COLS; i++) {
		tmp[i] = data[0][i];
		data[0][i] = data[2][i];
		data[2][i] = tmp[i];
	}
	printf("첫번때 행과 세번째 행 교환 후 배열의 상태:\n");
	printarr(data);
	printf("press any key to continue\n");
	getchar();

	return 0;
}