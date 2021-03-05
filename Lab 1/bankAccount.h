// Vivian Ma, vm8ufh, 2/18, bankAccount.h

#include <iostream>
#ifndef bankAccount_h
#define bankAccount_h

using namespace std;


class bankAccount {
public:

  bankAccount(); // default constructor
  bankAccount(double amount);  // constructor with initial balance
  ~bankAccount();  // destructor
  double withdraw(double amount);  // withdraws specified amount and return new amount in bank 
  double deposit(double amount);  // deposits specified amount of money into account and return new amount 
  double getBalance();  // return the balance in bank account

private:
  double balance;  // hold the amount of money in the bank account 
  
};

#endif 
