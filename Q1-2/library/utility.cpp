#include <cstdio>
#include <string>
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

void utility::read_couples_data(vector <couple> &couples)
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
		temp_girl.change_commit_type(type);

		fscanf(couple_file, "%s %d %d %lf %d %s", name_in, &attract, &min_attract_req, 
											&budg, &intel, type_in);
		name = name_in;
		type = type_in;
		geek_boy temp_boy(name, attract, min_attract_req, budg, intel);
		temp_boy.change_commit_type(type);
		
		couple temp_couple(temp_boy, temp_girl);

		couples.push_back (temp_couple);
	}

	couples.pop_back();

	fclose(couple_file);
}

void utility::read_gifts_data(vector <essential_gift> &essential_gifts,
							  vector <luxury_gift> &luxury_gifts, vector <utility_gift> &utility_gifts)
{
	FILE * fptr;
	char t_name[5], utility_class[20];
	std::string name, util_class;
	int price, value, utility_value, rating, difficulty;

	fptr = fopen("./data/essential_gifts.dat", "r");

	while (!feof(fptr)) {
		fscanf(fptr, "%s %d %d\n", t_name, &price, &value);
		name = t_name;
		essential_gift temp_gift(name, price, value);

		essential_gifts.push_back (temp_gift);
	}

	fclose(fptr);

	fptr = fopen("./data/luxury_gifts.dat", "r");

	while (!feof(fptr)) {
		fscanf(fptr, "%s %d %d %d %d\n", t_name, &price, &value, &rating, &difficulty);
		name = t_name;
		luxury_gift temp_gift(name, price, value, rating, difficulty);

		luxury_gifts.push_back (temp_gift);
	}

	fclose(fptr);

	fptr = fopen("./data/utility_gifts.dat", "r");

	while (!feof(fptr)) {
		fscanf(fptr, "%s %d %d %d %s\n", t_name, &price, &value, &utility_value, utility_class);
		name = t_name;
		util_class = utility_class;
		utility_gift temp_gift(name, price, value, utility_value, util_class);

		utility_gifts.push_back (temp_gift);
	}

	fclose(fptr);
}

void utility::print_k_happiest_couples(vector <couple> &couples)
{
	vector <couple> temp_couple = couples;
	int max_happ;
	int max_j;
	int j;
	int k;

	printf("\n\nEnter k for happiest couples: ");
	scanf("%d", &k);
	printf("\n%d happiest couples:\n\n", k);
	printf("Boy <-> Girl\n\n");

	for (int i = 0; i < k; i++) {
		max_happ = 0;
		max_j = 0;

		for (j = 0; j < temp_couple.size(); j++) {
			if (temp_couple[j].get_happiness() > max_happ) {
				max_happ = temp_couple[j].get_happiness();
				max_j = j;
			}
		}

		if (temp_couple.size() != 0) {
			printf("%s <-> %s\n", temp_couple[max_j].cboy.get_name().c_str(),
						 temp_couple[max_j].cgirl.get_name().c_str());

			temp_couple.erase (temp_couple.begin() + max_j);
		} else {
			printf("\nOnly %lu couples present.\n", couples.size());
			break;
		}
	}
}

void utility::print_k_compatibile_couples(vector <couple> &couples)
{
	vector <couple> temp_couple = couples;
	int max_comp;
	int max_j;
	int j;
	int k;

	printf("\n\nEnter k for most compatible couples: ");
	scanf("%d", &k);
	printf("\n%d most compatible couples:\n\n", k);
	printf("Boy <-> Girl\n\n");

	for (int i = 0; i < k; i++) {
		max_comp = 0;
		max_j = 0;

		for (j = 0; j < temp_couple.size(); j++) {
			if (temp_couple[j].get_compatibility() > max_comp) {
				max_comp = temp_couple[j].get_compatibility();
				max_j = j;
			}
		}

		if (temp_couple.size() != 0) {
			printf("%s <-> %s\n", temp_couple[max_j].cboy.get_name().c_str(),
						 temp_couple[max_j].cgirl.get_name().c_str());

			temp_couple.erase (temp_couple.begin() + max_j);
		} else {
			printf("\nOnly %lu couples present.\n", couples.size());
			break;
		}
	}
}