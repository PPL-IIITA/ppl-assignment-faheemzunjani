#ifndef LUXURY_GIFT_H
#define LUXURY_GIFT_H
#include "generic_gift.hpp"
#include <string>

namespace data {
	//! Luxury gift class 
    /*!
        Luxury gift class which contains attributes to describe a luxury gift. 
    */
	class luxury_gift: public generic_gift {
		protected:
			int rating;   /*!< Rating of the gift */
			int difficulty;    /*!< Difficulty to procure the gift */

		public:
			//! Parameterised luxury gift constructor
            /*!
              \param name_id Name of gift.
              \param price Price of gift.
              \param value Value of gift.
              \param rating Rating of gift.
              \param difficulty Difficulty of gift.
            */
			luxury_gift(std::string name, float price, int value, int rating, int difficulty);

			//! rating Accessor method
            /*!
              \return rating of girl
            */
			int get_rating();

			//! difficulty Accessor method
            /*!
              \return difficulty of girl
            */
			int get_difficulty();
	};
}

#endif