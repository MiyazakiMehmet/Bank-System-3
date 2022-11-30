#include "Saving_Account.h"

Saving_Account::Saving_Account(std::string base_name, double base_balance, double int_rate)
	: Account{ base_name,base_balance }, int_rate{ int_rate } {}

void Saving_Account::print(std::ostream& stream) const {
	stream << "Name: " << name << "\n" << "Balance: " << balance;
}

bool Saving_Account::deposit(double amount) {
	amount += amount * (int_rate / 100);
	return Account::deposit(amount);
}

bool Saving_Account::withdraw(double amount) {
	return Account::deposit(amount);
}

std::string Saving_Account::return_name() const {
	return name;
}