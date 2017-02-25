#ifndef ESSENTIAL_GIFT_H
#define ESSENTIAL_GIFT_H

#include <string>

namespace data {
	class essential_gift {
		private:
			std::string name;
			float price;
			int value;

		public:
			/* Constructor */
			essential_gift(std::string name, float price, int value);

			/* Accessors */
			std::string get_name();
			float get_price();
			int get_value();
	};
}

#endif