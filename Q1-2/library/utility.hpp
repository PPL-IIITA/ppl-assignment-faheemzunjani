#ifndef UTILITY_H
#define UTILITY_H

#include <vector>
#include <string>
#include "geek_boy.hpp"
#include "generous_boy.hpp"
#include "miser_boy.hpp"
#include "normal_girl.hpp"
#include "desperate_girl.hpp"
#include "choosy_girl.hpp"

using namespace std;
using namespace data;

namespace utility {

	void read_boys_data(vector <geek_boy> geek, vector <generous_boy> generous, 
					vector <miser_boy> miser);

	void read_girls_data(vector <normal_girl> normie, vector <choosy_girl> choosy, 
					 vector <desperate_girl> despo);

	void print_couples();
}

#endif