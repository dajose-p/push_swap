# ----------------------------- VARIABLES ---------------------------------- #
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/main.c srcs/utils.c
OBJS = $(SRCS:.c=.o)
NUM_SRCS = $(words $(SRCS))

# ----------------------------- COLORES ------------------------------------ #
GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[1;33m
BLUE = \033[0;34m
CYAN = \033[0;36m
RESET = \033[0m

# ---------------------------- REGLAS -------------------------------------- #

all: $(NAME)

$(NAME): $(OBJS)
	@echo -e "$(BLUE)Linking objects into $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo -e "$(GREEN)Compilation finished! ✔$(RESET)"

# -------------------- COMPILE WITH PROGRESS ------------------------------- #
counter = 0

%.o: %.c
	@$(eval counter=$(shell echo $$(($(counter)+1))))
	@$(CC) $(CFLAGS) -c $< -o $@
	@progress=$$(($(counter)*100/$(NUM_SRCS))); \
	bar_len=20; \
	done_len=$$((bar_len*progress/100)); \
	remain_len=$$((bar_len-done_len)); \
	done_bar=$$(printf "%0.s#" $$(seq 1 $$done_len)); \
	remain_bar=$$(printf "%0.s-" $$(seq 1 $$remain_len)); \
	printf "\r$(CYAN)[%s%s] %d%% $(RESET)" "$$done_bar" "$$remain_bar" "$$progress"; \
	if [ $$progress -eq 100 ]; then echo ""; fi
	@echo -e "$(YELLOW)Compiled $< ✔$(RESET)"

clean:
	@echo -e "$(RED)Cleaning object files...$(RESET)"
	@rm -f $(OBJS)
	@echo -e "$(GREEN)Objects removed! ✔$(RESET)"

fclean: clean
	@echo -e "$(RED)Removing executable...$(RESET)"
	@rm -f $(NAME)
	@echo -e "$(GREEN)Executable removed! ✔$(RESET)"

re: fclean all

.PHONY: all clean fclean re
