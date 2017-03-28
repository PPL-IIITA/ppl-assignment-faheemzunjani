#include "utility_gift.hpp"

using namespace data;

utility_gift::utility_gift(std::string name, float price, int value, int utility_value, 
						   std::string utility_class):
			  generic_gift(name, price, value)
{
	this->utility_value = utility_value;
	this->utility_class = utility_class;
}

int utility_gift::get_utility_value()
{
	return this->utility_value;
}

std::string utility_gift::get_utility_class()
{
	return this->utility_class;
}