#pragma once
#include "Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
#include <vector>

void display(std::vector<Account*>& accounts);
void deposit(std::vector<Account*>& accounts, double amount);
void withdraw(std::vector<Account*>& accounts, double amount);