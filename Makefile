CC=gcc
SRCS=src/smoltest.c \
	 src/smoltest_internal.c

OBJS := $(patsubst %.c,%.o,$(SRCS))
 
%.o: %.c
	$(CC) -Iinclude $(DEFINES) $(INCLUDES) -c -o $@ $<

all:$(OBJS)
	ar -rcs libsmoltest.a $(OBJS)
	rm src/*.o