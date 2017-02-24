#ifndef UTILITY_GIFT_H
#define UTILITY_GIFT_H
#include <string>

namespace data {
	class utility_gift {
		private:
			float price;
			int value;
			int utility_value;
			std::string utility_class;

		public:
			utility_gift(float price, int value, int utility_value, 
						 std::string utility_class);
			float get_price();
			int get_value();
			int get_utility_value();
			std::string get_utility_class();
	};
}

#endif