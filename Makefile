.SUFFIXES:

src = Problems

DIR = $(addprefix $(src)/, \
		1-Multiples)

CC = g++
CF = -o -Wall

# *.o: *.cpp
# 	$(CC) $(CF) $(DIR)/*.cpp

