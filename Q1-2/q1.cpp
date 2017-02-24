#include "./Library/utility.hpp"
#include "./Library/algorithms.hpp"
#include "./Library/variables.hpp"

int main(int argc, char ** argv)
{
	utility::read_boys_data(geek_boys, generous_boys, miser_boys);
	utility::read_girls_data(normal_girls, choosy_girls, desperate_girls);

	algorithms::make_couples(geek_boys, generous_boys, miser_boys, normal_girls, 
				 			 choosy_girls, desperate_girls);

	utility::print_couples();

	return 0;
}