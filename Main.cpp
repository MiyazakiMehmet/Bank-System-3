#include "Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
#include "Saving_Account.h"
#include "Trust_Account.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
	const int int_rate = 3;
	Account* ac1 = new Checking_Account("Adnan", 690);
	Account* ac2 = new Saving_Account("Han", 640, int_rate);
	Account* ac3 = new Trust_Account("Mehmet", 310, int_rate);
	Checking_Account* ac4 = new Checking_Account("Belgin", 720);
	Saving_Account* ac5 = new Saving_Account("Alper", 700, int_rate);
	Trust_Account* ac6 = new Trust_Account("Ant", 690);
	std::vector <Account*> accounts = {ac1,ac2,ac3,ac4,ac5,ac6};

	deposit(accounts, 310);
	withdraw(accounts, 690);
	display(accounts);

	return 0;
}