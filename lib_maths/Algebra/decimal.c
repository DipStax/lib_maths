/*
** DipStax, 15 December 2019
** lib_maths
** File description:
** my_fmod(): returns the remainder of x divided by y,
** my_modf(): returns the decimal part of the first number and set the
**            second to the entier part
*/

double my_fmod(double nb, double *ent)
{
    (*ent) = (int)nb;

    return (nb - (*ent));
}

double my_modf(double x, double y)
{
    double div = x / y;
    double ent = 0;
    double dec = my_fmod(div, &ent);

    return (dec * y);
}