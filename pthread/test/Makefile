# Makefile by json-lee

ifndef VERBOSE
QUIET:=@
endif

SRC_DIR?=$(PWD)
CC = g++ -g
COMMON_FLAGS=-c -w -O2
LOADFLAGS=-std=c++11 -pthread
#SOURCES=main.cpp utils.cpp
SOURCES=$(SRC_DIR)/test.cpp
PROJECT_OBJECTS=$(SOURCES:.c=.o)
PROJECT=test

all: $(SOURCES) $(PROJECT)

$(PROJECT): $(PROJECT_OBJECTS)
        @echo Compiling $(SOURCES)
        @echo Linking $@
        $(CC) $(PROJECT_OBJECTS) -o $@ $(LOADFLAGS)

.c.o:
        $(CC) $(COMMON_FLAGS) $< -o $@ $(LOADFLAGS)
clean:
        $(QUIET)rm -f *o *.txt $(PROJECT)
