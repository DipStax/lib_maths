/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** my_fac(): calcule the factorial of a number (not so fast),
** my_sfac(): fastest methode to calcul the factorial of a number (WIP).
*/

#include "../include/algebra.h"

long long int my_fac(int nb)
{
    long long int total = 1;

    if (nb == 0)
        return  (1);
    if (nb < 0)
        for (int it = -1; it >= nb; it--)
            total *= it;
    else
        for (int it = 1; it <= nb; it++)
            total *= it;
    return (total);
}

long long int my_sfac(int nb) // WIP
{
    float first = my_sqrt(2 * PI * nb);
    float second = my_pow(nb / E, nb);
    long long int result = first * second;

    return (result);
}
