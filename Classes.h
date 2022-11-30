#pragma once
#include <iostream>
#include <string>
#include <vector>

class I_Printable {
	friend std::ostream& operator<<(std::ostream stream, const I_Printable& source);
public:
	virtual void print(std::ostream stream) const = 0;

};