# ルートディレクトリでmakeを実行するとlibft.aが生成される
# 生成されたlibft.aはルートディレクトリにコピーされる

name := libft.a
srcs := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_memcpy.c ft_tolower.c ft_toupper.c ft_strchr.c

objs :=$(srcs:.c=.o)

all: $(name)

$(name): $(objs)
	ar rcs $(name) $(objs)
	ranlib $(name)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(name)

re: fclean all