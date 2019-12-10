/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** my_sin(): calcul the sine of an angle.
*/

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