/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** my_fac(): calculates the factorial of a number (not so fast),
** my_sfac(): fastest methode to calculates the factorial of a number,
** my_bincoef(): calculates the binomial coeffient between two number.
*/

#include "../include/algebra.h"

long long int my_fac(int nb)
{
    long long int total = 1;

    if (nb == 0)
        return  (1);
    if (nb < 0) {
        for (int it = -1; it >= nb; it--) {
            total *= it;
        }
    } else {
        for (int it = 1; it <= nb; it++) {
            total *= it;
        }
    }
    return (total);
}

long long int my_sfac(int nb)
{
    float first = my_sqrt(2 * PI * nb);
    float second = my_pow(nb / E, nb);
    long long int result = first * second;

    return (result);
}

long long int my_bincoef(int up, int down)
{
    if (down < 0 || down > up) {
        libmaths_error = NOT_IN_RANGE;
        return (-1);
    }
    long long int up_side = my_sfac(up);
    long long int down_side = my_sfac(down) * my_sfac(up - down);

    return (up_side / down_side);
}