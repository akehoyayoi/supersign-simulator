CXX=g++
CFLAGS=-Wall -O3 -g -std=c++11
CXXFLAGS=$(CFLAGS)

PROGNAME := taxi
INCDIR := inc
SRCDIR := src
OUTDIR := build
TARGET := $(OUTDIR)/lib$(PROGNAME)
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(addprefix $(OUTDIR)/,$(patsubst %.cpp,%.o,$(SRCS)))
#$(warning $(OBJS))

.PHONY: all clean

all: $(TARGET).a

$(TARGET).a : $(OBJS)
	$(AR) rcs $@ $^

$(OUTDIR)/%.o:%.cpp
	@if [ ! -e `dirname $@` ]; then mkdir -p `dirname $@`; fi
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf $(OUTDIR)

