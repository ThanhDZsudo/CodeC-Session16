#include <stdio.h>

int swap(int *number1,int *number2);
int main(){
	int num1=6;
	int num2=29;
	printf("Number1 truoc khi hoan doi la: %d\n", num1);
	printf("Number2 truoc khi hoan doi la: %d\n", num2);
	printf("\n");
	swap(&num1, &num2);
	printf("Number1 sau khi hoan doi la: %d\n",num1);
	printf("Number2 sau khi hoan doi la: %d", num2);
	return 0;
}
swap(int *num1, int *num2){
	int temp= *num1;
	*num1=*num2;
	*num2=temp;
}
