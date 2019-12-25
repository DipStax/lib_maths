##
## DipStax, 10 December 2019
## lib_maths
## File Description:
## Makefile
##

NAME=		lib_maths

SRC	=		Algebra/factorial.c \
			Algebra/power.c \
			Algebra/decimal.c \
			Algebra/logarithm.c \
			Convertion/convertion_rad_deg.c \
			Trigonometry/cosine.c \
			Trigonometry/sine.c \
			Trigonometry/tangent.c \

OBJ =		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc libmaths.a $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f libmaths.a

re:			fclean all

.PHONY:		all clean flcean re
