#include <stdio.h>

void array(int *arr,int size);
int main(){
	int arr[]={3,5,6,4,1,9};
	int size=sizeof(arr)/sizeof(int);
	printf("Mang truoc khi sap xep la: \n");
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n", i,arr[i] );
	}
	array(arr,size);
	return 0;
}
array(int *arr, int size){
printf("Mang sau khi sap xep la: \n");
	for( int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(*(arr +j)>*(arr+j +1)){
			int temp=*(arr +j);
			*(arr +j)=*(arr+j +1);
			*(arr+j +1)=temp;
			}
		}
	}
	for(int i=0;i<size;i++){
	printf("arr[%d]=%d\n", i,arr[i] );
	}
}
