CC = clang
CFLAGS = -Wall -Iinclude
LDFLAGS =
TEST_LDFLAGS = -lcheck -lm -lpthread -lrt -lsubunit

AR = ar
ARFLAGS = rcs

SRC_DIR = src
INC_DIR = include
TEST_DIR = tests
EXAMPLE_DIR = examples

# Source files
LIB_SRCS = $(SRC_DIR)/placeholder.c
LIB_OBJS = $(LIB_SRCS:.c=.o)
LIB_NAME = placeholder

TEST_SRCS = $(TEST_DIR)/test_placeholder.c
EXAMPLE_SRCS = $(EXAMPLE_DIR)/main.c

.PHONY: all test static example clean

all: test static example

example: $(LIB_NAME) $(EXAMPLE_SRCS)
	$(CC) $(CFLAGS) -o example $(EXAMPLE_SRCS) -L. -l$(LIB_NAME) $(LDFLAGS)

test: $(LIB_NAME) $(TEST_SRCS)
	$(CC) $(CFLAGS) -o test_runner $(TEST_SRCS) -L. -l$(LIB_NAME) $(TEST_LDFLAGS)
	./test_runner

static: $(LIB_NAME)

$(LIB_NAME): $(LIB_OBJS)
	$(AR) $(ARFLAGS) lib$(LIB_NAME).a $^

clean:
	rm -f $(LIB_OBJS) lib$(LIB_NAME).a test_runner example

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@