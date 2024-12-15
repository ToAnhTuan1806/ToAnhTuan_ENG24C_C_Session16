#include<stdio.h>

int searchElement(int *arr, int size, int value){
	int i;
	for(i=0; i<size; i++){
		if(arr[i]== value){
			return i;
		}
	
	}
	return -1;
}

int main(){
	int size;
	printf("Nhap kich thuoc cua mang: ");
	scanf("%d", &size);
	
	int a[size];
	int value;
	printf("Nhap cac phan tu cua mang: \n");
	int i;
	for(i=0; i<size; i++){
		scanf("%d", &a[i]);
	}
	printf("Nhap gia tri can tim: ");
	scanf("%d", &value);
	
	int pos=searchElement(a, size, value);
	if(pos!=-1){
		printf("Phan tu %d tim thay tai vi tri %d\n", value, pos);
	} else {
		printf("Khong tim thay phan tu %d trong mang", value);
	}
	
	return 0;
}
