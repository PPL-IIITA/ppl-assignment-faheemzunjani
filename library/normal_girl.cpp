#include "normal_girl_class.hpp"

using namespace data;

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

int normal_girl::can_commit(double budget)
{
	if (this->maintainance_cost < budget) {
		return 1;
	} else {
		return 0;
	}
}