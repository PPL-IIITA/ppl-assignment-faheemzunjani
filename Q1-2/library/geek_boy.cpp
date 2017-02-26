#include "geek_boy.hpp"

using namespace data;

/* Constructor */
// geek_boy::geek_boy()
// {
// 	this->name_id = "x";
// 	this->attractiveness = 0;
// 	this->happiness = 0;
// 	this->min_attractiveness_req = 0;
// 	this->budget = 0;
// 	this->iq = 0;
// 	this->status = 'x';
// 	this->commit_type = "x";
// 	this->commit_to = "x";
// }

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

/* Accessors */
std::string geek_boy::get_name()
{
	return this->name_id;
}

int geek_boy::get_attract()
{
	return this->attractiveness;
}

int geek_boy::get_min_attract_req()
{
	return this->min_attractiveness_req;
}

int geek_boy::get_happiness()
{
	return this->happiness;
}

int geek_boy::get_iq()
{
	return this->iq;
}

char geek_boy::get_status()
{
	return this->status;
}

std::string geek_boy::get_commit_type()
{
	return this->commit_type;
}

std::string geek_boy::get_commit_to()
{
	return this->commit_to;
}

double geek_boy::get_budget()
{
	return this->budget;
}

/* Mutators */
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

void geek_boy::change_commit_type(std::string type)
{
	this->commit_type = type;
}

/*Miscelleneous Methods */
int geek_boy::can_commit(double maintainance_cost, int attractiveness)
{
	if ((maintainance_cost <= this->budget) && 
		(attractiveness > this->min_attractiveness_req)) {
		return 1;
	} else {
		return 0;
	}
}