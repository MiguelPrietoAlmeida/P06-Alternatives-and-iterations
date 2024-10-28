/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date 28th Oct 2024 
 * @brief the program reads several descriptions of rectangles and circles, and for each one prints its corresponding area. 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
  int areas_number;
  std::cin >> areas_number;
  int counter{1};
  while (counter <= areas_number) {
    std::string area_type;
    std::cin >> area_type;
    ++counter;
    if (area_type == "rectangle") {
      double base;
      double heigh;
      std::cin >> base >> heigh;
      double area{base * heigh};
      std::cout << std::fixed << std::setprecision(6) << area << std::endl;
    }
    else if (area_type == "circle") {
      double radio;
      std::cin >> radio;
      double area{radio * radio * M_PI};
      std::cout << std::fixed << std::setprecision(6) << area << std::endl;
    }
  }
  return 0;
}

      
