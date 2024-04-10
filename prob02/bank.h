// Wen Fan
// CPSC 121L - 11
// April 15, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
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

#ifndef BANK_H
#define BANK_H

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
  Bank(const std::string& bank_name) : bank_name_(bank_name) {}

  const std::string& GetBankName() const {
    return bank_name_;
  }

  const std::map<int, Account>& GetAccounts() const {
    return accounts_;
  }

  int CreateAccount(const std::string& bank_name, double initial_balance) {
    Account new_account(bank_name, initial_balance);
    int account_id = GenerateAccountId();
    accounts_.insert({account_id, new_account});
    return account_id;
  }

  int TotalAccounts() const {
    return accounts_.size();
  }

  void DisplayBalances() {
    for (std::map<int, Account>::iterator account_it = accounts_.begin();
         account_it != accounts_.end(); account_it++) {
      std::cout << account_it->second.GetAccountHolder() << ": "
                << "$" << account_it->second.GetBalance() << "\n";
    }
  }

  void DeactivateAccount(int id) {
    std::map<int, Account>::iterator find_it = accounts_.find(id);
    if (find_it != accounts_.end()) {
      accounts_.erase(find_it);
    }
  }

 private:
  // We provided this helper function to you to randomly generate
  // a new Bank Account ID to be used in CreateAccount.
  std::string bank_name_;
  std::map<int, Account> accounts_;
  int GenerateAccountId() const {
    return std::rand() % 9000 + 1000;  // [1000, 9999]
  }
};
#endif