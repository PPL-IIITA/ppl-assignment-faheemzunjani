#ifndef ESSENTIAL_GIFT_H
#define ESSENTIAL_GIFT_H

namespace data {
	class essential_gift {
		private:
			float price;
			int value;

		public:
			essential_gift(float price, int value);
			float get_price();
			int get_value();

	};
}

#endif