TARGETS=mygrep data-extract data-gen
SRCS=$(patsubst %,%.c,$(TARGETS))
CC=gcc
CFLAGS= -Wall -g

all : $(TARGETS)

$(TARGETS): %: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean: 
	@rm -f $(TARGETS) *.o a.out mygrep data-extract data-gen
