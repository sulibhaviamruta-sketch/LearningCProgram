#include<stdio.h>
int main(){
    float celsius;
    scanf("%f",&celsius);
    float kelvin = celsius + 273.15;
    float fahrenheit = celsius * 1.80 + 32.00;
    printf("%f,%f",kelvin,fahrenheit);
    return 0;
}