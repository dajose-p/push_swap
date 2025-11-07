NAME            := push_swap
BONUS_NAME      := checker
CC              := cc
CFLAGS          := -Wall -Wextra -Werror -g
LIBFT_DIR       := libft
LIBFT_A         := $(LIBFT_DIR)/libft.a

SRC_DIR         := srcs
OBJ_DIR         := objs
BONUS_DIR       := srcs_bonus
BONUS_OBJ_DIR   := objs_bonus
INC_DIR         := inc

GREEN   := \033[0;32m
YELLOW  := \033[0;33m
RED     := \033[0;31m
CYAN    := \033[0;36m
RESET   := \033[0m

PUSH_SWAP_SRCS := \
	main.c parse.c main_checks.c main_checks_2.c lst_ops.c lst_ops_2.c \
	ps_ops.c ps_ops_2.c tests.c math_ops.c sort_more.c

BONUS_SRCS := \
	checker_bonus.c parse_bonus.c main_bonus.c lst_ops_bonus.c \
	lst_ops_2_bonus.c ps_ops_bonus.c ps_ops_2_bonus.c

PUSH_SWAP_OBJS := $(addprefix $(OBJ_DIR)/, $(PUSH_SWAP_SRCS:.c=.o))
BONUS_OBJS     := $(addprefix $(BONUS_OBJ_DIR)/, $(BONUS_SRCS:.c=.o))

all: $(NAME)

bonus: $(BONUS_NAME)

$(NAME): $(LIBFT_A) $(PUSH_SWAP_OBJS)
	@echo "$(CYAN)[Linking]$(RESET) $@"
	@$(CC) $(CFLAGS) $(PUSH_SWAP_OBJS) $(LIBFT_A) -o $(NAME)
	@echo "$(GREEN)[OK]$(RESET) Ejecutable $(NAME) creado."

$(BONUS_NAME): $(LIBFT_A) $(BONUS_OBJS)
	@echo "$(CYAN)[Linking bonus]$(RESET) $@"
	@$(CC) $(CFLAGS) $(BONUS_OBJS) $(LIBFT_A) -o $(BONUS_NAME)
	@echo "$(GREEN)[OK]$(RESET) Ejecutable $(BONUS_NAME) creado."

$(LIBFT_A):
	@echo "$(YELLOW)[Building libft]$(RESET)"
	@$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "$(CYAN)[Compiling]$(RESET) $<"
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(BONUS_OBJ_DIR)/%.o: $(BONUS_DIR)/%.c | $(BONUS_OBJ_DIR)
	@echo "$(CYAN)[Compiling bonus]$(RESET) $<"
	@$(CC) $(CFLAGS) -I$(INC_DIR) -D BONUS_MODE -c $< -o $@

$(OBJ_DIR) $(BONUS_OBJ_DIR):
	@mkdir -p $@

clean:
	@echo "$(RED)[Cleaning objects]$(RESET)"
	@rm -rf $(OBJ_DIR) $(BONUS_OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "$(RED)[Cleaning binaries]$(RESET)"
	@rm -f $(NAME) $(BONUS_NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
re_bonus: fclean bonus

.PHONY: all bonus clean fclean re re_bonus
