# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    Daniel Jose Pereira                               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/19 04:10                        #+#    #+#              #
#    Updated: 2025/10/19 17:30:00 by danjose-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------------------- VARIABLES ---------------------------------- #
NAME = push_swap
CC = cc
CFLAGS = -g -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = srcs/main.c srcs/utils.c
OBJS_DIR = objs
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

NUM_SRCS = $(words $(SRCS))

# ----------------------------- COLORES ------------------------------------ #
GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[1;33m
BLUE = \033[0;34m
CYAN = \033[0;36m
RESET = \033[0m

# ---------------------------- REGLAS -------------------------------------- #

all: libft $(NAME)

$(NAME): $(OBJS)
	@echo -e "$(BLUE)Linking objects into $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo -e "$(GREEN)✅ Compilation finished successfully!$(RESET)"

# ------------------------ OBJ FILES CREATION ------------------------------ #

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(eval counter=$(shell echo $$(($(counter)+1))))
	@$(CC) $(CFLAGS) -c $< -o $@
	@progress=$$(($(counter)*100/$(NUM_SRCS))); \
	bar_len=25; \
	done_len=$$((bar_len*progress/100)); \
	remain_len=$$((bar_len-done_len)); \
	done_bar=$$(printf "%0.s█" $$(seq 1 $$done_len)); \
	remain_bar=$$(printf "%0.s░" $$(seq 1 $$remain_len)); \
	printf "\r$(CYAN)[%s%s] %d%%$(RESET)" "$$done_bar" "$$remain_bar" "$$progress"; \
	if [ $$progress -eq 100 ]; then echo ""; fi
	@echo -e "$(YELLOW)Compiled $< ✔$(RESET)"

# ---------------------------- LIBFT --------------------------------------- #

libft:
	@echo -e "$(BLUE)Building libft...$(RESET)"
	@make -C $(LIBFT_DIR) --no-print-directory
	@echo -e "$(GREEN)libft.a built successfully!$(RESET)"

# ----------------------------- LIMPIEZA ----------------------------------- #

clean:
	@echo -e "$(RED)Cleaning object files...$(RESET)"
	@rm -rf $(OBJS_DIR)
	@make -C $(LIBFT_DIR) clean --no-print-directory
	@echo -e "$(GREEN)Objects removed! ✔$(RESET)"

fclean: clean
	@echo -e "$(RED)Removing executables...$(RESET)"
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean --no-print-directory
	@echo -e "$(GREEN)All cleaned! ✔$(RESET)"

re: fclean all

.PHONY: all clean fclean re libft

