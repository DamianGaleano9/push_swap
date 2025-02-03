LIB = 	ar rcs

RM = rm -f
CC = CC
CCFLAGS = -Wall -Wextra -Werror

NAME = push_swap
CHEKER = cheker
SRC = utils/inputcheck.c utils/stackmaker.c utils/calcmoves.c\
utils/rotate.c utils/sort.c utils/utils.c\
utils/checkrotations.c utils/multirotator.c\
moves/swap.c moves/push.c moves/rotate.c moves/rev_rotate.c\
push_swap.c

PSMAIN = ps_main.c
CHECKERMAIN = checker_main_bonus.c
OBJ = $(SRC:.c=.o)
PSMAINOBJ = $(PSMAIN:.c=.o)
CHECKERMAINOBJ = $(CHECKERMAIN:.c=.o)
INCLUDE = push_swap.h

LIBFTNAME = libft.a
LIBFTDIR = ./libft

all: $(NAME)

$(NAME): makelibft $(OBJ) $(PSMAINOBJ)
	$(CC) $(CCFLAGS) $(OBJ) $(PSMAINOBJ) -o $(NAME) $(LIBFTNAME)

bonus: makelibft $(OBJ) $(CHECKERMAINOBJ)
	$(CC) $(CCFLAGS) $(OBJ) $(CHECKERMAINOBJ) -o $(CHECKER) $(LIBFTNAME)

makelibft:
	@make -C $(LIBFTDIR)
	@mv $(LIBFTDIR)/$(LIBFTNAME) .

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(PSMAINOBJ) $(CHECKERMAINOBJ)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	$(RM) $(NAME) $(CHECKER)
	@rm -f $(LIBFTNAME)

re: fclean all