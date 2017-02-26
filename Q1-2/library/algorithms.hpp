#ifndef ALGORITHMS_H
#define ALGORITHMS_H

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

namespace algorithms {
	void make_couples(vector <geek_boy> &geek, 
					vector <generous_boy> &generous, vector <miser_boy> &miser,
					vector <normal_girl> &normie, 
					 vector <choosy_girl> &choosy, vector <desperate_girl> &despo);
	void gifting(vector <couple> &couples, vector <essential_gift> &essential_gifts,
						vector <luxury_gift> &luxury_gifts, vector <utility_gift> &utility_gifts);
}

#endif