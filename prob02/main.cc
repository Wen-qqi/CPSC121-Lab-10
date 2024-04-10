// Wen Fan
// CPSC 121L - 11
// April 15, 2024
// WenFan@csu.fullerton.edu
// @Wen-qqi
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <map>
#include <vector>

#include "bank.h"

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a Bank object, name it anything you'd like :)
  // =======================================================
  Bank new_bank("MyBank");

  // =================== YOUR CODE HERE ===================
  // 2. Create 3 new accounts in your bank.
  //    * The 1st account should belong to "Tuffy", with
  //      a balance of $121.00
  //    * The 2nd account should belong to "Frank", with
  //      a balance of $1234.56
  //    * The 3nd account should belong to "Oreo", with
  //      a balance of $140.12
  // =======================================================
  int account1 = new_bank.CreateAccount("Tuffy", 121.00);
  new_bank.CreateAccount("Frank", 1234.56);
  new_bank.CreateAccount("Oreo", 140.12);

  // =================== YOUR CODE HERE ===================
  // 3. Deactivate Tuffy's account.
  // =======================================================
  new_bank.DeactivateAccount(account1);

  // =================== YOUR CODE HERE ===================
  // 4. Call DisplayBalances to print out all *active*
  //    account balances.
  // =======================================================
  new_bank.DisplayBalances();
}
