NAME		= libft.a


SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memchr.c\
			  ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
			  ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c\
			  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c\
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_memmove.c

OBJS		= ${SRCS:.c=.o}

INCLUDES	= includes

cc			= gcc
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra

LIB			= libft.a

.c.o:
			${CC} ${CFLAGS} -I${INCLUDES} -c $< -o ${<:.c=.o}

all:		${LIB}

${LIB}:		${OBJS}
			ar rc ${LIB} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${LIB}

re:			fclean all

.PHONY:		all clean fclean re