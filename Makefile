BASE_SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c  ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr \
			ft_tolower.c ft_toupper.c

ADD_SRCS =	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c \

BONUS_SRCS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
				ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

BASE_OBJS = $(SRCS:.c=.o)

ADD_OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(BASE_OBJS) $(ADD_OBJS)
		ar rcs $(NAME) $(BASE_OBJS) $(ADD_OBJS)

base:	$(BASE_OBJS)
		ar rcs $(NAME) $(BASE_OBJS)

add:	$(BASE_OBJS) $(ADD_OBJS)
		ar rcs $(NAME) $(BASE_OBJS) $(ADD_OBJS)

bonus:	$(BASE_OBJS) $(ADD_OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(BASE_OBJS) $(ADD_OBJS) $(BONUS_OBJS)

TEST:	$(BASE_OBJS) $(ADD_OBJS)
		cc -o TEST $(BASE_OBJS) $(ADD_OBJS)

clean:
		$(RM) $(BASE_OBJS) $(ADD_OBJS) $(BONUS_OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all bonus clean fclean re