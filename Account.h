#pragma once
#include "I_Printable.h"


class Account : public I_Printable {
private:
	static constexpr const char* default_name = "Undefined Name";
	static constexpr double default_balance = 0.0;
protected:
	std::string name;
	double balance;
public:
	Account(std::string name = default_name, double balance = default_balance);
	void print(std::ostream& stream) const override;
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	virtual std::string return_name() const = 0;
	~Account() override = default;
};