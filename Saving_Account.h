#pragma once
#pragma once
#include "Account.h"

class Saving_Account : public Account {
	static constexpr const char* default_name = "Undefined Name";
	static constexpr double default_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
protected:
	double int_rate;
public:
	Saving_Account(std::string base_name = default_name, double base_balance = default_balance, double int_rate = def_int_rate);
	void print(std::ostream& stream) const override;
	bool deposit(double amount) override;
	bool withdraw(double amount) override;
	std::string return_name() const override;
	~Saving_Account() override = default;
};