#include <stdio.h>

void array(int *arr, int size, int index, int n );
int main(){
	int arr[]={7,5,9,6,2};
	int size =sizeof(arr)/sizeof(int);
	int index,n;
	printf("Phan tu trong mang la: \n");
	for(int i=0; i<size;i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	printf("Moi ban nhap vi tri muon chen: ");
	scanf("%d", &index);
	printf("Moi ban nhap gia tri moi: ");
	scanf("%d", &n);
	array(arr, size, index, n);
	printf("Mang sau khi cap nhap la: \n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
	return 0;
}
array(int *arr, int size, int index, int n ){
	if(index>=0&&index<size){
		arr[index]=n;
	}else{
		printf("Vi tri khong hop le");
	}
}
