/*
** DipStax, 10 December 2019
** lib_maths
** File description:
** rad_to_deg(): convert radians to degrees,
** deg_to_rad(): convert degrees to radians.
*/

#include "../include/convertion.h"

float rad_to_deg(float rad)
{
    return ((rad * 180) / PI);
}

float deg_to_rad(float deg)
{
    return ((deg * PI) / 180);
}