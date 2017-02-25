#include "normal_girl.hpp"

using namespace data;

/* Constructor */
// normal_girl::normal_girl()
// {
// 	this->name_id = "x";
// 	this->attractiveness = 0;
// 	this->happiness = 0;
// 	this->maintainance_cost = 0;
// 	this->iq = 0;
// 	this->status = 'x';
// 	this->criteria = 'x';
// 	this->commit_type = "x";
// 	this->commit_to = "x";
// }

normal_girl::normal_girl(std::string name_id, int attractiveness, 
						 double maintainance_cost, int iq, char criteria)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->maintainance_cost = maintainance_cost;
	this->iq = iq;
	this->status = 's';
	this->criteria = criteria;
	this->commit_type = "normal";
	this->commit_to = "none";
}

/* Accessors */
std::string normal_girl::get_name()
{
	return this->name_id;
}

int normal_girl::get_attract()
{
	return this->attractiveness;
}

int normal_girl::get_happiness()
{
	return this->happiness;
}

int normal_girl::get_iq()
{
	return this->iq;
}

char normal_girl::get_status()
{
	return this->status;
}

char normal_girl::get_criteria()
{
	return this->criteria;
}

std::string normal_girl::get_commit_type()
{
	return this->commit_type;
}

std::string normal_girl::get_commit_to()
{
	return this->commit_to;
}

double normal_girl::get_maint_cost()
{
	return this->maintainance_cost;
}

/* Mutators */
void normal_girl::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void normal_girl::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void normal_girl::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

/* Miscellaneous Methods */
int normal_girl::can_commit(double budget)
{
	if (this->maintainance_cost < budget) {
		return 1;
	} else {
		return 0;
	}
}
