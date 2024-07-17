# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 08:49:47 by moouahab          #+#    #+#              #
#    Updated: 2024/07/05 15:49:46 by moouahab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Cyberpunk Makefile

# Source files
SRCS = main.cpp

# Object files
OBJS = ${SRCS:%.cpp=objs/%.o}

INC_PATH = .

# Executable name
NAME = whatver

# Compiler
CXX = c++

# Compiler flags
CXXFLAGS = -Wall -Werror -Wextra -I$(INC_PATH) -std=c++98

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
