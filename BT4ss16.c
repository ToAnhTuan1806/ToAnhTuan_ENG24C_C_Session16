#include<stdio.h>

void printArray(int *arr, int size) {
	int i;
	for(i=0; i<size; i++) {
		printf("Phan tu thu %d: %d\n",i, *(arr+i));
	}
}

int main(){
	int a[]= {18, 6, 26 , 1, 7};
	int size=sizeof(a)/sizeof(a[0]);
	printArray(a, size);
	
	return 0;
}
