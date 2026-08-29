CC			= /usr/bin/gcc
CXX			= /usr/bin/g++
SRCS		= hello_world.c hello.c  getenv_demo.c
CXXSRCS		=  
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

%.o: %.c
	$(CC) $(CFLAGS) -c $<
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< 

%.o: %.c20
	$(CXX) $(CXX20FLAGS) -c $<

$(EXECS): $(OBJS)
	$(CC) $(LDFLAGS) $< -o $@

$(CXXEXECS): $(CXXOBJS)
	$(CXX) $(LDFLAGS) $< -o $@

$(CXX20EXECS): $(CXX20OBJS)
	$(CXX) $(LDFLAGS) $< -o $@

# In a Makefile, $@ is an automatic variable that represents the file name of the target of the rule.
