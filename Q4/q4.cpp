#include "./library/variables_q2.hpp"
#include "./library/algorithms.hpp"
#include "./library/utility.hpp"

using namespace data;

int main()
{
	utility::read_couples_data(couples);
	utility::read_gifts_data(essential_gifts, luxury_gifts, utility_gifts);

	algorithms::gifting(couples, essential_gifts, luxury_gifts, utility_gifts);
	
	utility::print_k_happiest_couples(couples);
	utility::print_k_compatibile_couples(couples);

	return 0;
}