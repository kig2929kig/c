#include<stdio.h>
int function(int num);

int main() {
	int num = 5;
	num = function(num);
	printf("%d\n", num);
	num++;
	printf("%d\n", num);
	return 0;
}

int function(int num) {
	++num;
	return num++;
}