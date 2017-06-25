# Makefile by json-lee

ifndef VERBOSE
QUIET:=@
endif

RM=rm -rf

# Common includes and paths for CUDA
CUDA_PATH ?= "/usr/local/cuda-6.5"
#INCLUDES  := -I$(CUDA_PATH)/samples/common/inc/

CUDACC=nvcc
CUDACFLAGS=-g

SRC_DIR?=$(PWD)
SOURCES=$(SRC_DIR)/cudatest.cu
OBJECTS=$(SOURCES:.cu=.o)
LDFLAGS=-g

.SUFFIXES: .cu .o

all: cuda-test

cuda-test: $(OBJECTS)
	@echo Compiling $(SOURCES)
	 @echo Linking $@
	$(CUDACC) $(LDFLAGS) $(OBJECTS) -o cuda-test

clean:
	$(RM) *.o cuda-test

.cu.o:
	$(CUDACC) $(INCLUDES) $(CUDACFLAGS) $< -c -o $@

