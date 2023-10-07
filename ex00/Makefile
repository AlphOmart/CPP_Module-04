#---COMMON_VAR-----------------------------------
NAME		=	Polymorphism
CXX			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra -fsanitize=address
#---PHILO_VAR----------------------------------
SRC			=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER		=	Animal.hpp \
				Cat.hpp \
				Dog.hpp
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS)
				@echo "\033[0;33m\nCOMPILING Polymorphism...\n"
				@$(CXX) $(FLAGS) $(OBJS) -o $@
				@echo "\033[1;32m./Polymorphism created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CXX) $(FLAGS) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting Polymorphism object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting Polymorphism executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean all

.PHONY:			all clean fclean re