#include "./library/variables_q2.hpp"
#include "./library/algorithms.hpp"
#include "./library/utility.hpp"

using namespace data;

int main()
{
	utility::read_couples_data(couples);
	printf("%lu\n", couples.size());
	utility::read_gifts_data(essential_gifts, luxury_gifts, utility_gifts);
	printf("%lu\n", essential_gifts.size());
	printf("%lu\n", luxury_gifts.size());
	printf("%lu\n", utility_gifts.size());
	algorithms::gifting(couples);
	//scanf("%d", &k);
	//utility::print_k_happiest_couples(couples);
	//utility::print_k_compatibile_couples(couples);

	return 0;
}