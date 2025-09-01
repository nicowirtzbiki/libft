# O make vai rodar a regra all, que compila seus .c em .o e depois junta na libft.a.
# Depois, na regra test, ele compila o main.c junto com a libft.a e gera um executável chamado test.


# Nome da biblioteca
NAME = libft.a

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Lista de arquivos fonte
SRC = \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
# ft_toupper.c \
# ft_tolower.c \
# ft_strlen.c \
# ft_memset.c \
# ft_bzero.c \
# ft_memcpy.c \
# ft_memmove.c \
# ft_memchr.c \
# ft_memcmp.c \
# ft_strchr.c \
# ft_strrchr.c \
# ft_strncmp.c \
# ft_strlcpy.c \
# ft_strlcat.c \
# ft_strnstr.c \
# ft_atoi.c \
# ft_calloc.c \
# ft_strdup.c \
# ft_substr.c \
# ft_strjoin.c \
# ft_strtrim.c \
# ft_split.c \
# ft_itoa.c \
# ft_strmapi.c \
# ft_striteri.c \
# ft_putchar_fd.c \
# ft_putstr_fd.c \
# ft_putendl_fd.c \
# ft_putnbr_fd.c

# Arquivos objeto gerados a partir dos fontes
OBJ = $(SRC:.c=.o)

# Regras
all: $(NAME)

# Criar biblioteca a partir dos objetos
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compilar arquivos objeto
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos objeto
clean:
	rm -f $(OBJ)

# Limpar tudo (objetos + biblioteca)
fclean: clean
	rm -f $(NAME) test

# Recompilar tudo
re: fclean all

# Testar
test: all
	gcc -I. mains/main_isprint.c libft.a -o test
