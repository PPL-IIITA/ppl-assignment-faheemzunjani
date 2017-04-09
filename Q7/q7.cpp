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
	
	algorithms::search_default_couple(couples, "Alfred");
	algorithms::search_default_couple(couples, "Oliver");
	algorithms::search_default_couple(couples, "Harvey");
	algorithms::search_default_couple(couples, "Conail");

	algorithms::search_sorted_couple(couples, "John");
	algorithms::search_sorted_couple(couples, "Jack");
	algorithms::search_sorted_couple(couples, "Harvey");
	algorithms::search_sorted_couple(couples, "Conail");

	algorithms::search_hashed_couple(couples, "Jasper");
	algorithms::search_hashed_couple(couples, "Oliver");
	algorithms::search_hashed_couple(couples, "Balthazar");
	algorithms::search_hashed_couple(couples, "Conail");

	return 0;
}