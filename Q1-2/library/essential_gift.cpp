#include "essential_gift.hpp"

using namespace data;

essential_gift::essential_gift(std::string name, float price, int value)
{
	this->name = name;
	this->price = price;
	this->value = value;
}

std::string essential_gift::get_name()
{
	return this->name;
}

float essential_gift::get_price()
{
	return this->price;
}

int essential_gift::get_value()
{
	return this->value;
}