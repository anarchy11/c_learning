#include <stdio.h>

// #define LOWER 0;
// #define UPPER 100;
// #define STEP 20;

void calculate_fahrenheit(int lower, int upper, int step) {
    int fahrenheit;
    float celsius;
    
    for(fahrenheit = lower; fahrenheit <= upper; fahrenheit += step) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%3d %6.1f\n", fahrenheit, celsius);
    }
}


int main() {
    int a, b, c;
    printf("Welcome to calculate fahrenheit to celsius\n");
    printf("Enter the lower number : ");
    scanf("%d", &a);
    printf("Enter the upper number : ");
    scanf("%d", &b);
    printf("Enter the step number : ");
    scanf("%d", &c);

    calculate_fahrenheit(a, b, c);
}