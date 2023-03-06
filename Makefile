PUSH_NAME = push_swap
FLAGS = -g -Wall -Wextra -Werror
INC = -Iincludes/ -I$(LIB_DIR)/includes

PUSH_SRC_NAME = main.c ops_2.c ops_3.c ops.c sort_2.c sort_3.c\
sort.c stack_2.c stack.c utils.c utils_2.c

PUSH_OBJ_NAME = $(PUSH_SRC_NAME:.c=.o)
PUSH_OBJ = $(addprefix $(OBJ_DIR),$(PUSH_OBJ_NAME))

LIB_DIR = libft/
SRC_DIR = src/
OBJ_DIR = objs/

all: $(PUSH_NAME)

$(PUSH_NAME): $(PUSH_OBJ)
	@make -C $(LIB_DIR) --silent
	@gcc -o $(PUSH_NAME) $(PUSH_OBJ) -L $(LIB_DIR) -lft
	@echo "--- COMPILATION SUCCESSFUL ---"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@echo "--- COMPILING" [ $@ ] " ---"
	@gcc $(FLAGS) -o $@ -c $< $(INC)

clean:
	@make -C $(LIB_DIR) clean  --silent
	@rm -f $(CHECK_OBJ) $(PUSH_OBJ)
	@echo "--- REMOVED OBJECT FILES ---"

fclean: clean
	@make -C $(LIB_DIR) fclean  --silent
	@rm -f $(PUSH_NAME)
	@echo "--- REMOVED BINARIES ---"

re: fclean all

.PHONY: all clean fclean re
