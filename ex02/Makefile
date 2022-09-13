NAME := a.out
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98
SRCS_DIR := ./srcs
OBJS_DIR := ./objs
SRCS := $(wildcard $(SRCS_DIR)/*.cpp)
OBJS := $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)
DEPS := $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(OBJS_DIR)/.keep
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS_DIR)/.keep:
	mkdir -p $(@D)
	@touch $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re test

