CC = g++
CFLAGS = -Wall -O2
SOURCES = sum_size.cc
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = sum_size

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

clean:
	rm -f $(EXECUTABLE)