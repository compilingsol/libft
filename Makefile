NAME	= libft.a
SRC	= ft_isalpha.c ft_toupper.c\
	ft_isdigit.c ft_tolower.c\
	ft_isalnum.c ft_strchr.c\
	ft_isascii.c ft_strrchr.c\
	ft_isprint.c ft_strncmp.c\
	ft_itoa.c \
	ft_strlen.c ft_memchr.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c ft_memcmp.c\
	ft_memmove.c ft_strnstr.c\
	ft_strlcpy.c ft_atoi.c\
	ft_strlcat.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c
OBJS	= $(SRC:.c=.o)

BSRC	= ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

BOBJS = $(BSRC:.c=.o)
INCS = libft.h
LIBC = ar rc
LIBA = ar r
CFLAGS = -Wall -Wextra -Werror -fpic

all: $(NAME)

%.o: %.c $(INCS)
	cc $(CFLAGS) -c $(SRC)
	cc $(CFLAGS) -c $(BSRC)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	rm -f *.o
	rm -f *.so

fclean: clean
	rm -f $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BSRC)
	cc -nostartfiles -shared -o libft.so $(OBJS) $(BOBJS)

re: fclean all

bonus:	$(OBJS) $(BOBJS)
		ar rcs $(NAME) $(OBJS) $(BOBJS)

.PHONY: all clean fclean re bonus
