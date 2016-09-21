#pragma once

using namespace std;

class Account {
public:
	Account(int);

	int getBalance();

	void credit(int);

	void debit(int);
private:
	int accountBalance;
};
