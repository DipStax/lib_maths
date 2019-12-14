/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** my_pow(): calculates the pow of a number,
** my_sqrt(): calculates the squart of a number.
*/

#include "../include/algebra.h"

float my_pow(float nb, int it)
{
    float total = 1;

    if (it == 0)
        return (1);
    while (it > 0) {
        total *= nb;
        it--;
    }
    return (total);
}

float my_sqrt(float nb)
{
    float result = 0;
    float add_it = 1;
    float tmp = add_it;

    if (nb <= 0)
        return (0);
    while (nb - result > 0.001) {
        result = tmp * tmp;
        if (result == nb)
            break;
        if (result > nb) {
            tmp -= add_it;
            add_it /= 10;
            result = 0;
        } else {
            tmp += add_it;
        }
    }
    return (tmp);
}
