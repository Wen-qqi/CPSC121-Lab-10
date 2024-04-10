// Wen Fan
// CPSC 121L - 11
// April 15, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
 public:
  Account(const std::string& name, double balance)
      : account_holder_(name), balance_(balance) {}

  const std::string& GetAccountHolder() const {
    return account_holder_;
  }
  double GetBalance() const {
    return balance_;
  }

 private:
  std::string account_holder_;
  double balance_;
};
#endif