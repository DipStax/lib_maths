
# Lib_maths

This library is a home made C maths library, not all the functions are available but the library will evolve along the time.

# Header:

- [**algebra.h**](#algebra.h): main header for every algebra functions.
- [**constant.h**](#constant.h): header for every maths constants (like π and e).
- [**convertion.h**](#convertion.h): header fior every convertion functions.
- [**trigonometry.h**](#trigonometry.h): main header for every trygonometry functions.

# algebra.h:

- **my_pow**: calculates the power of a number.
- **my_sqrt**: calculates the square root of a number.
- **my_fac**: calculates the factorial of a number (not so fast).
- **my_sfac**: method to calculate the factorial of a number faster than **my_fac**. `+-1`
- **my_bincoef**: calculates the binomial coeficient between two number.
- **my_fmod**: give the rest of a division.
- **my_modf**: give in second parameter the integer and return the decimal part of a number.
- **my_ln**: calculates the natural logarithm of a number. `+-0.01`
> all these functions do not manage all types of entry

# Matrice:

- **create**: return a void matrice of a certain size.
- **identity**: change the data of the matrice to a identity matrice.
- **sub**: give the result matrice of a substraction between two matrice

- **add**:  give the result matrice of a adddiction between two matrice

- **prod**:  give the result matrice of a product between two matrice.

> the data type of the matrice is: **double**
# trigonometry.h:

- **my_atan2**: calculates angle from 2 radians position.
- **my_arctan**: calculates the arctangent of an angle.
- **my_cos**: calculates the cosine of an angle.
- **my_arccos**: calculates the arcosine of an angle.
- **my_sin**: calculates the sine of an angle.
- **my_arcsin**: calculates the arcsine of an angle.
- **my_arctanh**: calculates inverse hyperbolic tangent of an angle.
> All these functions return radians value.

# constant.h:

- **PI** (π): defined by: `3.14159`
- **E** (exp): defined by: `2.71828`
- **libmaths_error**: error output of the library.

# convertion.h:

- **rad_to_deg**: convert radians to degrees.
- **deg_to_rad**: convert degrees to radians.
> all these functions do not manage all types of entry

# Makefile:

## Feature:

- **lib_maths**: compiles the library.
- **all**: compiles the library like (**lib_maths**).
- **clean**: deletes all the objects files (`.o`).
- **fclean**: call **clean** and deletes the archive of the library (`.a`).
- **re**: call **fclean** and **all** it recompiles all the library.

## Compilation:

to compile the library you just need to do this:
```
make lib_maths
```
or
```
make
```
The `libmaths.a` will by created in the current directory.
To use it in a programme you need to add these two parameters:
```
-L./your_directory_to_the_library/ -I./your_directory_to_the_library/include/ -lmaths
```

## Author:

PREVOST "DipStax" Hugo
hugo.prevost@epitech.eu