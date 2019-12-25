/*
** DipStax, 15 December 2019
** lib_maths
** File description:
** my_ln(): calculs the natural logarithm of numbers,
*/

#include "../include/algebra.h"

float my_ln(float x)
{
    float top = 0;
    float sum = 0;

    if (x <= 0)
        return (0);
    for (int it = 1; it < 20; it++) {
        top = my_pow(-1, it - 1) * my_pow((1 / x) - 1, it);
        sum += top / it;
    }
    return (sum);
}