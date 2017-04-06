#ifndef ESSENTIAL_GIFT_H
#define ESSENTIAL_GIFT_H
#include "generic_gift.hpp"
#include <string>

namespace data {
	//! Essential gift class 
    /*!
        Essential gift class which contains attributes to describe an essential gift. 
    */
	class essential_gift: public generic_gift {
		public:
			//! Parameterised essential gift constructor
            /*!
              \param name_id Name of gift.
              \param price Price of gift.
              \param value Value of gift.
            */
			essential_gift(std::string name, float price, int value);
	};
}

#endif