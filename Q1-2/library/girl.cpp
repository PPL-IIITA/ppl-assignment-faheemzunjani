#include "girl.hpp"

using namespace data;

/* Constructor */
girl::girl()
{
	this->name_id = "x";
	this->attractiveness = 0;
	this->happiness = 0;
	this->maintainance_cost = 0;
	this->iq = 0;
	this->status = 'x';
	this->criteria = 'x';
	this->commit_type = "x";
	this->commit_to = "x";
}

girl::girl(std::string name_id, int attractiveness, 
		   double maintainance_cost, int iq, char criteria, 
		   std::string commit_type, std::string commit_to)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->maintainance_cost = maintainance_cost;
	this->iq = iq;
	this->status = 'c';
	this->criteria = criteria;
	this->commit_type = commit_type;
	this->commit_to = commit_to;
}

void girl::copy(normal_girl &copy_girl)
{
	this->name_id = copy_girl.get_name();
	this->attractiveness = copy_girl.get_attract();
	this->happiness = copy_girl.get_happiness();
	this->maintainance_cost = copy_girl.get_maint_cost();
	this->iq = copy_girl.get_iq();
	this->status = copy_girl.get_status();
	this->criteria = copy_girl.get_criteria();
	this->commit_type = copy_girl.get_commit_type();
	this->commit_to = copy_girl.get_commit_to();
}

/* Accessors */
std::string girl::get_name()
{
	return this->name_id;
}

int girl::get_attract()
{
	return this->attractiveness;
}

int girl::get_happiness()
{
	return this->happiness;
}

int girl::get_iq()
{
	return this->iq;
}

char girl::get_status()
{
	return this->status;
}

char girl::get_criteria()
{
	return this->criteria;
}

std::string girl::get_commit_type()
{
	return this->commit_type;
}

std::string girl::get_commit_to()
{
	return this->commit_to;
}

double girl::get_maint_cost()
{
	return this->maintainance_cost;
}

/* Mutators */
void girl::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void girl::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void girl::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

/* Miscellaneous Methods */
int girl::can_commit(double budget)
{
	if (this->maintainance_cost < budget) {
		return 1;
	} else {
		return 0;
	}
}