# Variables
NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra

SRCS = 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)

BONUS_SRCS =	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Rules
.PHONY: all clean fclean re bonus

# Compiles libft
all: $(NAME)

# Creates libft.a from .o files
$(NAME): libft.h $(OBJS)
	ar -q $(NAME) $(OBJS)

# Compiles .c files into .o files
$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

# Cleans temporary files but not the executable
clean:
	rm -f *.o

# Cleans the same as clean + the executable (full clean)
fclean: clean
	rm -f $(NAME)

# Cleans and recompiles the libft
re: fclean all

# Creates libft.a including the bonus part
bonus: libft.h $(OBJS) $(BONUS_OBJS)
	ar -q $(NAME) $(OBJS) $(BONUS_OBJS)

# Compiles bonus part .c files into .o files
$(BONUS_OBJS): $(BONUS_SRCS)
	$(CC) $(FLAGS) -c $(BONUS_SRCS)