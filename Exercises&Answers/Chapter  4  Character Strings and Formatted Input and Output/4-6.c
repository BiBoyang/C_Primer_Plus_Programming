#include <stdio.h>
#include <string.h>

int main(void) {
    char firstname[20];
    char lastname[20];

    printf("Enter your first and last name: ");
    scanf("%s %s", firstname, lastname);
    printf("\n");
    printf("%s %s\n", firstname, lastname);
    printf("%*lu %*lu\n", // right justified
           (int) strlen(firstname), strlen(firstname),
           (int) strlen(lastname), strlen(lastname));
    printf("\n");
    printf("%s %s\n", firstname, lastname);
    printf("%-*lu %-*lu\n", // left justified
           (int) strlen(firstname), strlen(firstname),
           (int) strlen(lastname), strlen(lastname));
    printf("\n");

    return 0;
}
