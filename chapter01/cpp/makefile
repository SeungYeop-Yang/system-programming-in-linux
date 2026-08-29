.SUFFIXES: .c .cpp .c20

CC			= /usr/bin/gcc
CXX			= /usr/bin/g++

SRCS		= 
CXXSRCS		=  hello_world.cpp hello.cpp getenv_demo.cpp
CXX20SRCS	=  c20_getenv_demo.c20

OBJS    	= $(patsubst %.c,%.o,$(SRCS))
CXXOBJS 	= $(patsubst %.cpp,%.o,$(CXXSRCS))
CXX20OBJS	= $(patsubst %.c20,%.o,$(CXX20SRCS))

EXECS		= $(patsubst %.c,%,$(SRCS))
CXXEXECS	= $(patsubst %.cpp,%,$(CXXSRCS))
CXX20EXECS	= $(patsubst %.c20,%,$(CXX20SRCS))

CFLAGS		= -Wall -g 
CXXFLAGS 	= -Wall -Wextra -std=c++17 -O2
CXX20FLAGS  = -Wall -Wextra -std=c++20 -x c++ -O2

MAKEFLAGS 	+= -k

.PHONY: all clean cleanall 

all: $(EXECS) $(CXXEXECS) $(CXX20EXECS)

clean:
	-rm -f $(OBJS) $(CXXOBJS) $(CXX20OBJS)

cleanall:
	-rm -f $(OBJS) $(EXECS) $(CXXOBJS) $(CXXEXECS) $(CXX20OBJS) $(CXX20EXECS)

.c:
	$(CC) $(CFLAGS) -c $@.c

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< 

%.o: %.c20
	$(CXX) $(CXX20FLAGS) -c $<

$(EXECS): $(OBJS)
	$(CC) $(LDFLAGS) $@.o -o $@

$(CXXEXECS): $(CXXOBJS)
	$(CXX) $(LDFLAGS) $@.o -o $@

$(CXX20EXECS): $(CXX20OBJS)
	$(CXX) $(LDFLAGS) $@.o -o $@

# In a Makefile, $@ is an automatic variable that represents the file name of the target of the rule.
