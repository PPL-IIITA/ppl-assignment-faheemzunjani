#include "boy.hpp"

using namespace data;

/* Constructor */
boy::boy()
{
	this->name_id = "x";
	this->attractiveness = 0;
	this->happiness = 0;
	this->min_attractiveness_req = 0;
	this->budget = 0;
	this->iq = 0;
	this->status = 'x';
	this->commit_type = "x";
	this->commit_to = "x";
}

boy::boy(std::string name_id, int attractiveness, int min_attractiveness_req,
		 double budget, int iq, std::string commit_type, std::string commit_to)
{
	this->name_id = name_id;
	this->attractiveness = attractiveness;
	this->happiness = 0;
	this->min_attractiveness_req = min_attractiveness_req;
	this->budget = budget;
	this->iq = iq;
	this->status = 'c';
	this->commit_type = commit_type;
	this->commit_to = commit_to;
}

void boy::copy(geek_boy &copy_boy)
{
	this->name_id = copy_boy.get_name();
	this->attractiveness = copy_boy.get_attract();
	this->happiness = copy_boy.get_happiness();
	this->min_attractiveness_req = copy_boy.get_min_attract_req();
	this->budget = copy_boy.get_budget();
	this->iq = copy_boy.get_iq();
	this->status = copy_boy.get_status();
	this->commit_type = copy_boy.get_commit_type();
	this->commit_to = copy_boy.get_commit_to();
}

/* Accessors */
std::string boy::get_name()
{
	return this->name_id;
}

int boy::get_attract()
{
	return this->attractiveness;
}

int boy::get_min_attract_req()
{
	return this->min_attractiveness_req;
}

int boy::get_happiness()
{
	return this->happiness;
}

int boy::get_iq()
{
	return this->iq;
}

char boy::get_status()
{
	return this->status;
}

std::string boy::get_commit_type()
{
	return this->commit_type;
}

std::string boy::get_commit_to()
{
	return this->commit_to;
}

double boy::get_budget()
{
	return this->budget;
}

/* Mutators */
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

/*Miscelleneous Methods */
int boy::can_commit(double maintainance_cost, int attractiveness)
{
	if ((maintainance_cost <= this->budget) && 
		(attractiveness > this->min_attractiveness_req)) {
		return 1;
	} else {
		return 0;
	}
}