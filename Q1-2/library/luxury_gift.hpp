#ifndef LUXURY_GIFT_H
#define LUXURY_GIFT_H

#include <string>

namespace data {
	class luxury_gift {
		private:
			std::string name;
			float price;
			int value;
			int rating;
			int difficulty;

		public:
			/* Constructor */
			luxury_gift(std::string name, float price, int value, int rating, int difficulty);
			
			/* Accessors */
			std::string get_name();
			float get_price();
			int get_value();
			int get_rating();
			int get_difficulty();
	};
}

#endif