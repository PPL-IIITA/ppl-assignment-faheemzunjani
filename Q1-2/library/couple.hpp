#ifndef COUPLE_H
#define COUPLE_H

#include <string>
#include <vector>
#include "girl.hpp"
#include "boy.hpp"
#include "gift_basket.hpp"

namespace data {
	class couple {
		private:
			int happiness;
			int compatibility;

		public:
			boy cboy;
			girl cgirl;
			gift_basket gifts;

			/* Constructors */
			couple(geek_boy &copy_boy, normal_girl &copy_girl);

			/* Accessors */
			int get_happiness();
			int get_compatibility();

			/* Mutators */
			void set_happiness();
			void set_compatibility();
	};
}

#endif