#include<stdio.h>

void sum(int *num1, int *num2, int *result) {
	*result=*num1+*num2;
}

int main(){
	int x=18;
	int y=6;
	int result;
	
	sum(&x, &y, &result);
	printf("Tong cua %d va %d la: %d\n", x, y, result);
	
	return 0;
}
