#include <stdio.h>
int main(void) {
    char fname[20], lname[20];
        
    printf("Please enter your first name:\n");
    scanf("%s", fname);
    printf("Please enter your last name:\n");
    scanf("%s", lname);
    printf("Your name is %s, %s.\n", lname, fname);
    
    return 0;
}

