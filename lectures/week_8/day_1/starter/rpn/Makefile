CC = cc
CFLAGS = -g

all: rpn

rpn: rpn.o token.o stack.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf *.o *~ rpn
