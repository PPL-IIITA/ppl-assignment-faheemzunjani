#ifndef VARIABLES_Q3_H
#define VARIABLES_Q3_H

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

using namespace data;
using namespace std;

vector <geek_boy> geek_boys;   /*!< Vector of the couples */
vector <generous_boy> generous_boys;   /*!< Vector of the couples */
vector <miser_boy> miser_boys;   /*!< Vector of the couples */

vector <normal_girl> normal_girls;   /*!< Vector of the couples */
vector <choosy_girl> choosy_girls;   /*!< Vector of the couples */
vector <desperate_girl> desperate_girls;    /*!< Vector of the couples */

vector <couple> couples;   /*!< Vector of the couples */
vector <essential_gift> essential_gifts;  /*!< Vector of the essential gifts */
vector <luxury_gift> luxury_gifts;  /*!< Vector of the luxury gifts */
vector <utility_gift> utility_gifts;  /*!< Vector of the utility gifts */

#endif