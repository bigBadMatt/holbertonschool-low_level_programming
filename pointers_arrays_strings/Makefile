CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf
SRC=_putchar.c
BETTY=betty
TARGET0=
SRC0=
TARGET1=
SRC1=
TARGET2=
SRC2=
TARGET3=
SRC3=
TARGET4=
SRC4=
TARGET5=
SRC5=
TARGET6= 6-puts2
SRC6=	6-main.c \
	6-puts2.c
TARGET7= 7-puts_half
SRC7=   _putchar.c \
	7-main.c \
	7-puts_half.c
TARGET8=8-print_array
SRC8=   8-main.c \
	8-print_array.c
TARGET9=9-height
SRC9=   9-main.c \
	9-binary_tree_height.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c
TARGET10=10-depth
SRC10=  10-main.c \
	10-binary_tree_depth.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c
TARGET11=11-size
SRC11=  11-main.c \
	11-binary_tree_size.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c
TARGET12=12-leaves
SRC12=  12-main.c \
	12-binary_tree_leaves.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c
TARGET13=13-nodes
SRC13=  13-main.c \
	13-binary_tree_nodes.c \
	2-binary_tree_insert_right.c \
	0-binary_tree_node.c
all:	0 1 2 3 4 5 6 7 8 9 10 11 12 13
clean:
	$(RM) *~ \#*\# \.\#* \
	$(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) \
	$(TARGET5) $(TARGET6) $(TARGET7) $(TARGET8) $(TARGET9) \
	$(TARGET10) $(TARGET11) $(TARGET12) $(TARGET13)
re: clean all
0:
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC) $(SRC0) -o $(TARGET0)
1:
	$(CC) $(CFLAGS) $(SRC) $(SRC1) -o $(TARGET1)
2:
	$(CC) $(CFLAGS) $(SRC) $(SRC2) -o $(TARGET2)
3:
	$(CC) $(CFLAGS) $(SRC) $(SRC3) -o $(TARGET3)
4:
	$(CC) $(CFLAGS) $(SRC) $(SRC4) -o $(TARGET4)
5:
	$(CC) $(CFLAGS) $(SRC) $(SRC5) -o $(TARGET5)
6:
	$(BETTY) $(SRC6)
	$(CC) $(CFLAGS) $(SRC) $(SRC6) -o $(TARGET6)
7:
	$(BETTY) $(SRC7)
	$(CC) $(CFLAGS) $(SRC) $(SRC7) -o $(TARGET7)
8:
	$(BETTY) $(SRC8)
	$(CC) $(CFLAGS) $(SRC) $(SRC8) -o $(TARGET8)
9:
	$(BETTY) $(SRC9)
	$(CC) $(CFLAGS) $(SRC) $(SRC9) -o $(TARGET9)
10:
	$(BETTY) $(SRC10)
	$(CC) $(CFLAGS) $(SRC) $(SRC10) -o $(TARGET10)
11:
	$(BETTY) $(SRC11)
	$(CC) $(CFLAGS) $(SRC) $(SRC11) -o $(TARGET11)
12:
	$(BETTY) $(SRC12)
	$(CC) $(CFLAGS) $(SRC) $(SRC12) -o $(TARGET12)
13:
	$(BETTY) $(SRC13)
	$(CC) $(CFLAGS) $(SRC) $(SRC13) -o $(TARGET13)
