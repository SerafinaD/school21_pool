CFLAGS = -c 
NAME = do-op
SOURCE = ft_do_op.c ft_atoi.c ft_oper.c
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
	norminette -R CheckForbiddenSourceHeader *.c *.h