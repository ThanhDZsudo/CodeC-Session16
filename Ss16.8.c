#include <stdio.h>

void daoNguocChuoi(char *inputString, char *reverseString) {
    int length = strlen(inputString); 
    for (int i = 0; i < length; i++) {
        *(reverseString + i) = *(inputString + length - i - 1);
    }
    *(reverseString + length) = '\0';
}
int main() {
    char inputString[100], reverseString[100];
    printf("Moi ban nhap mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    daoNguocChuoi(inputString, reverseString);
    printf("Chuoi ban dau la: %s\n", inputString);
    printf("chuoi dao nguoc la: %s\n", reverseString);
    
    return 0;
}
