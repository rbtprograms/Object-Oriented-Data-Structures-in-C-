EXE = byValue
OBJS = byValue.o ../Cube.o
CLEAN_RM =

include ../../_make/generic.mk

byRef: byRef.cpp
	$(LD) $^ $(LDFLAGS) Cube.o -o $@

byPoint: byPoint.cpp
	$(LD) $^ $(LDFLAGS) Cube.o -o $@

all: byRef byPoint
CLEAN_RM += byRef byPoint


