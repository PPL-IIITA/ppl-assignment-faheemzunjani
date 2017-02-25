#include "./library/variables_q2.hpp"
#include "./library/algorithms.hpp"
#include "./library/utility.hpp"

using namespace data;

int main()
{
	printf("1\n");
	utility::read_couples(couples);
	printf("%lu\n", couples.size());
	algorithms::gifting(couples);
	//utility::print_k_happiest_couples(couples);
	//utility::print_k_compatibile_couples(couples);

	return 0;
}