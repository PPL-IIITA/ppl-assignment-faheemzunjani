#include <vector>
#include <string>
#include "geek_boy.hpp"
#include "generous_boy.hpp"
#include "miser_boy.hpp"
#include "normal_girl.hpp"
#include "desperate_girl.hpp"
#include "choosy_girl.hpp"

using namespace std;
using namespace data;

namespace utility {

void read_boys_data(vector <geek_boy> geek, vector <generous_boy> generous, 
					vector <miser_boy> miser)
{
	FILE * fptr;
	std::string name, type;
	char name_in[100], type_in[100];
	int attract, min_attract_req, intel;
	double budg;

	fptr = fopen("./Data/boys.csv", "r");

	while (!feof(fptr)) {
		fscanf(fptr, "%s,%d,%d,%lf,%d,%s", name_in, &attract, &min_attract_req, 
			   &budg, &intel, type_in);
			
		name = name_in;
		type = type_in;
		
		if (type == "geek") {
			geek_boy temp_geek(name, attract, min_attract_req, budg, intel);
			geek.push_back (temp_geek);
		} else if (type == "generous") {
			generous_boy temp_generous(name, attract, min_attract_req, budg, intel);
			generous.push_back (temp_generous);
		} else if (type == "miser") {
			miser_boy temp_miser(name, attract, min_attract_req, budg, intel);
			miser.push_back (temp_miser);
		}
	}

	fclose(fptr);
}

void read_girls_data(vector <normal_girl> normie, vector <choosy_girl> choosy, 
					 vector <desperate_girl> despo)
{
	FILE * fptr;
	char name_in[100], type_in[100];
	std::string name, type;
	int attract, intel;
	double maint_cost;
	char crit;

	fptr = fopen("./Data/girls.csv", "r");

	while (!feof(fptr)) {
		fscanf(fptr, "%s,%d,%lf,%d,%c,%s", name_in, &attract, &maint_cost, 
			   &intel, &crit, type_in);
		
		name = name_in;
		type = type_in;

		if (type == "normal") {
			normal_girl temp_normie(name, attract, maint_cost, intel, crit);
			normie.push_back (temp_normie);
		} else if (type == "choosy") {
			choosy_girl temp_choosy(name, attract, maint_cost, intel, crit);
			choosy.push_back (temp_choosy);
		} else if (type == "desperate") {
			desperate_girl temp_despo(name, attract, maint_cost, intel, crit);
			despo.push_back (temp_despo);
		}
	}

	fclose(fptr);
}

void print_couples()
{

}

}