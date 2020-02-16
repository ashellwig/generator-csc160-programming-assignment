//===-- main.cc - main program definition -----------------------*- C++ -*-===//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains the main function to run the program.
///
//===----------------------------------------------------------------------===//

#include "../include/Chapter1Config.hh.in" // CMake project version
#include "../include/general_functions.hh" // general_functions::pauseprompt
/// Include header file <iostream>
#include <iostream> /// std::cout, std::endl

using namespace std;

/**
 * @brief Performs the steps to execute the main application.
 *
 * @param argc Number of arguments provided.
 * @param argv Positional argument provided.
 * @return int The exit code of the program.
 */
int main(int argc, char *argv[]) {
  // Initial variable initialization and declaration
  int average = 0;
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  // Assigning given values to variables
  num1 = 115;
  num2 = 29;
  num3 = -15;

  // Calculate average
  average = (num1 + num2 + num3) / 3;

  // Output values of numbers and their average
  cout << "num1 = " << num1 << '\n'
       << "num2 = " << num2 << '\n'
       << "num3 = " << num3 << '\n'
       << "Average = " << average << endl;

  general_functions::pauseprompt(); // `system("pause")` does not work on Linux.

  return 0;
}
