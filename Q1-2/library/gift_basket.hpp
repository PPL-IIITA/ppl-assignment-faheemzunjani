#ifndef GIFT_BASKET_H
#define GIFT_BASKET_H

#include <vector>
#include "essential_gift.hpp"
#include "luxury_gift.hpp"
#include "utility_gift.hpp"

using namespace std;

namespace data {
	class gift_basket {
		private:
			double total_cost;

		public:
			vector <essential_gift> essential;
			vector <luxury_gift> luxury;
			vector <utility_gift> utility;

			/* Constructor */
			gift_basket();

			/* Accessors */
			double get_total_cost();

			/* Mutators */
			void add_cost(double cost);
	};
}

#endif