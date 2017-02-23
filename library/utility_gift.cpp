#include "utility_gift_class.hpp"

using namespace data;

utility_gift::utility_gift(float price, int value, int utility_value, 
						   std::string utility_class)
{
	this->price = price;
	this->value = value;
	this->utility_value = utility_value;
	this->utility_class = utility_class;
}

float utility_gift::get_price()
{
	return this->price;
}

int utility_gift::get_value()
{
	return this->value;
}

int utility_gift::get_utility_value()
{
	return this->utility_value;
}

std::string utility_gift::get_utility_class()
{
	return this->utility_class;
}