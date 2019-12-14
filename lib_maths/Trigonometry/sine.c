/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** my_sin(): calculates the sine of an angle,
** my_arcsin(): calculates the arcsine of an angle.
*/

#include "../include/trigonometry.h"

float my_sin(float x)
{
    float top = 0;
    float bot = 0;
    float sum = 0;
    float total = 0;

    for (int it = 0; it < 5; it++) {
        top = my_pow(x, 2 * it + 1);
        bot = my_fac(2 * it + 1);
        sum = my_pow(-1, it) * (top / bot);
        total += sum;
    }
}

float my_arcsin(float x)
{
    float atan = my_arctan(x / (1 + my_sqrt(1 - my_pow(x, 2))));

    return (2 * atan);
}