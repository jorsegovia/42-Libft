SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_tolower.c ft_toupper.c

ADDS	=	ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c

BONUSR	=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

#PREF	=	$(addprefix	base/,	$(SRCS))

#PREF_A	=	$(addprefix	/add,	$(ADDS))

#PREF_B	=	$(addprefix	/bonus,	$(BONUSR))

OBJS	=	$(SRCS:.c=.o)
#OBJS	=	$(PREF:.c=.o)
OBJS_A	=	$(ADDS:.c=.o)
#OBJS_A	=	$(PREF_A:.c=.o)
OBJS_B	=	$(BONUSR:.c=.o)
#OBJS_B	=	$(PREF_B:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a
BONUS	= .
#The variables are used to store the previous exec attempts

$(NAME):	$(OBJS)	$(OBJS_A)
			ar	rcs	$(NAME)	$(OBJS)	$(OBJS_A)
			ranlib	$(NAME)

#$(ADD):		$(OBJS)	$(OBJS_A)
#			ar	rcs	$(NAME)	$(OBJS)	$(OBJS_A)
#			ranlib	$(NAME)

$(BONUS):	$(OBJS)	$(OBJS_A)	$(OBJS_B)
			ar	rcs	$(NAME)	$(OBJS)	$(OBJS_A)	$(OBJS_B)
			ranlib	$(NAME)

all:	$(NAME)

base:	$(OBJS)

add:	$(ADD)

bonus:	$(BONUS)

#add:	$(OBJS)	$(OBJS_A)
#		ar	rcs	$(NAME)	$(OBJS)	$(OBJS_A)
#		ranlib	$(NAME)

#bonus:	$(OBJS)	$(OBJS_A)	$(OBJS_B)
#		ar	rcs	$(NAME)	$(OBJS)	$(OBJS_A)	$(OBJS_B)
#		ranlib	$(NAME)

TEST:	$(OBJS)	$(OBJS_A)
		cc	-o	TEST	$(OBJS)	$(OBJS_A)

clean:
		$(RM)	$(OBJS)	$(OBJS_A)	$(OBJS_B)

fclean:	clean
		$(RM)	$(NAME)

print:
		echo$(OBJS)
		echo$(OBJS_A)
		echo$(OBJS_B)

re:		fclean	all

.PHONY:	all	add	bonus	clean	fclean	re