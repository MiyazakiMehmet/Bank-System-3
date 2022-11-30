#include "Account_Util.h"

void display(std::vector<Account*>& accounts) {
	for (const auto c : accounts) {
		std::cout << *c << std::endl;
		std::cout << std::endl;
	}
}

void deposit(std::vector<Account*>& accounts, double amount) {
	for (const auto acc : accounts) {
		if (acc->deposit(amount)) {
			std::cout << "Deposit successful (amount: " << amount << ")" << " to " << acc->return_name() << std::endl;
		}
		else
			std::cout << "Deposit failed to " << acc->return_name() << std::endl;
	}
}

void withdraw(std::vector<Account*>& accounts, double amount) {
	for (const auto acc : accounts) {
		if (acc->withdraw(amount)) {
			std::cout << "Withdraw successful (amount: " << amount << ")" << " to " << acc->return_name() << std::endl;
		}
		else
			std::cout << "Withdraw failed to " << acc->return_name() << std::endl;
	}
}