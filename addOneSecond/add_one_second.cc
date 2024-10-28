/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date 28th Oct 2024 
 * @brief the program adds one second to a clock time, given its hours, minutes and seconds.
 */

#include <iostream>
#include <iomanip>
int main() {
  int hours;
  int minutes;
  int seconds;
  std::cin >> hours >> minutes >> seconds;
  ++seconds;
  if (seconds == 60) {
    seconds = 0;
    ++minutes;
  }
  if (minutes == 60) {
    minutes = 0;
    ++hours;
  }
  if (hours == 24) {
    hours = 0;
  }
  std::cout << std::setw(2) << std::setfill('0') << hours << ":"; 
  std::cout << std::setw(2) << std::setfill('0') << minutes << ":";
  std::cout << std::setw(2) << std::setfill('0') << seconds << std::endl;
  return 0;
}
