#include <stdio.h>

int main(void) {
    float height_centimeters, height_inches;
    float centimeters_to_inch = 2.54;
    
    printf("Please enter your height in centimeters:\n");
    scanf("%f", &height_inches);
    height_centimeters = height_inches * centimeters_to_inch;
    printf("Your height in inches is %.2fcm\n", height_centimeters);
    
    return 0;
}

