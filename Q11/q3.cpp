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

	return 0;
}