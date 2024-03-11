FILES = ft_printf.c ft_put_all_numbers.c ft_punt_hexa.c ft_putnbr.c ft_putchar.c ft_putstr.c ft_strlen.c num_sinsigned.c 
OBJECTS = $(FILES:.c=.o)
FLAGS = -Wall -Werror -Wextra
NAME=libftprintf.a

all:$(NAME)

$(NAME):$(OBJECTS)	
	@ar crs $(NAME) $(OBJECTS)
%.o: %.c
	@gcc $(FLAGS) -c $< -o $@
clean:
	@rm -f $(OBJECTS)

fclean:
	@rm -f $(NAME) $(OBJECTS)
re : fclean all

.PHONY: all clean fclean re
