#ifndef GIFT_BASKET_H
#define GIFT_BASKET_H

#include <vector>
#include "essential_gift.hpp"
#include "luxury_gift.hpp"
#include "utility_gift.hpp"

using namespace std;

namespace data {
	//! Gift backet class 
    /*!
        Gift basket class which contains attributes to describe a gift basket of a couple. 
    */
	class gift_basket {
		private:
			double total_cost;   /*!< Total cost of the gifts */

		public:
			vector <essential_gift> essential;  /*!< Vector of essential gifts */
			vector <luxury_gift> luxury;  /*!< Vector of luxury gifts */
			vector <utility_gift> utility;  /*!< Vector of utility gifts */

			//! Default gift basket constructor
            /*!
              Default constructor for the gift basket class.
            */
			gift_basket();

			//! total_cost Accessor method
            /*!
              \return total_cost of girl
            */
			double get_total_cost();

			//! add_cost Mutator method
            /*!
              \param cost Additional cost to be added to current total
            */
			void add_cost(double cost);
	};
}

#endif