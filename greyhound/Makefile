CXX=g++
CFLAGS=-I/usr/local/include/SDL 

LDFLAGS=-L/usr/local/lib -lSDL -lSDL_image -lstdc++

OBJS= \
	box.o \
	player.o \
	room.o \
	tileroom.o \
	fieldsroom.o \
		
all: target

clean:
	rm -f *.o Adventure 

target: $(OBJS) main.o
	$(CXX) -o Adventure main.o $(OBJS) $(LDFLAGS)	

.cc.o:
	$(CXX) $(CFLAGS) -c $<
