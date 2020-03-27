/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** my_atan2(): calculates angle from 2 radians position,
** my_arctan(): calculates arctagent.
*/

#include"../include/trigonometry.h"

float my_atan2(float y, float x)
{
    if (y == 0) {
        return (0);
    } else if (x == 0) {
        if (y < 0) {
            return (-PI / 2);
        } else {
            return (PI / 2);
        }
    } else if (x > 0) {
        return (my_arctan(y / x));
    } else {
        if (y >= 0) {
            return (my_arctan(y / x) + PI);
        } else if (y < 0) {
            return (my_arctan(y / x) - PI);
        }
    }
}

float my_arctan(float x)
{
    float top = 0;
    float bot = 0;
    float sum = 0;
    float total = 0;

    for (int it = 0; it < 500; it++) {
        top = my_pow(x, 2 * it + 1);
        bot = 2 * it + 1;
        sum = my_pow(-1, it) * (top / bot);
        total += sum;
    }
    return (total);
}

float my_arctanh(float x)
{
    return (0.5 * my_ln((1 + x) / (1 - x)));
}