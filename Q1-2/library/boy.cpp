#include "boy_class.hpp"

using namespace data;

boy::boy(std::string name_id, int attractiveness, int min_attractiveness_req,
		 double budget, int iq, std::string commit_type)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->min_attractiveness_req = min_attractiveness_req;
	this->budget = budget;
	this->iq = iq;
	this->status = 's';
	this->commit_type = commit_type;
	this->commit_to = "none";
}

double boy::get_budget()
{
	return this->budget;
}

void boy::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void boy::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void boy::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

int boy::can_commit(double maintainance_cost, int attractiveness)
{
	if ((maintainance_cost <= this->budget) && 
		(attractiveness > this->min_attractiveness_req)) {
		return 1;
	} else {
		return 0;
	}
}