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
		ft_strjoin.c
OBJS = $(SRCS:.c=.o)

# Rules
.PHONY: all clean fclean re

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
