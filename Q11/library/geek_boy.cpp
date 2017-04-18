#include "geek_boy.hpp"

using namespace data;

geek_boy::geek_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
		 double budget, int iq): 
		 generic_boy(name_id, attractiveness, min_attractiveness_req,
		 budget, iq)
{
	this->commit_type = "geek";
}
