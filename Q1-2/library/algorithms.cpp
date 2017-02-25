#include "algorithms.hpp"
#include <cstdio>
#include <ctime>
#include <fstream>

using namespace std;
using namespace data;

void algorithms::make_couples(vector <geek_boy> &geek_boys, 
					vector <generous_boy> &generous_boys, vector <miser_boy> &miser_boys,
					vector <normal_girl> &normal_girls, 
					 vector <choosy_girl> &choosy_girls, vector <desperate_girl> &desperate_girls)
{
	FILE * fptr;
	FILE * couple_file;
	time_t _tm =time(NULL);
	struct tm * curtime = localtime ( &_tm );
	int count = 0;

	fptr = fopen("./logs/events.log", "w");
	couple_file = fopen("./data/couples.dat", "w");

	printf("Matched Couples:\n");

	for (int i = 0; i < choosy_girls.size(); i++) {
		for (int j = 0; j < generous_boys.size(); j++) {

			if (choosy_girls[i].can_commit(generous_boys[j].get_budget()) && 
				generous_boys[j].can_commit(choosy_girls[i].get_maint_cost(), choosy_girls[i].get_attract()) 
				&& generous_boys[j].get_status() == 's' && choosy_girls[i].get_status() == 's') {

				choosy_girls[i].change_status('c', generous_boys[j].get_name().c_str());
				generous_boys[j].change_status('c', choosy_girls[i].get_name().c_str());

				fprintf(fptr, "%s %s %s<->%s\n", asctime(curtime), "Commitment", 
						choosy_girls[i].get_name().c_str(), generous_boys[j].get_name().c_str());

				fprintf(couple_file, "%s %d %lf %d %c %s\n", 
								choosy_girls[i].get_name().c_str(), 
								choosy_girls[i].get_attract(), 
								choosy_girls[i].get_maint_cost(), 
								choosy_girls[i].get_iq(),
								choosy_girls[i].get_criteria(),
								choosy_girls[i].get_commit_type().c_str());

				fprintf(couple_file, "%s %d %d %lf %d %s\n", 
								generous_boys[j].get_name().c_str(), 
								generous_boys[j].get_attract(),
								generous_boys[j].get_min_attract_req(),
								generous_boys[j].get_budget(),
								generous_boys[j].get_iq(),
								generous_boys[j].get_commit_type().c_str());
				
				printf("%s<->%s\n", choosy_girls[i].get_name().c_str(), 
									generous_boys[j].get_name().c_str());
			}
		}
	}

	for (int i = 0; i < desperate_girls.size(); i++) {
		for (int j = 0; j < miser_boys.size(); j++) {
			if (desperate_girls[i].can_commit(miser_boys[j].get_budget()) && 
				miser_boys[j].can_commit(desperate_girls[i].get_maint_cost(), desperate_girls[i].get_attract()) 
				&& miser_boys[j].get_status() == 's' && desperate_girls[i].get_status() == 's') {

				desperate_girls[i].change_status('c', miser_boys[j].get_name().c_str());
				miser_boys[j].change_status('c', desperate_girls[i].get_name().c_str());

				fprintf(fptr, "%s %s %s<->%s\n", asctime(curtime), "Commitment", 
						desperate_girls[i].get_name().c_str(), miser_boys[j].get_name().c_str());
				
				fprintf(couple_file, "%s %d %lf %d %c %s\n", 
								desperate_girls[i].get_name().c_str(), 
								desperate_girls[i].get_attract(), 
								desperate_girls[i].get_maint_cost(), 
								desperate_girls[i].get_iq(),
								desperate_girls[i].get_criteria(),
								desperate_girls[i].get_commit_type().c_str());

				fprintf(couple_file, "%s %d %d %lf %d %s\n", 
								miser_boys[j].get_name().c_str(), 
								miser_boys[j].get_attract(),
								miser_boys[j].get_min_attract_req(),
								miser_boys[j].get_budget(),
								miser_boys[j].get_iq(),
								miser_boys[j].get_commit_type().c_str());

				printf("%s<->%s\n", desperate_girls[i].get_name().c_str(), 
										  miser_boys[j].get_name().c_str());

			}
		}
	}

	for (int i = 0; i < normal_girls.size(); i++) {
		for (int j = 0; j < geek_boys.size(); j++) {
			if (normal_girls[i].can_commit(geek_boys[j].get_budget()) && 
				geek_boys[j].can_commit(normal_girls[i].get_maint_cost(), normal_girls[i].get_attract()) 
				&& geek_boys[j].get_status() == 's' && normal_girls[i].get_status() == 's') {

				normal_girls[i].change_status('c', geek_boys[j].get_name().c_str());
				geek_boys[j].change_status('c', normal_girls[i].get_name().c_str());

				fprintf(fptr, "%s %s %s<->%s\n", asctime(curtime), "Commitment", 
						normal_girls[i].get_name().c_str(), geek_boys[j].get_name().c_str());
				
				fprintf(couple_file, "%s %d %lf %d %c %s\n", 
								normal_girls[i].get_name().c_str(), 
								normal_girls[i].get_attract(), 
								normal_girls[i].get_maint_cost(), 
								normal_girls[i].get_iq(),
								normal_girls[i].get_criteria(),
								normal_girls[i].get_commit_type().c_str());

				fprintf(couple_file, "%s %d %d %lf %d %s\n", 
								geek_boys[j].get_name().c_str(), 
								geek_boys[j].get_attract(),
								geek_boys[j].get_min_attract_req(),
								geek_boys[j].get_budget(),
								geek_boys[j].get_iq(),
								geek_boys[j].get_commit_type().c_str());

				printf("%s<->%s\n", normal_girls[i].get_name().c_str(), 
									geek_boys[j].get_name().c_str());
			}
		}
	}

	fclose(couple_file);
	fclose(fptr);
}