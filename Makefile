
CC=gcc
LD=ld
CFLAGS=-Wall -O0 -g -std=c99
#LDFLAGS=
PROJNAME=employee
OBJS=employee.o

$(PROJNAME): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

$(PROJNAME).o: $(PROJNAME).c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(PROJNAME).o
	rm -rf $(PROJNAME)
