#include <iostream>
#include "Account.h"
using namespace std;

int Account::getBalance() {
	return accountBalance;
}

void Account::credit(int balance) {
	accountBalance = accountBalance + balance;
}

void Account::debit(int balance) {
	if (balance > accountBalance) {
		balance = 0;
		cout << "Debit amount exceeded account balance!" << endl;
	}
	accountBalance = accountBalance - balance;
}

Account::Account(int balance) {
	if (balance < 0) {
		balance = 0;
		cout << "Invalid balance!" << endl;
	}
	accountBalance = balance;
}