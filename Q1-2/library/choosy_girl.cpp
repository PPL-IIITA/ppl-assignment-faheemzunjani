#include "choosy_girl.hpp"

using namespace data;

/* Constructor */
choosy_girl::choosy_girl(std::string name_id, int attractiveness, 
						 double maintainance_cost, int iq, char criteria)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->maintainance_cost = maintainance_cost;
	this->iq = iq;
	this->status = 's';
	this->criteria = criteria;
	this->commit_type = "choosy";
	this->commit_to = "none";
}

/* Accessors */
std::string choosy_girl::get_name()
{
	return this->name_id;
}

int choosy_girl::get_attract()
{
	return this->attractiveness;
}

int choosy_girl::get_happiness()
{
	return this->happiness;
}

int choosy_girl::get_iq()
{
	return this->iq;
}

char choosy_girl::get_status()
{
	return this->status;
}

char choosy_girl::get_criteria()
{
	return this->criteria;
}

std::string choosy_girl::get_commit_type()
{
	return this->commit_type;
}

std::string choosy_girl::get_commit_to()
{
	return this->commit_to;
}

double choosy_girl::get_maint_cost()
{
	return this->maintainance_cost;
}

/* Mutators */
void choosy_girl::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void choosy_girl::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void choosy_girl::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

/* Miscellaneous Methods */
int choosy_girl::can_commit(double budget)
{
	if (this->maintainance_cost < budget) {
		return 1;
	} else {
		return 0;
	}
}