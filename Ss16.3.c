#include <stdio.h>

void tinhTong(int *num1, int *num2, int *result);
int main(){
	int num1=6;
	int num2=29;
	printf("%d, %d\n", num1, num2);
	int sum;
	tinhTong(&num1,&num2, &sum);
	printf("Tong hai so tren la: %d",sum);
	return 0;
}
tinhTong(int *num1, int *num2,int *result){
	*result=*num1+*num2;
}
