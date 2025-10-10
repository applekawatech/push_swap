NAME = push_swap

TARGET = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I include
SRCS = src/algo/quick_sort.c \
       src/algo/radix_sort.c \
       src/algo/sort_3_5.c \
       src/ops/stack_push.c \
       src/ops/stack_reverse_rotate.c \
       src/ops/stack_rotate.c \
       src/ops/stack_swap.c \
       src/util/util_atoi.c \
       src/util/util_char.c \
       src/util/util_int.c \
       src/util/util_stack.c \
       src/util/util_stack2.c \
       src/util/util_str.c \
       src/main.c
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
