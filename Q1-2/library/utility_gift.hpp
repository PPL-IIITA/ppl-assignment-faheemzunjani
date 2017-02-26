#ifndef UTILITY_GIFT_H
#define UTILITY_GIFT_H
#include <string>

namespace data {
	//! Utility gift class 
    /*!
        Utility gift class which contains attributes to describe a utility gift. 
    */
	class utility_gift {
		private:
			std::string name;   /*!< Name of the gift */
			float price;   /*!< Price of the gift */
			int value;   /*!< Value of the gift */
			int utility_value;   /*!< Utility Value of the gift */
			std::string utility_class;   /*!< Utility Class of the gift */

		public:
			//! Parameterised utility gift constructor
            /*!
              \param name_id Name of gift.
              \param price Price of gift.
              \param value Value of gift.
              \param utility_value Utility value of gift.
              \param utility_class Utility class of gift.
            */
			utility_gift(std::string name, float price, int value, int utility_value, 
						 std::string utility_class);

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

			//! Utility value Accessor method
            /*!
              \return Utility value of girl
            */
			int get_utility_value();

			//! Utility class Accessor method
            /*!
              \return Utility class of girl
            */
			std::string get_utility_class();
	};
}

#endif