/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date 28th Oct 2024
 * @brief the program reads two numbers a and b, and prints all numbers between a and b. 
 */

#include <iostream> 
int main() {
  int number1;
  int number2;
  std::cin >> number1 >> number2;
  while (number1 < number2) {
    std::cout << number1 << ",";
    ++number1;
  }
  if (number1 <= number2) {
    std::cout << number2 << std::endl;
  }
  else {
    std::cout << std::endl;
  }
  return 0;
}
