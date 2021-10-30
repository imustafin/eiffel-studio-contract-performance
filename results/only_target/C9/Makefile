INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/time/spec/include"
SHELL = /bin/sh
CC = gcc
CPP = g++
CFLAGS = -O3 -pipe -fPIC -D_GNU_SOURCE -m64  -DEIF_NO_RTCV -I"/opt/eiffel-studio/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O3 -pipe -fPIC -D_GNU_SOURCE -m64  -DEIF_NO_RTCV -I"/opt/eiffel-studio/studio/spec/linux-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = -m elf_x86_64
CCLDFLAGS = -m64  
LDSHAREDFLAGS =  -m elf_x86_64 -shared -o
EIFLIB = "/opt/eiffel-studio/studio/spec/linux-x86-64/lib/libfinalized.a"
EIFTEMPLATES = /opt/eiffel-studio/studio/config/linux-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/opt/eiffel-studio/studio/spec/linux-x86-64/bin/x2c"
SHAREDLINK = ld
SHAREDLIBS = -lm
SHARED_SUFFIX = .so
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = eiffel-studio-contract-timing.so 
.SUFFIXES: .x .xpp .cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

.x.o:
	$(X2C) $< $*.c
	$(CC) $(CFLAGS) -c $*.c
	$(RM) $*.c

.xpp.o:
	$(X2C) $< $*.cpp
	$(CPP) $(CPPFLAGS) -c $*.cpp
	$(RM) $*.cpp

.x.c:
	$(X2C) $< $*.c

.xpp.cpp:
	$(X2C) $< $*.cpp

OBJECTS = big_file_C9_c.o 

OLDOBJECTS =  sp434.o ar416.o ty432.o na401.o na437.o sp435.o re428.o li421.o \
	ar415.o ar404.o ar440.o re413.o re449.o to433.o ge400.o ge436.o \
	in429.o re430.o tr426.o se405.o se441.o ar412.o ar448.o dy407.o \
	dy443.o bo414.o ta403.o ta439.o li408.o li444.o ty431.o ac423.o \
	co417.o bi406.o bi442.o fi418.o dy410.o dy446.o ch409.o ch445.o \
	co425.o 

all: Cobj9.o

Cobj9.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj9.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

