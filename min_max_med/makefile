CC = g++
CFLAGS = -Wall -O2
SOURCES = min_max_med.cc
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = min_max_med

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

clean:
	rm -f $(EXECUTABLE)