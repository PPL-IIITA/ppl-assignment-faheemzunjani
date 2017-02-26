#include "couple.hpp"
#include <cmath>

using namespace data;
using namespace std;

/* Constructor */
couple::couple(geek_boy &copy_boy, normal_girl &copy_girl)
{
	this->cboy.copy(copy_boy);
	this->cgirl.copy(copy_girl);
	this->happiness = 0;
	this->compatibility = 0;
}

/* Accessors */
int couple::get_happiness()
{
	return this->happiness;
}

int couple::get_compatibility()
{
	return this->compatibility;
}

/* Mutators */

void couple::set_happiness()
{
	int value = 0;

	for (int i = 0; i < gifts.essential.size(); i++) {
		value += gifts.essential[i].get_value();
	}
	for (int i = 0; i < gifts.luxury.size(); i++) {
		value += gifts.luxury[i].get_value();
	}
	for (int i = 0; i < gifts.utility.size(); i++) {
		value += gifts.utility[i].get_value();
	}

	cgirl.set_happiness(gifts.get_total_cost(), value);
	cboy.set_happiness(gifts.get_total_cost(), cgirl.get_happiness(), 
					   cgirl.get_iq());

	this->happiness = cboy.get_happiness() + cgirl.get_happiness();
}

void couple::set_compatibility()
{
	this->compatibility = (int)(cboy.get_budget() - cgirl.get_maint_cost())
				+ fabs((cboy.get_attract() - cgirl.get_attract()))
				+ fabs((cboy.get_iq() - cgirl.get_iq()));
}