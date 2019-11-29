#include <stdio.h>

int main(void) {
    const float BITS_PER_BYTE = 8;
    float downloadSpeedMps;
    float fileSizeMB;

    printf("Enter the download speed (in megabits/second): ");
    scanf("%f", &downloadSpeedMps);
    printf("Enter the file size (in megabytes): ");
    scanf("%f", &fileSizeMB);
    printf("At %.2f megabits per second, a file of %.2f megabytes"
           " downloads in %.2f seconds.\n", downloadSpeedMps, fileSizeMB,
           fileSizeMB * BITS_PER_BYTE / downloadSpeedMps);

    return 0;
}
