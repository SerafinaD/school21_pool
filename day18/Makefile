CFLAGS = -c 
NAME = ft_cat
SOURCE = ft_cat.c 
OBJECTS = $(SOURCE:.c=.o)


all: $(NAME)


$(NAME):
	gcc $(CFLAGS) $(SOURCE)
	gcc $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

norme:
	norminette *.c *.h