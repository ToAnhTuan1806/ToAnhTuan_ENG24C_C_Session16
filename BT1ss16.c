#include<stdio.h>

int main(){
	int n=18;
	int *ptr=&n;
	
	printf("Gia tri cua n: %d\n", n);
	printf("Dia chi cua n: %u\n", (unsigned int)&n);
	
	return 0;
}
