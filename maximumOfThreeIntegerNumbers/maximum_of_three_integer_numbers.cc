/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date 28th Oct 2024
 * @brief the program reads three numbers and prints their maximum. 
 */

#include <iostream>
int main() {
  int number1;
  int number2;
  int number3;
  std::cin >> number1 >> number2 >> number3;
  if (number1 > number2) {
    if (number1 > number3) {
      std::cout << number1 << std::endl;;
    }
    else {
      std::cout << number3 << std::endl;
    }
  }
  else {
    if (number2 > number3) {
      std::cout << number2 << std::endl;
    }
    else {
      std::cout << number3 << std::endl;
    }
  }
  return 0;
}
