#
# Makefile for timer
# 

CC = gcc
DEFS = -DHAVE_CONFIG_H
LIBS = 

SRCS = timer.c
OBJS = $(SRCS:.c=.o)
PROG = timer

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)

.c.o:
	$(CC) $(DEFS) -c -o $@ $<

clean:
	rm -f $(OBJS)


