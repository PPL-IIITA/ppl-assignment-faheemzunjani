#ifndef LUXURY_GIFT_H
#define LUXURY_GIFT_H

#include <string>

namespace data {
	//! Luxury gift class 
    /*!
        Luxury gift class which contains attributes to describe a luxury gift. 
    */
	class luxury_gift {
		private:
			std::string name;   /*!< Name of the gift */
			float price;   /*!< Price of the gift */
			int value;   /*!< Value of the gift */
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
			
			//! name_id Accessor method
            /*!
              \return name_id of girl
            */
			std::string get_name();

			//! price Accessor method
            /*!
              \return price of girl
            */
			float get_price();

			//! value Accessor method
            /*!
              \return value of girl
            */
			int get_value();

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