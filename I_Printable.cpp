#include "I_Printable.h"

std::ostream& operator<<(std::ostream& stream, const I_Printable& source) {
	source.print(stream);
	return stream;
}