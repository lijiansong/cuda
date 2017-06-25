# Makefile by json-lee

ifndef VERBOSE
QUIET:=@
endif

RM=rm -rf

# Common includes and paths for CUDA
CUDA_PATH ?= "/usr/local/cuda-6.5"
INCLUDES  := -I$(CUDA_PATH)/samples/common/inc/

CUDACC=nvcc
CUDACFLAGS=-g

SRC_DIR?=$(PWD)
SOURCES=$(SRC_DIR)/simpleMultiGPU.cu
OBJECTS=$(SOURCES:.cu=.o)
LDFLAGS=-g

.SUFFIXES: .cu .o

all: multiGPU

multiGPU: $(OBJECTS)
	@echo Compiling $(SOURCES)
	 @echo Linking $@
	$(CUDACC) $(LDFLAGS) $(OBJECTS) -o multiGPU

clean:
	$(RM) *.o multiGPU

.cu.o:simpleMultiGPU.h
	$(CUDACC) $(INCLUDES) $(CUDACFLAGS) $< -c -o $@

