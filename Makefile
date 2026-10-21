NAME = libft.a

GCC = gcc

SRC = $(wildcard *.c)

OBJ = $(SRC:%.c=%.o)


CC_FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)
%.o : %.c libft.h

	$(GCC) $(CC_FLAGS) -c $< -o $@ 

clean :
	rm -f *.o

fclean:
	rm -f *.o *.a


.PHONY : clean fclean

