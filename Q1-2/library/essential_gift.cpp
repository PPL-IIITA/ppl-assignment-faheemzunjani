#include "essential_gift_class.hpp"

using namespace data;

essential_gift::essential_gift(float price, int value)
{
	this->price = price;
	this->value = value;
}

float essential_gift::get_price()
{
	return this->price;
}

int essential_gift::get_value()
{
	return this->value;
}