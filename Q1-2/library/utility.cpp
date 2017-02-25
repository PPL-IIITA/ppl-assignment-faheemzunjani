#include <cstdio>
#include <fstream>
#include "utility.hpp"

using namespace data;
using namespace std;

void utility::read_boys_data(vector <geek_boy> &geek_boys, vector <generous_boy> &generous_boys, 
					vector <miser_boy> &miser_boys)
{
	FILE * fptr;
	std::string name, type;
	char name_in[100], type_in[100], flush_char;
	int attract, min_attract_req, intel;
	double budg;

	fptr = fopen("./data/boys.dat", "r");

	while (!feof(fptr)) {
		fscanf(fptr, "%s %d %d %lf %d %s", name_in, &attract, &min_attract_req, &budg,
											&intel, type_in);
		name = name_in;
		type = type_in;
		
		if (type == "geek") {
			geek_boy temp_geek(name, attract, min_attract_req, budg, intel);
			geek_boys.push_back (temp_geek);
		} else if (type == "generous") {
			generous_boy temp_generous(name, attract, min_attract_req, budg, intel);
			generous_boys.push_back (temp_generous);
		} else if (type == "miser") {
			miser_boy temp_miser(name, attract, min_attract_req, budg, intel);
			miser_boys.push_back (temp_miser);
		}
	}
	
	fclose(fptr);
}

void utility::read_girls_data(vector <normal_girl> &normal_girls, vector <choosy_girl> &choosy_girls, 
					 vector <desperate_girl> &desperate_girls)
{
	FILE * fptr;
	char name_in[100], type_in[100];
	std::string name, type;
	int attract, intel;
	double maint_cost;
	char crit;

	fptr = fopen("./data/girls.dat", "r");

	while (!feof(fptr)) {
		fscanf(fptr, "%s %d %lf %d %c %s", name_in, &attract, &maint_cost, 
			   								&intel, &crit, type_in);
		name = name_in;
		type = type_in;

		if (type == "normal") {
			normal_girl temp_normie(name, attract, maint_cost, intel, crit);
			normal_girls.push_back (temp_normie);
		} else if (type == "choosy") {
			choosy_girl temp_choosy(name, attract, maint_cost, intel, crit);
			choosy_girls.push_back (temp_choosy);
		} else if (type == "desperate") {
			desperate_girl temp_despo(name, attract, maint_cost, intel, crit);
			desperate_girls.push_back (temp_despo);
		}
	}
	
	fclose(fptr);
}

void utility::read_couples(vector <couple> &couples)
{
	FILE * couple_file;
	char name_in[100], type_in[100];
	std::string name, type;
	int attract, intel, min_attract_req;
	double maint_cost, budg;
	char crit;

	couple_file = fopen("./data/couples.dat", "r");

	while(!feof(couple_file)) {
		fscanf(couple_file, "%s %d %lf %d %c %s", name_in, &attract, &maint_cost, 
			   								&intel, &crit, type_in);
		name = name_in;
		type = type_in;
		normal_girl temp_girl(name, attract, maint_cost, intel, crit);

		fscanf(couple_file, "%s %d %d %lf %d %s", name_in, &attract, &min_attract_req, 
											&budg, &intel, type_in);
		name = name_in;
		type = type_in;
		geek_boy temp_boy(name, attract, min_attract_req, budg, intel);
		
		couple temp_couple(temp_boy, temp_girl);

		couples.push_back (temp_couple);
	}

	couples.pop_back();

	fclose(couple_file);
}

void utility::print_couples()
{

}