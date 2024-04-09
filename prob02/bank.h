// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <memory>
#include <string>

#include "account.h"

class Bank {
 public:
  // ======================= YOUR CODE HERE =======================
  // Write the Bank class here. Refer to the README for the member
  // variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================

 private:
  // We provided this helper function to you to randomly generate
  // a new Bank Account ID to be used in CreateAccount.
  int GenerateAccountId() const {
    return std::rand() % 9000 + 1000;  // [1000, 9999]
  }
};