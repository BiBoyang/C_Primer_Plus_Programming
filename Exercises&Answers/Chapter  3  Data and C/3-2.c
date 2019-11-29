#include <stdio.h>

int main(void) {
    int ascii_code;
    
    printf("Enter an ASCII code value:\n");
    scanf("%d", &ascii_code);
    printf("The character having ASCII code %d is %c.\n", ascii_code, ascii_code);
    
    return 0;
}
