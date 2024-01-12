#---COMMON_VAR-----------------------------------
NAME		=	Polymorphism
CXX			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra -g3
#---PROJECT+VAR----------------------------------
SRC			=	main.cpp \
				AMateria.cpp \
				Ice.cpp \
				Cure.cpp \
				ICharacter.cpp \
				Character.cpp \
				IMateriaSource.cpp \
				MateriaSource.cpp \
				Floor.cpp

OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER		=	AMateria.hpp \
				Ice.hpp \
				Cure.hpp \
				ICharacter.hpp \
				Character.hpp \
				IMateriaSource.hpp \
				MateriaSource.hpp \
				Floor.hpp
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				@echo "\033[0;33m\nCOMPILING Amateria...\n"
				@$(CXX) $(FLAGS) $(OBJS) -o $@
				@echo "\033[1;32m./Amateria created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CXX) $(FLAGS) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting Amateria object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting Amateria executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean
				$(MAKE) all

.PHONY:			all clean fclean re
