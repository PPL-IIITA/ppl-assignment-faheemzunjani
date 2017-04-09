#include "generic_gift.hpp"

using namespace data;

generic_gift::generic_gift(std::string name, float price, int value)
{
	this->name = name;
	this->price = price;
	this->value = value;
}

std::string generic_gift::get_name()
{
	return this->name;
}

float generic_gift::get_price()
{
	return this->price;
}

int generic_gift::get_value()
{
	return this->value;
}