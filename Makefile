NAME = push_swap

TARGET = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = ft_atoi.c  main.c pretreatment.c pretreatment2.c pretreatment3.c	quick_sort.c radix_sort.c stack.c stack_b.c stack_c.c
OBJS    =   $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all
