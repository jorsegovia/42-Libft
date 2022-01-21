SRCS =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr \
			ft_tolower.c ft_toupper.c

SRCS_A =	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c \

SRCS_B =	

#PREF =	$(addprefix /base $(SRCS))

#PREF_A =	$(addprefix /add $(SRCS_A))

#PREF_B =	$(addprefix /bonus $(SRCS_B))

OBJS = $(SRCS:.c=.o)
 
OBJS_A = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(OBJS) $(OBJS_A)
		ar rcs $(NAME) $(OBJS) $(OBJS_A)
		ranlib $(NAME)

base:	$(OBJS)
		ar rcs $(NAME) $(OBJS)
		ranlib $(NAME)

add:	$(OBJS) $(OBJS_A)
		ar rcs $(NAME) $(OBJS) $(OBJS_A)
		ranlib $(NAME)

bonus:	$(OBJS) $(OBJS_A) $(OBJS_B)
		ar rcs $(NAME) $(OBJS) $(OBJS_A) $(OBJS_B)
		ranlib $(NAME)

TEST:	$(OBJS) $(OBJS_A)
		cc -o TEST $(OBJS) $(OBJS_A)

clean:
		$(RM) $(OBJS) $(OBJS_A) $(OBJS_B)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all add bonus clean fclean re