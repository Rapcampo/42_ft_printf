NAME	=	libftprintf.a
CC	=	cc
CFLAGS	=	-Wextra -Werror -Wall
SRCS = 
OBJS	=	$(SRCS:.c=.o)

RM	=	rm -f
LIBC	=	ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
