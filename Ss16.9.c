#include <stdio.h>

void addElement(int *arr,int value,int index,int *n);
//arr= realloc(arr,(*n+1)*sizeof(int))

int main(){
	int *arr;
	int n;
	printf("Moi ban nhap so luong phan tu: ");
	scanf("%d",&n);
	arr= (int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d:",i+1);
		scanf("%d",arr+i);
	}
	addElement(arr,30,3,&n);
	for(int i=0; i<n; i++){
		printf("%d \t",*(arr+i));
	} 
	return 0;
}

addElement(int *arr,int value,int index,int *n){
	if(index<0||index>*n){
		printf("vi tri them khong hop le!");
		return 0;
	}
	arr = realloc(arr,(*n+1)*sizeof(int));
	for (int i=*n; i<index; i--){
		*(arr+i)=*(arr+i-1);
	}
	*(arr+index)=value;
	(*n);
}
