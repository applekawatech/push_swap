NAME = push_swap

TARGET = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =
OBJS    =   $(SRCS:.c=.o)

$(TARGET) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all
