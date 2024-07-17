# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moouahab <mohamed.ouahab1999@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 08:49:47 by moouahab          #+#    #+#              #
#    Updated: 2024/05/17 14:25:14 by moouahab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Cyberpunk Makefile

# Source files
SRCS = main.cpp Zombie.cpp zombieHorde.cpp

# Object files
OBJS = ${SRCS:%.cpp=objs/%.o}

INC_PATH = .

# Executable name
NAME = presentationZombie

# Compiler
CXX = c++

# Compiler flags
CXXFLAGS = -Wall -Werror -Wextra  -g3 -MMD -O2 -I$(INC_PATH) -std=c++98

# Colors
GREEN   = \033[0;32m
RED     = \033[0;31m
YELLOW  = \033[0;33m
CYAN    = \033[0;36m
RESET   = \033[0m

# Make all rule
all: ${NAME}

# Linking rule
${NAME}: ${OBJS}
	@${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME} ${LDFLAGS}
	@echo "\e[38;5;225m ███████╗██╗  ██╗ ██████╗  ██████╗██████╗ ██████╗  "
	@echo "\e[38;5;224m ██╔════╝╚██╗██╔╝██╔═══██╗██╔════╝██╔══██╗██╔══██╗ "
	@echo "\e[38;5;223m █████╗   ╚███╔╝ ██║   ██║██║     ██████╔╝██████╔╝ "
	@echo "\e[38;5;222m ██╔══╝   ██╔██╗ ██║   ██║██║     ██╔═══╝ ██╔═══╝  "
	@echo "\e[38;5;221m ███████╗██╔╝ ██╗╚██████╔╝╚██████╗██║     ██║      "
	@echo "\e[38;5;220m ╚══════╝╚═╝  ╚═╝ ╚═════╝  ╚═════╝╚═╝     ╚═╝      "
                                      


# Compilation rule for object files
objs/%.o: %.cpp
	@mkdir -p $(dir $@)
	@${CXX} ${CXXFLAGS} -c $< -o $@

# Clean rule
clean:
	@rm -rf objs
	@echo "\e[38;5;214m  ██████╗██╗     ███████╗ █████╗ ███╗   ██╗"
	@echo "\e[38;5;215m ██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║"
	@echo "\e[38;5;216m ██║     ██║     █████╗  ███████║██╔██╗ ██║"
	@echo "\e[38;5;217m ██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║"
	@echo "\e[38;5;218m ╚██████╗███████╗███████╗██║  ██║██║ ╚████║"
	@echo "\e[38;5;219m  ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝"
# Clean all rule
fclean: clean

	@rm -f ${NAME}
	@echo "\e[38;5;208m ███████╗ ██████╗██╗     ███████╗ █████╗ ███╗   ██╗"
	@echo "\e[38;5;209m ██╔════╝██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║"
	@echo "\e[38;5;210m █████╗  ██║     ██║     █████╗  ███████║██╔██╗ ██║"
	@echo "\e[38;5;211m ██╔══╝  ██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║"
	@echo "\e[38;5;212m ██║     ╚██████╗███████╗███████╗██║  ██║██║ ╚████║"
	@echo "\e[38;5;213m ╚═╝      ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝"

# Rebuild rule
re: fclean all

# PHONY targets
.PHONY: all clean fclean re
