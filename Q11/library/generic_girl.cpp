#include "generic_girl.hpp"

using namespace data;

generic_girl::generic_girl(std::string name_id, int attractiveness, 
						 double maintainance_cost, int iq, char criteria)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->maintainance_cost = maintainance_cost;
	this->iq = iq;
	this->status = 's';
	this->criteria = criteria;
	this->commit_to = "none";
}

/* Accessors */
std::string generic_girl::get_name()
{
	return this->name_id;
}

int generic_girl::get_attract()
{
	return this->attractiveness;
}

int generic_girl::get_happiness()
{
	return this->happiness;
}

int generic_girl::get_iq()
{
	return this->iq;
}

char generic_girl::get_status()
{
	return this->status;
}

char generic_girl::get_criteria()
{
	return this->criteria;
}

std::string generic_girl::get_commit_type()
{
	return this->commit_type;
}

std::string generic_girl::get_commit_to()
{
	return this->commit_to;
}

double generic_girl::get_maint_cost()
{
	return this->maintainance_cost;
}

/* Mutators */
void generic_girl::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void generic_girl::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void generic_girl::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

void generic_girl::change_commit_type(std::string type)
{
	this->commit_type = type;
}

/* Miscellaneous Methods */
int generic_girl::can_commit(double budget)
{
	if (this->maintainance_cost < budget) {
		return 1;
	} else {
		return 0;
	}
}
