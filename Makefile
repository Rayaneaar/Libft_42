CC_FLAGS = -Wall -Wextra -Werror

NAME = libft.a

GCC = gcc

SRC = $(wildcard *.c)

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o : %.c
	$(GCC) $(CC_FLAGS) -c $< -o $@

clean :
	rm -f *.o

.PHONY : clean
