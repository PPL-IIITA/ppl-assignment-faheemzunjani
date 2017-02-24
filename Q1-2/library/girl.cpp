#include "girl.hpp"

using namespace data;

girl::girl(std::string name_id, int attractiveness, double maintainance_cost,
           int iq, char criteria, std::string commit_type)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->maintainance_cost = maintainance_cost;
	this->iq = iq;
	this->status = 's';
	this->criteria = criteria;
	this->commit_type = commit_type;
	this->commit_to = "none";
}

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

int girl::can_commit(double budget)
{
	if (this->maintainance_cost < budget) {
		return 1;
	} else {
		return 0;
	}
}