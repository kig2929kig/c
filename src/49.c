#include<stdio.h>

int main() {
	
	int a = 30; float b = 3.14; char c = 'A';
	char d[6] = {'K', 'O', 'R', 'E', 'A', '\0'};
	printf("%d %f %c %s\n", a, b, c, d);
	printf("int형 데이터타입의 크기 : %d\n", sizeof(a));
	printf("char형 데이터타입의 크기 : %d\n", sizeof(c));
	return 0;
}