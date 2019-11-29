#include <stdio.h>

int main(void) {
	int age_years, age_seconds;
	
	printf("Please enter your age in years:\n");
	scanf("%d", &age_years);
	age_seconds = age_years * 3.156e7;
	printf("Your age in seconds is %d seconds.\n", age_seconds);
	
	return 0;
}
