#ifndef COUPLE_H
#define COUPLE_H

#include <string>
#include <vector>
#include "girl.hpp"
#include "boy.hpp"
#include "gift_basket.hpp"

namespace data {
	//! Couple class 
    /*!
        Couple class contains attributes to describe a couple. 
        Couple class contains object of Boy and Girl classes to describe a committment
    */
	class couple {
		private:
			int happiness;   /*!< Happiness of the couple */
			int compatibility;    /*!< Compatibility of the couple */

		public:
			boy cboy;   /*!< Committed boy of the couple */
			girl cgirl;   /*!< Committed girl of the couple */
			gift_basket gifts;  /*!< Gift basket of the couple */

			//! Parameterised couple constructor
            /*!
              \param copy_boy Boy to copy attributes from.
              \param copy_girl Girl to copy attributes from.
            */
			couple(geek_boy &copy_boy, normal_girl &copy_girl);

			//! happiness Accessor method
            /*!
              \return happiness of boy
            */
			int get_happiness();

			//! compatibility Accessor method
            /*!
              \return compatibility of boy
            */
			int get_compatibility();

			//! Set happiness Mutator
            /*!
				Sets the happiness of the couple
            */
			void set_happiness();

			//! Set compatibility Mutator
            /*!
				Sets the compatibility of the couple
            */
			void set_compatibility();
	};
}

#endif