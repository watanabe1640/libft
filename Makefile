name := libft.a
srcs :=isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c memset.c bzero.c memcpy.c memmove.c strlcpy.c strlcat.c

objs :=$(srcs:.c=.o)

all:
	