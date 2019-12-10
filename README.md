# Lib_maths

This library is a recode of the C maths library, not all the function are available but the labrary will evolve in the times.

## Header:

- [**algebra.h**](##algebra.h): main header for all the algebra function.
- [**trigonometry.h**](#trigonometry.h): main header for all the trygonometry.h.
- [**constant.h**](constant.h): heade rfor all maths constant (like π and e).

## algebra.h:

- **my_pow**: calcul a the pow of a number.
- **my_sqrt**: calcul the squart of a number.
- **my_fac**: calcule the factoriel of a number (not so fast).
- **my_sfac**: methode to calcul the factoriel of a number faster than **my_fac** . `Work in progress`
> all this function does not manage all types of entry

## trigonometry.h:

- **my_atan2**: calcul angle from 2 radians position.
- **my_arctan**: calcul the arctagent of an angle.
- **my_cos**: calcul the cosinus of an angle.
- **my_sin**: calcul the sinus of an angle.

## constant.h:

- **PI** (π): defined by: `3.14159` 
- **E** (exp): defined by: `2,71828`
> TODO: function to calcul constant.

# Makefile:

## Feature:

- **lib_maths**: compile the library.
- **all**: compile the library like (**lib_maths**).
- **clean**: delete all the object file (`.o`).
- **fclean**: call **clean** and ddelete the library (`.a`).
- **re**: call **fclean**  and **all** the recompile all the library.

## Compilation:
to compile the library you just need to do this:
```
make lib_maths
```
or
```
make
```
The `libmaths.a` will by create on currente directory.
To use it in a programme you need to add this two parametres:
```
-L./yout_directory_to_the_lib/ -I./yout_directory_to_the_lib/include/ -lmaths
```

## Author:

PREVOST "DipStax" Hugo
hugo.prevost@epitech.eu