#include "geek_boy_class.hpp"

using namespace data;

geek_boy::geek_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
		 double budget, int iq)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->min_attractiveness_req = min_attractiveness_req;
	this->budget = budget;
	this->iq = iq;
	this->status = 's';
	this->commit_type = "geek";
	this->commit_to = "none";
}

double geek_boy::get_budget()
{
	return this->budget;
}

void geek_boy::set_happiness(int happiness)
{
	this->happiness = happiness;
}

void geek_boy::change_status(char status)
{
	this->status = status;
	this->commit_to = "none";
}

void geek_boy::change_status(char status, std::string commit_to)
{
	this->status = status;
	this->commit_to = commit_to;
}

int geek_boy::can_commit(double maintainance_cost, int attractiveness)
{
	if ((maintainance_cost <= this->budget) && 
		(attractiveness > this->min_attractiveness_req)) {
		return 1;
	} else {
		return 0;
	}
}