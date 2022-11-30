#pragma once
#include "Saving_Account.h"

class Trust_Account : public Saving_Account {
private:
	static constexpr const char* default_name = "Undefined Name";
	static constexpr double default_amount = 0.0;
	static constexpr double def_int_rate = 0.0;
	static constexpr int max_withdraw_count = 3;
	static constexpr int bonus_amount = 50;
	static constexpr int withdraw_threshold = 5000;
protected:
	int withdraw_count;
public:
	Trust_Account(std::string base_name = default_name, double base_balance = default_amount, double base_int_rate = def_int_rate);
	void print(std::ostream& stream) const override;
	bool deposit(double amount) override;
	bool withdraw(double amount) override;
	std::string return_name() const override;
	~Trust_Account() override = default;
};