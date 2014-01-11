
CC=gcc
LD=ld
CFLAGS=-Wall -O0 -g -std=c99
#LDFLAGS=


all: employee gen_card card_parser

employee: employee.o
	$(CC) $(LDFLAGS) -o $@ $^

employee.o: employee.c employee.h
	$(CC) $(CFLAGS) -o $@ -c $<

gen_card: gen_card.o
	$(CC) $(LDFLAGS) -o $@ $^

gen_card.o: gen_card.c gen_card.h
	$(CC) $(CFLAGS) -o $@ -c $<

card_parser: card_parser.o
	$(CC) -shared -o card_parser.so card_parser.o

card_parser.o: card_parser.c card_parser.h
	$(CC) $(CFLAGS) -o $@ -c $<


clean:
	rm -rf employee.o
	rm -rf employee
	rm -rf gen_card.o
	rm -rf gen_card
	rm -rf card_parser.o
	rm -rf card_parser.so
