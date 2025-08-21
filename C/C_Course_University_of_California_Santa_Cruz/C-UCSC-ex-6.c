// Created by Elena Petkovska on 5.4.2025.
//
/* C Course University of California Santa Cruz */

//Circle and Area of a circle

#include <stdio.h>

#define PI 3.14159

/* BTW, I know the first 100 digits of PI, hehe:
 * 3.1415926535 8979323846 2643383279 5028841971
 *   6939937510 5820974944 5923078164 0628620899
 *   8628034825 3421170679 */

int main()
{
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;
}
