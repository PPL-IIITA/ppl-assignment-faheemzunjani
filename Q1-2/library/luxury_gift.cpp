#include "luxury_gift.hpp"

using namespace data;

luxury_gift::luxury_gift(std::string name, float price, int value, int rating, int difficulty)
{
	this->name = name;
	this->price = price;
	this->value = value;
	this->rating = rating;
	this->difficulty = difficulty;
}

std::string luxury_gift::get_name()
{
	return this->name;
}

float luxury_gift::get_price()
{
	return this->price;
}

int luxury_gift::get_value()
{
	return this->value;
}

int luxury_gift::get_rating()
{
	return this->rating;
}

int luxury_gift::get_difficulty()
{
	return this->difficulty;
}