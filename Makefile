# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# Numbers
SRC_NUMS =	ft_isalpha.c \
						ft_isdigit.c \
						ft_isalnum.c \
						ft_isascii.c \
						ft_isprint.c \
						ft_toupper.c \
						ft_tolower.c \
						ft_itoa.c \
						ft_putnbr_fd.c
# Strings
SRC_STRS =	ft_strlen.c \
						ft_strlcpy.c \
						ft_strlcat.c \
						ft_strncmp.c \
						ft_strchr.c \
						ft_strrchr.c \
						ft_strnstr.c \
						ft_strdup.c \
						ft_atoi.c \
						ft_substr.c \
						ft_strjoin.c \
						ft_strtrim.c \
						ft_split.c \
						ft_strmapi.c \
						ft_striteri.c \
						ft_putchar_fd.c \
						ft_putstr_fd.c \
						ft_putendl_fd.c
# Memory
SRC_MEMS =	ft_bzero.c \
						ft_memset.c \
						ft_memcpy.c \
						ft_memmove.c \
						ft_memchr.c \
						ft_memcmp.c \
						ft_calloc.c

# Bonus
SRC_BONUS =	ft_lstnew_bonus.c \
						ft_lstadd_front_bonus.c \
						ft_lstsize_bonus.c \
						ft_lstlast_bonus.c \
						ft_lstadd_back_bonus.c \
						ft_lstdelone_bonus.c \
						ft_lstclear_bonus.c \
						ft_lstiter_bonus.c \
						ft_lstmap_bonus.c

# Combine sources
SRC = $(SRC_NUMS) $(SRC_STRS) $(SRC_MEMS)
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(SRC_BONUS:.c=.o)
# Bonus flag file to check if bonus is built and avoid rebuilding
BONUS_FLAG = .bonus_built

# Rules
all: $(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(NAME) $(BONUS_FLAG)
$(BONUS_FLAG): $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	touch $(BONUS_FLAG)

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(BONUS_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
