/*
** DipStax, 27 March 2020
** lib_maths
** File description:
** matrice_create(): create a matrice
** matrice_identity(): change the data of the matrix to an identity matrice data
** matrice_add(): calculates the additions of two matrice
** matrice_sub(): calculates the substraction of two matrice
** matride_prod(): calcule the product of two matrice
*/

#include "algebra.h"

matrice_t *matrice_create(int size_x, int size_y)
{
    matrice_t *matrice = malloc(sizeof(matrice_t));

    matrice->m_size_x = size_x;
    matrice->m_size_y = size_y;
    matrice->m_data = malloc(sizeof(double) * size_y);
    for (int y = 0; y < size_y; y++) {
        matrice->m_data[y] = malloc(sizeof(double) * size_x);
        for (int x = 0; x < size_x; x++) {
            matrice->m_data[y][x] = 0;
        }
    }
    return (matrice);
}

void matrice_identity(matrice_t *matrice)
{
    for (int y = 0; y < matrice->m_size_y; y++) {
        for (int x = 0; x < matrice->m_size_x; x++) {
            if (y == x) {
                matrice->m_data[y][x] = 1;
            } else {
                matrice->m_data[y][x] = 0;
            }
        }
    }
}

matrice_t *matrice_add(matrice_t *matrice1, matrice_t *matrice2)
{
    matrice_t *matrice = 0;

    if (matrice1->m_size_y != matrice2->m_size_y ||
        matrice1->m_size_x != matrice2->m_size_x) {
        libmaths_error = MATRICE_NEQUAL_SIZE;
        return (0);
    }
    matrice = matrice_create(matrice1->m_size_x, matrice2->m_size_y);
    for (int y = 0; y < matrice1->m_size_y; y++) {
        for (int x = 0; x < matrice1->m_size_x; x++) {
            matrice->m_data[y][x] = matrice1->m_data[y][x] + matrice2->m_data[y][x];
        }
    }
    return (matrice);
}

matrice_t *matrice_sub(matrice_t *matrice1, matrice_t *matrice2)
{
    matrice_t *matrice = 0;

    if (matrice1->m_size_y != matrice2->m_size_y ||
        matrice1->m_size_x != matrice2->m_size_x) {
        libmaths_error = MATRICE_NEQUAL_SIZE;
        return (0);
    }
    matrice = matrice_create(matrice1->m_size_x, matrice2->m_size_y);
    for (int y = 0; y < matrice1->m_size_y; y++) {
        for (int x = 0; x < matrice1->m_size_x; x++) {
            matrice->m_data[y][x] = matrice1->m_data[y][x] - matrice2->m_data[y][x];
        }
    }
    return (matrice);
}

matrice_t *matrice_prod(matrice_t *matrice1, matrice_t *matrice2)
{
    matrice_t *matrice = 0;

    if (matrice1->m_size_y != matrice2->m_size_x ||
        matrice1->m_size_x != matrice2->m_size_y) {
        libmaths_error = MATRICE_INVALID_SIZE;
        return (0);
    }
    matrice = matrice_create(matrice1->m_size_x, matrice2->m_size_y);
    for (int y = 0; y < matrice1->m_size_y; y++) {
        for (int x = 0; x < matrice2->m_size_x; x++) {
            matrice->m_data[y][x] += matrice2->m_data[y][x] * matrice2->m_data[x][y];
        }
    }
    return (matrice);
}