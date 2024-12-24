#include <stdio.h>
void deleteElement(int *a, int index, int *n);
int main(){
    int *arr;
    int n;
    printf("Moi ban nhap so luong phan tu: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    deleteElement(arr, 2, &n);
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
	free(arr);
    return 0;
}
void deleteElement(int *a,int index,int *n){
    if(index<0||index>*n){
        printf("Vi tri xoa khong hop le!\n");
        return 0;
    }
    for(int i=index; i<*n-1; i++){
        a[i]=a[i+1];
    }
    a=realloc(a,(*n-1) *sizeof(int));
    (*n)--;
}

