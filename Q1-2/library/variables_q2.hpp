#ifndef VARIABLES_Q2_H
#define VARIABLES_Q2_H

#include <vector>
#include "couple.hpp"
#include "essential_gift.hpp"
#include "luxury_gift.hpp"
#include "utility_gift.hpp"

using namespace data;
using namespace std;

vector <couple> couples;   /*!< Vector of the couples */
vector <essential_gift> essential_gifts;  /*!< Vector of the essential gifts */
vector <luxury_gift> luxury_gifts;  /*!< Vector of the luxury gifts */
vector <utility_gift> utility_gifts;  /*!< Vector of the utility gifts */

#endif