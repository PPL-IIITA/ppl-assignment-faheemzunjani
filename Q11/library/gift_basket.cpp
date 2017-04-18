#include "gift_basket.hpp"

using namespace data;

gift_basket::gift_basket()
{
	this->total_cost = 0;
}

double gift_basket::get_total_cost()
{
	return this->total_cost;
}

void gift_basket::add_cost(double cost)
{
	this->total_cost = this->total_cost + cost;
}