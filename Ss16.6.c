#include <stdio.h>

int array(int *arr,int size, int value);
int main(){
	int arr[]={3,5,6,4,1,9};
	int size=sizeof(arr)/sizeof(int);
	int value;
	printf("Nhap vao phan tu muon tim kiem: ");
	scanf("%d", &value);
	array(&arr, size, value);
	return 0;
}
	array(int *arr,int size, int value){
		for( int i=0;i<size;i++){
			if(*(arr+i)==value){
				printf("Phan tu ban muon tim o vi tri: %d", i);
				break;
			}else{
				printf("Khong tim thay phan tu");
				break;
			}
		}	
	}
