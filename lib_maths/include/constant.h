/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** header of constant
*/

#ifndef CONSTANT_H_
#define CONSTANT_H_

#define PI 3.14159
#define E 2.71828

extern int libmaths_error;

typedef enum
{
    NOT_IN_RANGE,
    NEG_NIR,
    NEG_NUL_NIR,
    MATRICE_NEQUAL_SIZE,
    MATRICE_INVALID_SIZE
} libmaths_error_msg;

#endif