NAME = push_swap
CHECKER = checker
CC = cc
CFLAGS = -fsanitize=address -Wall -Wextra -Werror

SRC  =  magic_sort/sort_system.c \
		magic_sort/pro_max_sort.c \
		magic_sort/pro_sort.c \
		magic_sort/short_sort.c \
		magic_sort/norm_stor.c \
		operations/main/push.c \
		operations/main/rotate_up.c \
		operations/main/rotate_down.c \
		operations/main/swap.c \
		proccess/errors.c \
		proccess/init_main_stack.c \
		tools_hp/list_tools.c \
		tools_hp/tools_help1.c \
		tools_hp/tools_help2.c \
		tools_hp/function_help.c \
		tools_hp/ft_split.c \

BONUSS = gnl/get_next_line.c \
		 gnl/get_next_line_utils.c \
		 operations/checker/push.c \
		 operations/checker/rotate_up.c \
		 operations/checker/rotate_down.c \
		 operations/checker/swap.c \

OBJS = $(BONUSS:.c=.o)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) ./progarm_core/push_swap.c -o $(NAME)

bonus: $(OBJS) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(OBJS) ./progarm_core/checker.c -o $(CHECKER)

clean:
	rm -f $(OBJ) $(OBJS)
fclean: clean
	rm -f $(NAME) $(CHECKER)
del: fclean
tester:
	./../learn/vis/build/bin/visualizer
push:
	git add .
	git commit -m "push"
	git push

re: fclean all

.PHONY: all clean fclean del tester push  re 
