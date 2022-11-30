#include <iostream>
#include "Account.h"

Account::Account(std::string name, double balance)
	: name{name}, balance{balance} {}

void Account::print(std::ostream& stream) const {
	stream << "Name: " << name << "\n" << "Balance: " << balance;
}
bool Account::deposit(double amount) {
	if (amount <= 0)
		return false;
	else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (balance - amount <= 0)
		return false;
	else {
		balance -= amount;
		return true;
	}
}

std::string Account::return_name() const {
	return name;
}
