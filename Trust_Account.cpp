#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string base_name, double base_balance, double base_int_rate)
	: Saving_Account(base_name,base_balance,base_int_rate), withdraw_count{0}{}

void Trust_Account::print(std::ostream& stream) const {
	stream << "Name: " << name << "\n" << "Balance: " << balance;
}

bool Trust_Account::deposit(double amount) {
	if (amount > withdraw_threshold)
		amount += bonus_amount;
	return Saving_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (withdraw_count > max_withdraw_count)
		return false;
	else {
		withdraw_count++;
		return Saving_Account::withdraw(amount);
	}
}

std::string Trust_Account::return_name() const {
	return name;
}