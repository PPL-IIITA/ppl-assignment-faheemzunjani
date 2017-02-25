#ifndef UTILITY_H
#define UTILITY_H

#include <vector>
#include "geek_boy.hpp"
#include "generous_boy.hpp"
#include "miser_boy.hpp"
#include "normal_girl.hpp"
#include "desperate_girl.hpp"
#include "choosy_girl.hpp"
#include "couple.hpp"
#include "essential_gift.hpp"
#include "luxury_gift.hpp"
#include "utility_gift.hpp"

using namespace std;
using namespace data;

namespace utility {

	void read_boys_data(vector <geek_boy> &geek_boys, vector <generous_boy> &generous_boys, 
					vector <miser_boy> &miser_boys);

	void read_girls_data(vector <normal_girl> &normal_girls, vector <choosy_girl> &choosy_girls, 
					 vector <desperate_girl> &desperate_girls);

	void read_couples_data(vector <couple> &couples);

	void read_gifts_data(vector <essential_gift> &essential_gifts, vector <luxury_gift> &luxury_gifts, 
						 vector <utility_gift> &utility_gifts);

	void print_couples();
}

#endif