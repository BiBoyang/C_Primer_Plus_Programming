#include <stdio.h>

int main(void) {
    float cups, pints, ounces, tablespoons, teaspoons;
    
    printf("Please enter a volume in cups:\n");
    scanf("%f", &cups);
    
    pints = cups / 2;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;
    
    printf("%.0f cups equal %.2f pints.\n", cups, pints);
    printf("%.0f cups equal %.2f ounces.\n", cups, ounces);
    printf("%.0f cups equal %.2f tablespoons.\n", cups, tablespoons);
    printf("%.0f cups equal %.2f teaspoons.\n", cups, teaspoons);
    
    return 0;
}
