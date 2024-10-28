/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date 28th Oct 2024 
 * @brief the program reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n. 
 */

#include <iostream>
#include <iomanip>
int  main() {
  int number;
  std::cin >> number;
  double denominator{1};
  double harmonic{0};
  while (denominator <=  number) {
    harmonic += 1 / denominator;
    ++denominator;
  }
  std::cout << std::fixed << std::setprecision(4) << harmonic << std::endl;
  return 0;
}
