/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** my_cos(): calculates the cosine of an angle,
** my_arccos(): calculates the arccosine of an angle.
*/

#include "../include/trigonometry.h"

float my_cos(float x)
{
    float top = 0;
    float bot = 0;
    float sum = 0;
    float total = 0;

    for (int it = 0; it < 7; it++) {
        top = my_pow(-1, it) * my_pow(x, 2 * it);
        bot = my_fac(2 * it);
        sum = (top / bot);
        total += sum;
    }
    return (total);
}

float my_arccos(float x)
{
    float atan = my_arctan(my_sqrt(1 - my_pow(x, 2)) / (1 + x));

    return (2 * atan);
}