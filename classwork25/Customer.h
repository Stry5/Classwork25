#pragma once
#include <string>
#include "address.h"
namespace customer {
	struct Customer {
		int ID;
		std::string name;
		std::string email;
		address::Address address;
	};
}
