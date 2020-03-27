/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** header for all the algebra function
*/

#ifndef ALGEBRA_H_
#define ALGEBRA_H_

#include "constant.h"

struct matrice
{
    double **m_data;
    int m_size_x;
    int m_size_y;
} typedef matrice_t;

matrice_t *matrice_create(int size_x, int size_y);
void matrice_identity(matrice_t *matrice);
matrice_t *matrice_sub(matrice_t *matrice1, matrice_t *matrice2);
matrice_t *matrice_prod(matrice_t *matrice1, matrice_t *matrice2);
matrice_t *matrice_add(matrice_t *matrice1, matrice_t *matrice2);

double my_fmod(double nb, double *ent);
double my_modf(double x, double y);

long long int my_fac(int nb);
long long int my_sfac(int nb);
long long int my_bincoef(int up, int down);

float my_ln(float x);

float my_pow(float nb, int it);
float my_sqrt(float nb);

#endif
