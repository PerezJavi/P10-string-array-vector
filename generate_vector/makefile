CC = g++
CFLAGS = -Wall -O2
SOURCES = vector.cc
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = vector

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

clean:
	rm -f $(EXECUTABLE)
