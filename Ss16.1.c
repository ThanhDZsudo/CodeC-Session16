#include <stdio.h>

int main(){
	int num=6;
	int *numPtr=&num;
	printf("Gia tri cua bien number la: %d\n", num);
	printf("Gia tri cua bien number la: %d\n", *numPtr);
	printf("Dia chi cua bien number la: %d\n", &num);
	printf("Dia chi cua bien number la: %d\n", numPtr);

	return 0;
}
