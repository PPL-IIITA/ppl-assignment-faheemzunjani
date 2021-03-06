#include "./library/variables_q3.hpp"
#include "./library/algorithms.hpp"
#include "./library/utility.hpp"

using namespace data;

int main()
{
	utility::read_boys_data(geek_boys, generous_boys, miser_boys);
	utility::read_girls_data(normal_girls, choosy_girls, desperate_girls);
	algorithms::make_couples(geek_boys, generous_boys, miser_boys, 
							 normal_girls, choosy_girls, desperate_girls);
	utility::read_couples_data(couples);
	utility::read_gifts_data(essential_gifts, luxury_gifts, utility_gifts);

	algorithms::gifting(couples, essential_gifts, luxury_gifts, utility_gifts);
	
	utility::print_k_happiest_couples(couples);
	utility::print_k_compatibile_couples(couples);

	return 0;
}