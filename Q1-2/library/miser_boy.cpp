#include "miser_boy_class.hpp"

using namespace data;

miser_boy::miser_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
		 double budget, int iq)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->min_attractiveness_req = min_attractiveness_req;
	this->budget = budget;
	this->iq = iq;
	this->status = 's';
	this->commit_type = "miser";
	this->commit_to = "none";
}

double miser_boy::get_budget()
{
	return this->budget;
}

void miser_boy::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void miser_boy::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void miser_boy::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

int miser_boy::can_commit(double maintainance_cost, int attractiveness)
{
	if ((maintainance_cost <= this->budget) && 
		(attractiveness > this->min_attractiveness_req)) {
		return 1;
	} else {
		return 0;
	}
}