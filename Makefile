# ----------------------------- VARIABLES ---------------------------------- #
NAME = push_swap
CC = cc
CFLAGS = -g -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = srcs/main.c srcs/parse.c srcs/ex_ops.c srcs/lst_ops.c srcs/lst_ops_2.c srcs/ps_ops.c
OBJS_DIR = objs
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))

NUM_SRCS = $(words $(SRCS))

# Archivo temporal para almacenar los nombres de los archivos compilados (Pila 2)
STACK_FILE = .compilation_stack
# Altura visual de las pilas
STACK_HEIGHT = 10

# ----------------------------- COLORES ------------------------------------ #
GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[1;33m
BLUE = \033[0;34m
CYAN = \033[0;36m
PURPLE = \033[0;35m
RESET = \033[0m

# ---------------------------- REGLAS -------------------------------------- #

all: clean_stack libft $(NAME)

$(NAME): $(OBJS)
	@printf "${BLUE}Linking objects into $(NAME)...${RESET}\n"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@printf "${GREEN}✅ Compilation finished successfully!${RESET}\n"

# Pseudo-target para asegurar que el archivo de pila esté limpio al inicio
clean_stack:
	@rm -f $(STACK_FILE)

# ------------------------ OBJ FILES CREATION (ANIMACIÓN) ------------------ #

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

	# --- Lógica de la animación de las dos pilas ---
	# Usamos un bucle 'while' compatible con POSIX shell (sh/dash)
	@echo "$<" >> $(STACK_FILE) && \
	printf "\033[2J\033[H" && \
	current_count=$$(find $(OBJS_DIR) -name "*.o" 2>/dev/null | wc -l | xargs) && \
	num_srcs=$(NUM_SRCS) && \
	progress=$$(($$current_count * 100 / $$num_srcs)) && \
	STACK_H=$(STACK_HEIGHT) && \
	done_lines=$$(($$progress * $$STACK_H / 100)) && \
	printf "${BLUE}------------------------------------------------------------${RESET}\n" && \
	printf "${YELLOW} 🧠 Compilation In Progress 🧠 ${RESET}\n" && \
	printf "${BLUE}------------------------------------------------------------${RESET}\n\n" && \
	printf "  ${CYAN}Stack 1 (Load) ${RESET}    ${PURPLE}Stack 2 (Compiled Files)${RESET}\n" && \
	printf "  ${CYAN}------------${RESET}      ${PURPLE}-----------------------------${RESET}\n" && \
	i=$$(($$STACK_H)) && \
	while [ $$i -ge 1 ]; do \
		if [ "$$i" -le "$$done_lines" ]; then \
			LEFT_BAR=$$(printf "${GREEN}█${RESET}"); \
		else \
			LEFT_BAR=$$(printf "${CYAN}░${RESET}"); \
		fi; \
		LINE_NUM=$$(($$STACK_H - $$i + 1)); \
		RIGHT_CONTENT=$$(tac $(STACK_FILE) | head -n $$STACK_H | sed -n "$$LINE_NUM p" | xargs); \
		if [ -n "$$RIGHT_CONTENT" ]; then \
			RIGHT_DISPLAY=$$(printf "${PURPLE}│ %-29s ${RESET}" "$$RIGHT_CONTENT"); \
		else \
			RIGHT_DISPLAY=$$(printf "│ ${PURPLE}%-29s ${RESET}" ""); \
		fi; \
		printf "      %s        %s\n" "$$LEFT_BAR" "$$RIGHT_DISPLAY"; \
		i=$$(($$i - 1)); \
	done && \
	printf "\n${CYAN}Progress: %d%% | Remaining: %d files${RESET}\n" "$$progress" "$$(( $$num_srcs - $$current_count ))" && \
	if [ "$$progress" -eq 100 ]; then \
		printf "\n${GREEN}All compilation steps finished. Linking...${RESET}\n"; \
	fi

# ---------------------------- LIBFT --------------------------------------- #

libft:
	@printf "${BLUE}Building libft...${RESET}\n"
	@make -C $(LIBFT_DIR) --no-print-directory
	@printf "${GREEN}libft.a built successfully!${RESET}\n"

# ----------------------------- LIMPIEZA ----------------------------------- #

clean:
	@printf "${RED}Cleaning object files...${RESET}\n"
	@rm -rf $(OBJS_DIR)
	@rm -f $(STACK_FILE)
	@make -C $(LIBFT_DIR) clean --no-print-directory
	@printf "${GREEN}Objects removed! ✔${RESET}\n"

fclean: clean
	@printf "${RED}Removing executables...${RESET}\n"
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean --no-print-directory
	@printf "${GREEN}All cleaned! ✔${RESET}\n"

re: fclean all

.PHONY: all clean fclean re libft clean_stack
