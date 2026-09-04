CC = gcc
AR = ar
CFLAGS = -std=c99 -Wall -Wextra -Werror -ffreestanding -nostdlib -Iinclude

NAME = libc.a

SRCDIR = src
OBJDIR = obj
INCDIR = include

OK := \033[0;32m
AL := \033[0;33m
NC := \033[0m

SRCFILES := $(shell find $(SRCDIR) -name "*.c")
OBJFILES := $(subst $(SRCDIR), $(OBJDIR), $(SRCFILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJFILES)
	@$(AR) rcs $(NAME) $?
	@echo "$(OK)[LD]$(NC) libc.a created"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(AL)[CC]$(NC)" $< "->" $@

clean:
	rm -rf $(OBJDIR) $(NAME)

.PHONY: all clean
