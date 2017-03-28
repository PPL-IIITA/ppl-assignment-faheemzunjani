#include "generic_boy.hpp"

using namespace data;

/* Constructor */
generic_boy::generic_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
		 double budget, int iq)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->min_attractiveness_req = min_attractiveness_req;
	this->budget = budget;
	this->iq = iq;
	this->status = 's';
	this->commit_to = "none";
}

/* Accessors */
std::string generic_boy::get_name()
{
	return this->name_id;
}

int generic_boy::get_attract()
{
	return this->attractiveness;
}

int generic_boy::get_min_attract_req()
{
	return this->min_attractiveness_req;
}

int generic_boy::get_happiness()
{
	return this->happiness;
}

int generic_boy::get_iq()
{
	return this->iq;
}

char generic_boy::get_status()
{
	return this->status;
}

std::string generic_boy::get_commit_type()
{
	return this->commit_type;
}

std::string generic_boy::get_commit_to()
{
	return this->commit_to;
}

double generic_boy::get_budget()
{
	return this->budget;
}

/* Mutators */
void generic_boy::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void generic_boy::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void generic_boy::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

void generic_boy::change_commit_type(std::string type)
{
	this->commit_type = type;
}

/*Miscelleneous Methods */
int generic_boy::can_commit(double maintainance_cost, int attractiveness)
{
	if ((maintainance_cost <= this->budget) && 
		(attractiveness > this->min_attractiveness_req)) {
		return 1;
	} else {
		return 0;
	}
}

