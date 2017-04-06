#include "choosy_girl.hpp"

using namespace data;

choosy_girl::choosy_girl(std::string name_id, int attractiveness, 
						 double maintainance_cost, int iq, char criteria):
			generic_girl(name_id, attractiveness, 
						 maintainance_cost, iq, criteria)
{
	this->commit_type = "choosy";
}