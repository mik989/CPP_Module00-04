BLU			= \033[0;34m
GRN			= \033[0;32m
RED			= \033[0;31m
RST			= \033[0m
END			= \e[0m

SRCS 	=	Account.cpp tests.cpp
NAME		= tests
OBJS_DIR	=
OBJS		= $(SRCS:.cpp=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
CC			= c++ -std=c++98
CC_FLAGS	= -Wall -Werror -Wextra

$(OBJS_DIR)%.o : %.cpp
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@printf	"\033[2K\r${BLU}[BUILD - $(NAME)]${RST} '$<' $(END)"
$(NAME): $(OBJECTS_PREFIXED)
	@$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS) $(MLB_FLAGS)
	@printf "\033[2K\r\033[0;32m[END]\033[0m $(NAME)$(END)\n"
all: $(NAME)
clean:
	@/bin/rm -f *.o
	@echo "${GRN}[CLEAN]${RST} done"
fclean: clean
	@rm -f $(NAME)
	@echo "${GRN}[FCLEAN]${RST} done"
re: fclean all
.PHONY:		all clean fclean re