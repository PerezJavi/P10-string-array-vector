CC = g++
CFLAGS = -Wall -O2
SOURCES = unir_en_orden.cc
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = unir_en_orden

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

clean:
	rm -f $(EXECUTABLE)