// Vivian Ma, vm8ufh, 2/18, bankAccount.h

#include <iostream>
#include <string>
#include "bankAccount.h"

using namespace std;

bankAccount::bankAccount() {
  balance = 0.00;
}

bankAccount::bankAccount(double amount) {
  balance = amount;
}

bankAccount::~bankAccount() {}

double bankAccount::withdraw(double amount) {
  if(amount <= balance){
    balance -= amount;
    return balance;
  }
  else
    return balance; 
}

double bankAccount::deposit(double amount) {
  balance += amount;
  return balance;
}

double bankAccount::getBalance() {
  return balance;
}
