# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tas <tas@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 11:30:12 by tas               #+#    #+#              #
#    Updated: 2023/04/04 12:06:41 by tas              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

OBJ_PATH = obj/

SRC_NAME = megaphone.cpp 	\

OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

DEPS_NAME = $(SRC_NAME:.cpp=.d)
DEPS = $(addprefix $(OBJ_PATH),$(DEPS_NAME))

all: $(NAME)

$(NAME): Makefile $(OBJ)
		@echo "Build $(NAME)"
		@$(CC) $(FLAGS) $(INC) $(OBJ) -o $(NAME) $(LIBS) -MMD

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
		mkdir -p $(@D)
		$(CC) $(FLAGS) $(INC) -MMD -o $@ -c $<

-include $(DEPS)

clean:
		$(RM) $(OBJ_PATH)

fclean:	clean
		$(RM) $(NAME)

re:	fclean
	make all

.PHONY: all clean fclean re


# NAME			= megaphone

# SRCS			= megaphone.cpp

# OBJS			= ${SRCS:.cpp=.o}

# CC				= cc++
# RM				= rm -f
# CFLAGS			= -Wall -Wextra -Werror -g3 -std=c++98

# all:			${NAME}

# ${NAME}:		${OBJS}
# 						${CC} ${CFLAGS} ${OBJS} -o ${NAME}

# clean:
# 						${RM} ${OBJS}

# fclean:			clean
# 						${RM} ${NAME}

# re:				fclean ${NAME}

# .PHONY:			all clean fclean re