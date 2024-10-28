/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date 28th Oct 2024
 * @brief the program reads a letter and prints it in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.
 */

#include <iostream>
#include <cctype>
int main() {
  char letter;
  std::cin >> letter;
  if (std::isupper(letter)) {
    letter = std::tolower(letter);
  }
  else {
    letter = std::toupper(letter);
  }
  std::cout << letter << std::endl;
  return 0;
}

