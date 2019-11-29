#include <stdio.h>
#include <string.h>

int main(void) {
	char fname[10];
	
	printf("Please enter your first name:\n");
	scanf("%s", fname);
	
	printf("\"%s\"\n", fname);
	printf("\"%20s\"\n", fname);
	printf("\"%-20s\"\n", fname);
	printf("%*s\n", strlen(fname) + 3, fname);
	
	return 0;
}
