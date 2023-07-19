#
# Makefile config 
#

# Compile
CC	:= gcc
CFLAGS	:= -std=c99 -Wpedantic -Wall -Wextra -pipe
CPPFLAGS := -D_POSIX_C_SOURCE=200809L

# Library
LIB	:= -lncurses -lpthread

# Optimization
OFLAG	:= -g -O0
#OFLAG	:= -Os

# Install
INSTALL_PATH := /usr/bin
