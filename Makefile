CC = gcc
AR = ar
CFLAGS = -std=c99 -Wall -Wextra -Werror -ffreestanding -nostdlib -Iinclude

NAME = libc.a

SRCDIR = src
OBJDIR = obj
INCDIR = include

SRCFILES := $(shell find $(SRCDIR) -name "*.c")
OBJFILES := $(subst $(SRCDIR), $(OBJDIR), $(SRCFILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJFILES)
	$(AR) rcs $(NAME) $?

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(NAME)

.PHONY: all clean
