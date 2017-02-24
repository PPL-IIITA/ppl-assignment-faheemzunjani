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
			float utility_gift::get_price();
			int utility_gift::get_value();
			int utility_gift::get_utility_value();
			std::string utility_gift::get_utility_class();
	}
}