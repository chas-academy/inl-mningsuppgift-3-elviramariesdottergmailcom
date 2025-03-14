#include <stdio.h>
#include <math.h>


float calculate_hypotenuse(float kat1, float kat2) {

    return sqrt(pow(kat1, 2.0) + pow(kat2, 2.0));
}

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}