CXX = g++
CXXFLAGS = -Wall
TARGET = myprogram
SRC = main.cpp function.cpp
OBJ = main.o function.o

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)
  
main.o:	main.cpp header.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o
    
function.o: function.cpp header.h
	$(CXX) $(CXXFLAGS) -c function.cpp -o function.o
clean:      
	rm -f $(OBJ) $(TARGET)
