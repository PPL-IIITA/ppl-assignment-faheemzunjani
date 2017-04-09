#ifndef GENERIC_GIFT_H
#define GENERIC_GIFT_H
#include <string>

namespace data {
	//! Generic gift class 
    /*!
        Generic gift class which contains attributes to describe an Generic gift and is used as a super class. 
    */
	class generic_gift {
		protected:
			std::string name;   /*!< Name of the gift */
			float price;   /*!< Price of the gift */
			int value;   /*!< Value of the gift */

		public:
			//! Parameterised generic gift constructor
            /*!
              \param name_id Name of gift.
              \param price Price of gift.
              \param value Value of gift.
            */
			generic_gift(std::string name, float price, int value);

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
	};
}

#endif