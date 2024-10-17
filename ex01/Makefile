NAME		=	Brain
SRC_DIR		=	./src
OBJS_DIR	=	.objs
INC_DIR		=	./inc

SRCS		=	$(SRC_DIR)/main.cpp \
				$(SRC_DIR)/Animal.cpp \
				$(SRC_DIR)/Cat.cpp \
				$(SRC_DIR)/Dog.cpp \
				$(SRC_DIR)/WrongAnimal.cpp \
				$(SRC_DIR)/WrongCat.cpp \
				$(SRC_DIR)/Brain.cpp \

OBJS 		=	$(patsubst $(SRC_DIR)/%.cpp, $(OBJS_DIR)/%.o, $(SRCS))

CC 		=	c++
CFLAGS 	=	-Wall -Wextra -Werror -std=c++98 -g3
RM 		=	rm -rf
INC		=	$(INC_DIR)/Animal.hpp \
			$(INC_DIR)/Cat.hpp \
			$(INC_DIR)/Dog.hpp \
			$(INC_DIR)/WrongAnimal.hpp \
			$(INC_DIR)/WrongCat.hpp \
			$(INC_DIR)/Brain.hpp \

# colors
GREEN	= \033[1;32m
BLUE	= \033[1;34m
RED		= \033[1;31m
YELLOW	= \033[1;33m
DEFAULT	= \033[0m
UP		= "\033[A"
CUT		= "\033[K"

all: $(NAME)

$(OBJS_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@echo "${BLUE}Compiling${DEFAULT} $<"
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(INC) Makefile
	@echo "${GREEN}Linking${DEFAULT} $(NAME)"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@echo "${RED}Cleaning${DEFAULT}"
	$(RM) $(OBJS)
	$(RM) $(OBJS_DIR)

fclean: clean
	@echo "${RED}Full Cleaning${DEFAULT}"
	$(RM) $(NAME)

re: fclean all
	@echo "${GREEN}Recompiled!${DEFAULT}"

.PHONY: all clean fclean re