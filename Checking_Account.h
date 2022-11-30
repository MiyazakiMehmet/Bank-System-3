#pragma once
#include "Account.h"

class Checking_Account : public Account {
private:
	static constexpr const char* default_name = "Undefined Name";
	static constexpr double default_balance = 0.0;
	static constexpr double checking_fee = 1.8;
public:
	Checking_Account(std::string name = default_name, double balance = default_balance);
	void print(std::ostream& stream) const override;
	bool deposit(double amount) override;
	bool withdraw(double amount) override;
	std::string return_name() const override;
	~Checking_Account() override = default;
};