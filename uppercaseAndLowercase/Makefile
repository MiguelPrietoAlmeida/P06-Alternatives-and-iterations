 # Universidad de La Laguna
 # Escuela Superior de Ingeniería y Tecnología
 # Grado en Ingeniería Informática
 # Informática Básica
 #
 # @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 # @date Oct 28th 2024
 # @brief the program 

CXX = g++ #compilador c++
CXXFLAGS = -std=c++17 -Wall #opciones de compilación utilizar compilador c++17 y wall para mostrar todos los mensajes de advertencia del compilador

TARGET = a.out #nombre del ejecutable
SRCS = uppercase_and_lowercase.cc #Lista de archivos fuente
OBJS = $(SRCS:.CC=.O) #GENERA LISTA DE ARCHIVOS OBJETO (.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: #eliminar archivos objeto
	rm -f $(OBJS)
