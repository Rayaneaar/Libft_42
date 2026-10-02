NAME = libft.a

GCC = gcc

SRC = $(wildcard ./src/*.c)

OBJ = $(SRC:%.c=%.o)

HEADER_PATH = ./include/

CC_FLAGS = -Wall -Wextra -Werror -I$(HEADER_PATH)

all : $(NAME)

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)
	rm -f ./src/*.o

%.o : %.c
	$(GCC) $(CC_FLAGS) -c $< -o $@ 

clean :
	rm -f ./src/*.o

fclean:
	rm -f ./src/*.o *.a

test : $(NAME)
	gcc ./testing/main.c $(CC_FLAGS) $(NAME)
	./a.out

.PHONY : clean fclean

