//===-- general_functions.h - global functions definitions =-----*- C++ -*-===//
//
// Module 1 Chapter 2 Program 1
// Ashton Scott Hellwig
// CSC 160: Introduction to Programming (C++)
// 02 Feb 2020
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains global function definitions used to emulate
/// system-dependent Windows libraries.
///
//===----------------------------------------------------------------------===//

#include "../include/general_functions.hh"
#include <iostream>

/**
 * \brief Prompts the user to press <RET> to continue running the program.
 *
 * \return int Exit code.
 */
int general_functions::pauseprompt() {
  std::cout << "Press enter to continue..." << '\n';
  std::cin.ignore();

  return 0;
}
