#include "luxury_gift.hpp"

using namespace data;

luxury_gift::luxury_gift(std::string name, float price, int value, int rating, int difficulty):
			 generic_gift(name, price, value)
{
	this->rating = rating;
	this->difficulty = difficulty;
}

int luxury_gift::get_rating()
{
	return this->rating;
}

int luxury_gift::get_difficulty()
{
	return this->difficulty;
}