#include<stdio.h>

void swap(int *a, int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int x=18;
	int y=6;
	
	printf("Gia tri ban dau:\n");
	printf("%d\n",x);
	printf("%d\n",y);
	
	swap(&x, &y);
	printf("Gia tri sau khi hoan doi:\n");
	printf("%d\n",x);
	printf("%d\n",y);
	
	return 0;
}
