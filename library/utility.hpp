#include <cstdio>
#include "geek_boy_class.hpp"
#include "generous_boy_class.hpp"
#include "miser_boy_class.hpp"
#include "normal_girl_class.hpp"
#include "desperate_girl_class.hpp"
#include "choosy_girl_class.hpp"

using namespace std;

namespace utility {
	void parse_boys_data(std::string file_name, vector <geek_boy> geek, 
						 vector <generous_boy> generous, vector <miser_boy> miser)
	{
		FILE * fptr;
		std::string name, type;
		int attract, min_attract_req, intel;
		double budg;

		fptr = fopen(filename, "r");

		while (!feof(fptr)) {
			fscanf(fptr, "%s,%d,%d,%lf,%d,%s", &name, &attract, &min_attract_req, 
				   &budg, &intel, &type);
			if (type == "geek") {
				geek_boy temp_geek(name, attract, min_attract_req, budg, intel);
				geek.pushback (temp_geek);
			} else if (type == "generous") {
				generous_boy temp_generous(name, attract, min_attract_req, budg, intel);
				generous.pushback (temp_generous);
			} else if (type == "miser") {
				miser_boy temp_miser(name, attract, min_attract_req, budg, intel);
				miser.pushback (temp_miser);
			}
		}

		fclose(filename);
	}

	void parse_girls_data(std::string file_name, vector <normal_girl> normie, 
						 vector <choosy_girl> choosy, vector <desperate_girl> despo)
	{
		FILE * fptr;
		std::string name, type;
		int attract, intel;
		double maint_cost;
		char crit;

		fptr = fopen(filename, "r");

		while (!feof(fptr)) {
			fscanf(fptr, "%s,%d,%lf,%d,%c,%s", &name, &attract, &maint_cost, 
				   &intel, &crit, &type);
			if (type == "normal") {
				normal_girl temp_normie(name, attract, maint_cost, intel, crit);
				normie.pushback (temp_normie);
			} else if (type == "choosy") {
				choosy_girl temp_choosy(name, attract, maint_cost, intel, crit);
				choosy.pushback (temp_choosy);
			} else if (type == "desperate") {
				desperate_girl temp_despo(name, attract, maint_cost, intel, crit);
				despo.pushback (temp_despo);
			}
		}

		fclose(filename);
	}
}