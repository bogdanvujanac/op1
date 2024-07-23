# ime izlaznog fajla
TARGET = main

# kompajler
CC = g++ 
# opcije komplajlera
CFLAGS = -std=c++11 -Wall

# izvorni fajlovi
SRCS = main.cpp osoba.cpp student.cpp profesor.cpp kurs.cpp

# objektni fajlovi
OBJS = $(SRCS:.cpp=.o)

# kompajliranje izvornih fajlova u objektne fajlove
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

# izgradnja izvrsnog fajla iz objektnih fajlova
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# brisanje izlaznih fajlova
clean:
	rm -f $(TARGET) $(OBJS)
