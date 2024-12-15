#include<stdio.h>

void updateArr(int *arr, int pos, int newValue) {
	arr[pos]=newValue;
}

int main(){
	int a[]= {18, 6, 26 , 1, 7};
	int size=sizeof(a)/sizeof(a[0]);
	printf("Mang ban dau:\n");
	int i;
	for(i=0; i<size; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	updateArr(a, 4, 12);
	printf("Mang sau khi cap nhat:\n");
	for(i=0; i<size; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
