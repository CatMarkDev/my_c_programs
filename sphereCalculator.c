// Name: sphereCalculator.c
// Date: 2024-06-01
// Description: This program calculates the volume of a sphere based on the radius provided by the user. 
// C23 language standard version is used for this project.
// Author: CatMarkDev

#include <stdio.h>

int main(void) {

    printf("Enter the radius of the sphere: ");

    float radius;

    scanf("%f", &radius);

    float volume = (4.0f / 3.0f) * 3.14159f * radius * radius * radius;
    printf("The volume of the sphere is: %.2f\n", volume);

    return 0;

}