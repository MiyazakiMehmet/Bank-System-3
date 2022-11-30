#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
	: Account(name,balance) {}

void Checking_Account::print(std::ostream& stream) const {
	stream << "Name: " << name << "\n" << "Balance: " << balance;
}

bool Checking_Account::deposit(double amount) {
	amount += checking_fee;
	return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount) {
	return Account::withdraw(amount);
}

std::string Checking_Account::return_name() const {
	return name;
}
