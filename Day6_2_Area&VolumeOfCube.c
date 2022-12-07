#include<stdio.h>

int main(){

    float a;
    float area,volume;

    printf("Enter size of any side of a cube : ");
    scanf("%f",&a);

    area = 6 * (a * a);
    volume = a * a * a;

    printf("\n area of cube is: %.3f",area);
    printf("\nVolume of cube is : %.3f",volume);

    return 0;
}

