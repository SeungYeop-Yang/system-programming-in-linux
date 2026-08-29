CC			= /usr/bin/gcc
CXX			= /usr/bin/g++
SRCS		= 
CXXSRCS		=  hello_world.cpp hello.cpp getenv_demo.cpp
OBJS    	= $(patsubst %.c,%.o,$(SRCS))
CXXOBJS 	= $(patsubst %.cpp,%.o,$(CXXSRCS))
EXECS		= $(patsubst %.c,%,$(SRCS))
CXXEXECS	= $(patsubst %.cpp,%,$(CXXSRCS))
CFLAGS		= -Wall -g 
CXXFLAGS 	= -Wall -Wextra -std=c++17 -O2
MAKEFLAGS 	+= -k

.PHONY: all clean cleanall 

all: $(EXECS) $(CXXEXECS)

clean:
	-rm -f $(OBJS) $(CXXOBJS)

cleanall:
	-rm -f $(OBJS) $(EXECS) $(CXXOBJS) $(CXXEXECS)

.c:
	$(CC) $(CFLAGS) -c $@.c

.cpp:
	$(CXX) $(CXXFLAGS) -c $@.cpp 

$(EXECS): $(OBJS)
	$(CC) $(LDFLAGS) $@.o -o $@

$(CXXEXECS): $(CXXOBJS)
	$(CXX) $(LDFLAGS) $@.o -o $@

# In a Makefile, $@ is an automatic variable that represents the file name of the target of the rule.