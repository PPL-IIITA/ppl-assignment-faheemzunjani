#include "algorithms.hpp"
#include "exceptions.hpp"
#include <cstring>
#include <cstdio>
#include <ctime>

using namespace std;
using namespace data;
using namespace exceptions;

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

	fptr = fopen("./logs/commitments.log", "w");
	couple_file = fopen("./data/couples.dat", "w");

	printf("Matched Couples:\n");

	for (int i = 0; i < choosy_girls.size(); i++) {
		int compatible_flag = 0;

		try {
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

				compatible_flag = 1;
			}
		}
		if (compatible_flag == 0) {
			make_couple_exception e(choosy_girls[i].get_name());
			throw e;
		}

		} catch(make_couple_exception &e) {
			e.message();
		}
	}

	for (int i = 0; i < desperate_girls.size(); i++) {
		int compatible_flag = 0;

		try {
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

				compatible_flag = 1;

			}
		}
		if (compatible_flag == 0) {
			make_couple_exception e(desperate_girls[i].get_name());
			throw e;
		}

		} catch(make_couple_exception &e) {
			e.message();
		}
	}

	for (int i = 0; i < normal_girls.size(); i++) {
		int compatible_flag = 0;

		try {
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

				compatible_flag = 1;
			}
		}
		if (compatible_flag == 0) {
			make_couple_exception e(normal_girls[i].get_name());
			throw e;
		}

		} catch(make_couple_exception &e) {
			e.message();
		}
	}

	fclose(couple_file);
	fclose(fptr);
}

void algorithms::gifting(vector <couple> &couples, vector <essential_gift> &essential_gifts,
						vector <luxury_gift> &luxury_gifts, vector <utility_gift> &utility_gifts)
{
	// for (int i = 0; i < 14; i++) {
	// 	printf("%s %lf %s %lf\n", couples[i].cboy.get_name().c_str(), couples[i].cboy.get_budget(),
	// 			couples[i].cgirl.get_name().c_str(), couples[i].cgirl.get_maint_cost());
	// }
	time_t _tm =time(NULL);
	struct tm * curtime = localtime ( &_tm );
	FILE * fptr;
	// vector <essential_gift> essent = essential_gifts;
	// vector <luxury_gift> luxury = luxury_gifts;
	// vector <utility_gift> util = utility_gifts;
	double max_price, min_price;
	int max_j, min_j;
	int j;
	int toggle;

	//printf("%lu %lu %lu\n", essent.size(), luxury.size(), util.size());

	fptr = fopen("./logs/gifting.log", "w");

	printf("\nGifting:\n\n");
	printf("Couple\tGift-Type Gift-Name Gift-Price\n\n");

	for (int i = 0; i < couples.size(); i++) {
		vector <essential_gift> essent = essential_gifts;
		vector <luxury_gift> luxury = luxury_gifts;
		vector <utility_gift> util = utility_gifts;

		//printf("%s\n", couples[i].cboy.get_commit_type().c_str());
		if (couples[i].cboy.get_commit_type() == "generous") {
			while (couples[i].gifts.get_total_cost() <= couples[i].cboy.get_budget() 
					&& luxury.size() > 0) {
				max_price = 0.0;
				max_j = 0;

				for (j = 0; j < luxury.size(); j++) {
					if (luxury[j].get_price() > max_price) {
						max_price = luxury[j].get_price();
						max_j = j;
					}
				}

				if ((couples[i].gifts.get_total_cost() + max_price) <= couples[i].cboy.get_budget()) {
					luxury_gift temp_gift(luxury[max_j].get_name(), luxury[max_j].get_price(), 
									luxury[max_j].get_value(), luxury[max_j].get_rating(), luxury[max_j].get_difficulty());
					couples[i].gifts.luxury.push_back (temp_gift);
					couples[i].gifts.add_cost(max_price);
					
					fprintf(fptr, "%s %s %s->%s %s %s %lf\n", asctime(curtime), "Gifting",
							couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str(),
							"Luxury", luxury[max_j].get_name().c_str(), luxury[max_j].get_price());
					printf("%s->%s %s %s %.2lf\n", couples[i].cboy.get_name().c_str(), 
							couples[i].cgirl.get_name().c_str(), "Luxury", luxury[max_j].get_name().c_str(), 
							luxury[max_j].get_price());
				}

				luxury.erase (luxury.begin() + max_j);
			} 
		} else if (couples[i].cboy.get_commit_type() == "miser") {
			toggle = 1;

			while (couples[i].gifts.get_total_cost() <= couples[i].cgirl.get_maint_cost() 
					&& essent.size() > 0 && util.size() > 0) {
				min_j = 0;

				if (toggle == 1) {
					min_price = essent[0].get_price();

					for (j = 0; j < essent.size(); j++) {
						if (essent[j].get_price() < min_price) {
							min_price = essent[j].get_price();
							min_j = j;
						}
					}

					if ((couples[i].gifts.get_total_cost() + min_price) <= couples[i].cgirl.get_maint_cost()) {
						essential_gift temp_gift(essent[min_j].get_name(), essent[min_j].get_price(), 
									essent[min_j].get_value());
						couples[i].gifts.essential.push_back (temp_gift);
						couples[i].gifts.add_cost(min_price);
					
						fprintf(fptr, "%s %s %s->%s %s %s %lf\n", asctime(curtime), "Gifting",
							couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str(),
							"Essential", essent[min_j].get_name().c_str(), essent[min_j].get_price());

						printf("%s->%s %s %s %.2lf\n", couples[i].cboy.get_name().c_str(), 
							couples[i].cgirl.get_name().c_str(), "Essential", essent[min_j].get_name().c_str(), 
							essent[min_j].get_price());
					}

					essent.erase (essent.begin() + min_j);
					toggle *= (-1);
				} else {
					min_price = util[0].get_price();

					for (j = 0; j < util.size(); j++) {
						if (util[j].get_price() < min_price) {
							min_price = util[j].get_price();
							min_j = j;
						}
					}

					if ((couples[i].gifts.get_total_cost() + min_price) <= couples[i].cgirl.get_maint_cost()) {
						utility_gift temp_gift(util[min_j].get_name(), util[min_j].get_price(), 
									util[min_j].get_value(), util[min_j].get_utility_value(), 
									util[min_j].get_utility_class());
						couples[i].gifts.utility.push_back (temp_gift);
						couples[i].gifts.add_cost(min_price);
					
						fprintf(fptr, "%s %s %s->%s %s %s %lf\n", asctime(curtime), "Gifting",
							couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str(),
							"Utility", util[min_j].get_name().c_str(), util[min_j].get_price());

						printf("%s->%s %s %s %.2lf\n", couples[i].cboy.get_name().c_str(), 
							couples[i].cgirl.get_name().c_str(), "Utility", util[min_j].get_name().c_str(), 
							util[min_j].get_price());
					}

					util.erase (util.begin() + min_j);
					toggle *= (-1);
				}
			}
		} else if (couples[i].cboy.get_commit_type() == "geek") {
			toggle = 1;

			while (couples[i].gifts.get_total_cost() <= couples[i].cgirl.get_maint_cost() 
					&& essent.size() > 0 && util.size() > 0) {
				min_j = 0;

				if (toggle == 1) {
					min_price = essent[0].get_price();

					for (j = 0; j < essent.size(); j++) {
						if (essent[j].get_price() < min_price) {
							min_price = essent[j].get_price();
							min_j = j;
						}
					}

					if ((couples[i].gifts.get_total_cost() + min_price) <= couples[i].cgirl.get_maint_cost()) {
						essential_gift temp_gift(essent[min_j].get_name(), essent[min_j].get_price(), 
									essent[min_j].get_value());
						couples[i].gifts.essential.push_back (temp_gift);
						couples[i].gifts.add_cost(min_price);
					
						fprintf(fptr, "%s %s %s->%s %s %s %lf\n", asctime(curtime), "Gifting",
							couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str(),
							"Essential", essent[min_j].get_name().c_str(), essent[min_j].get_price());

						printf("%s->%s %s %s %.2lf\n", couples[i].cboy.get_name().c_str(), 
							couples[i].cgirl.get_name().c_str(), "Essential", essent[min_j].get_name().c_str(), 
							essent[min_j].get_price());
					}

					essent.erase (essent.begin() + min_j);
					toggle *= (-1);
				} else {
					min_price = util[0].get_price();

					for (j = 0; j < util.size(); j++) {
						if (util[j].get_price() < min_price) {
							min_price = util[j].get_price();
							min_j = j;
						}
					}

					if ((couples[i].gifts.get_total_cost() + min_price) <= couples[i].cgirl.get_maint_cost()) {
						utility_gift temp_gift(util[min_j].get_name(), util[min_j].get_price(), 
									util[min_j].get_value(), util[min_j].get_utility_value(), 
									util[min_j].get_utility_class());
						couples[i].gifts.utility.push_back (temp_gift);
						couples[i].gifts.add_cost(min_price);
					
						fprintf(fptr, "%s %s %s->%s %s %s %lf\n", asctime(curtime), "Gifting",
							couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str(),
							"Utility", util[min_j].get_name().c_str(), util[min_j].get_price());

						printf("%s->%s %s %s %.2lf\n", couples[i].cboy.get_name().c_str(), 
							couples[i].cgirl.get_name().c_str(), "Utility", util[min_j].get_name().c_str(), 
							util[min_j].get_price());
					}

					util.erase (util.begin() + min_j);
					toggle *= (-1);
				}
			}

			while (couples[i].gifts.get_total_cost() <= couples[i].cboy.get_budget() 
					&& luxury.size() > 0) {
				max_price = 0.0;
				max_j = 0;

				for (j = 0; j < luxury.size(); j++) {
					if (luxury[j].get_price() > max_price) {
						max_price = luxury[j].get_price();
						max_j = j;
					}
				}

				if ((couples[i].gifts.get_total_cost() + max_price) <= couples[i].cboy.get_budget()) {
					luxury_gift temp_gift(luxury[max_j].get_name(), luxury[max_j].get_price(), 
									luxury[max_j].get_value(), luxury[max_j].get_rating(), luxury[max_j].get_difficulty());
					couples[i].gifts.luxury.push_back (temp_gift);
					couples[i].gifts.add_cost(max_price);
					
					fprintf(fptr, "%s %s %s->%s %s %s %lf\n", asctime(curtime), "Gifting",
							couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str(),
							"Luxury", luxury[max_j].get_name().c_str(), luxury[max_j].get_price());

					printf("%s->%s %s %s %.2lf\n", couples[i].cboy.get_name().c_str(), 
							couples[i].cgirl.get_name().c_str(), "Luxury", luxury[max_j].get_name().c_str(), 
							luxury[max_j].get_price());

					break;
				}

				luxury.erase (luxury.begin() + max_j);
			}
		}
	}

	fclose(fptr);

	for (int i = 0; i < couples.size(); i++) {
		couples[i].set_happiness();
		couples[i].set_compatibility();
	}
}

void algorithms::breakup_least_k_happiest_couples(vector <couple> couples, vector <geek_boy> geek_boys, vector <generous_boy> generous_boys, vector <miser_boy> miser_boys, 
				vector <normal_girl> normal_girls, vector <choosy_girl> choosy_girls, vector <desperate_girl> desperate_girls)
{
	vector <couple> temp_couple = couples;
	int min_happ;
	int min_j;
	int j;
	int k;
	FILE * fptr;
	char temp_string[100];

	fptr = fopen("./logs/newCommitments.log", "w");

	printf("\n\nEnter k for breakup of least happiest couples: ");
	scanf("%d", &k);
	printf("\n%d Breakups:\n\n", k);
	printf("Boy -/- Girl\n\n");

	for (int i = 0; i < k; i++) {
		min_happ = 59000;
		min_j = 0;

		for (j = 0; j < temp_couple.size(); j++) {
			if (temp_couple[j].get_happiness() < min_happ) {
				min_happ = temp_couple[j].get_happiness();
				min_j = j;
			}
		}

		if (temp_couple.size() != 0) {
			printf("%s -/- %s\n", temp_couple[min_j].cboy.get_name().c_str(),
						 temp_couple[min_j].cgirl.get_name().c_str());

			if (temp_couple[min_j].cgirl.get_commit_type() == "normal") {
				for (int j = 0; j < geek_boys.size(); j++) {
					if (temp_couple[min_j].cgirl.can_commit(geek_boys[j].get_budget()) && 
						geek_boys[j].can_commit(temp_couple[min_j].cgirl.get_maint_cost(), temp_couple[min_j].cgirl.get_attract()) 
						&& geek_boys[j].get_status() == 's' && temp_couple[min_j].cgirl.get_status() == 's'
						&& geek_boys[j].get_name() != temp_couple[min_j].cboy.get_name()) {

						temp_couple[min_j].cgirl.change_status('c', geek_boys[j].get_name().c_str());
						geek_boys[j].change_status('c', temp_couple[min_j].cgirl.get_name().c_str());

						normal_girl temp_norm(temp_couple[min_j].cgirl.get_name().c_str(),
																temp_couple[min_j].cgirl.get_attract(),
																temp_couple[min_j].cgirl.get_maint_cost(),
																temp_couple[min_j].cgirl.get_iq(),
																temp_couple[min_j].cgirl.get_criteria());

						geek_boy temp_geek(geek_boys[j].get_name().c_str(),
														  geek_boys[j].get_attract(),
														  geek_boys[j].get_min_attract_req(),
														  geek_boys[j].get_budget(),
														  geek_boys[j].get_iq());
						couple temporary(temp_geek, temp_norm);

						fprintf(fptr, "%s<->%s\n", temp_norm.get_name().c_str(), temp_geek.get_name().c_str());
					}
				}
			} else if (temp_couple[min_j].cgirl.get_commit_type() == "desperate") {
						for (int j = 0; j < miser_boys.size(); j++) {
							if (temp_couple[min_j].cgirl.can_commit(miser_boys[j].get_budget()) && 
								miser_boys[j].can_commit(temp_couple[min_j].cgirl.get_maint_cost(), temp_couple[min_j].cgirl.get_attract()) 
								&& miser_boys[j].get_status() == 's' && temp_couple[min_j].cgirl.get_status() == 's'
								&& miser_boys[j].get_name() != temp_couple[min_j].cboy.get_name()) {

								temp_couple[min_j].cgirl.change_status('c', miser_boys[j].get_name().c_str());
								miser_boys[j].change_status('c', temp_couple[min_j].cgirl.get_name().c_str());

								normal_girl temp_norm(temp_couple[min_j].cgirl.get_name().c_str(),
																temp_couple[min_j].cgirl.get_attract(),
																temp_couple[min_j].cgirl.get_maint_cost(),
																temp_couple[min_j].cgirl.get_iq(),
																temp_couple[min_j].cgirl.get_criteria());

								geek_boy temp_geek(miser_boys[j].get_name().c_str(),
														  miser_boys[j].get_attract(),
														  miser_boys[j].get_min_attract_req(),
														  miser_boys[j].get_budget(),
														  miser_boys[j].get_iq());
								couple temporary(temp_geek, temp_norm);

								fprintf(fptr, "%s<->%s\n", temp_norm.get_name().c_str(), temp_geek.get_name().c_str());
							}
						}
				} else {
						if (temp_couple[min_j].cgirl.get_commit_type() == "choosy") {
							for (int j = 0; j < generous_boys.size(); j++) {
								if (temp_couple[min_j].cgirl.can_commit(generous_boys[j].get_budget()) && 
									generous_boys[j].can_commit(temp_couple[min_j].cgirl.get_maint_cost(), temp_couple[min_j].cgirl.get_attract()) 
									&& generous_boys[j].get_status() == 's' && temp_couple[min_j].cgirl.get_status() == 's'
									&& generous_boys[j].get_name() != temp_couple[min_j].cboy.get_name()) {

									temp_couple[min_j].cgirl.change_status('c', generous_boys[j].get_name().c_str());
									generous_boys[j].change_status('c', temp_couple[min_j].cgirl.get_name().c_str());

									normal_girl temp_norm(temp_couple[min_j].cgirl.get_name().c_str(),
																temp_couple[min_j].cgirl.get_attract(),
																temp_couple[min_j].cgirl.get_maint_cost(),
																temp_couple[min_j].cgirl.get_iq(),
																temp_couple[min_j].cgirl.get_criteria());

									geek_boy temp_geek(generous_boys[j].get_name().c_str(),
														  generous_boys[j].get_attract(),
														  generous_boys[j].get_min_attract_req(),
														  generous_boys[j].get_budget(),
														  generous_boys[j].get_iq());
									couple temporary(temp_geek, temp_norm);

									fprintf(fptr, "%s<->%s\n", temp_norm.get_name().c_str(), temp_geek.get_name().c_str());
								}
							}
						}
				}
			temp_couple.erase (temp_couple.begin() + min_j);
		} else {
			printf("\nOnly %lu couples present.\n", couples.size());
			break;
		}
	}
	fclose(fptr);

	printf("\nNew compatible boyfriends to newly single girls:\n\n");

	fptr = fopen("./logs/newCommitments.log", "r");

	int count = 0;

	while(!feof(fptr)) {
		fscanf(fptr, "%s\n", temp_string);
		printf("%s\n", temp_string);
		count++;
	}

	try {
	if (count < k) {
		breakup_too_few_exception e2;
		throw e2;
	}
	} catch(breakup_too_few_exception &e2) {
		e2.compatible_message();
	}
}

void algorithms::make_couples_q4(vector <geek_boy> &geek_boys, 
					vector <generous_boy> &generous_boys, vector <miser_boy> &miser_boys,
					vector <normal_girl> &normal_girls, 
					 vector <choosy_girl> &choosy_girls, vector <desperate_girl> &desperate_girls)
{
	FILE * fptr;
	FILE * couple_file;
	time_t _tm =time(NULL);
	struct tm * curtime = localtime ( &_tm );
	int count = 0;
	int flag;

	fptr = fopen("./logs/commitments.log", "w");
	couple_file = fopen("./data/couples.dat", "w");

	printf("Matched Couples:\n");

	flag = -1;

	for (int i = 0; i < desperate_girls.size(); i++) {
		int compatible_flag = 0;

		try {
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

				if (flag == -1) {
					printf("%s<->%s\n", desperate_girls[i].get_name().c_str(), 
										miser_boys[j].get_name().c_str());
				} else {
					printf("%s<->%s\n", miser_boys[j].get_name().c_str(),
										desperate_girls[i].get_name().c_str());
				}
				compatible_flag = 1;
				flag *= -1;

			}
		}
		if (compatible_flag == 0) {
			make_couple_exception e(choosy_girls[i].get_name());
			throw e;
		}

		} catch(make_couple_exception &e) {
			e.message();
		}
	}

	for (int i = 0; i < normal_girls.size(); i++) {
		int compatible_flag = 0;

		try {
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

				if (flag == -1) {
					printf("%s<->%s\n", normal_girls[i].get_name().c_str(), 
										geek_boys[j].get_name().c_str());
				} else {
					printf("%s<->%s\n", geek_boys[j].get_name().c_str(),
										normal_girls[i].get_name().c_str());
				}
				compatible_flag = 1;
				flag *= -1;
			}
		}
		if (compatible_flag == 0) {
			make_couple_exception e(choosy_girls[i].get_name());
			throw e;
		}

		} catch(make_couple_exception &e) {
			e.message();
		}
	}

	for (int i = 0; i < choosy_girls.size(); i++) {
		int compatible_flag = 0;

		try {
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
				
				if (flag == -1) {
					printf("%s<->%s\n", choosy_girls[i].get_name().c_str(), 
										generous_boys[j].get_name().c_str());
				} else {
					printf("%s<->%s\n", generous_boys[j].get_name().c_str(),
										choosy_girls[i].get_name().c_str());
				}
				compatible_flag = 1;
				flag *= -1;
			}
		}
		if (compatible_flag == 0) {
			make_couple_exception e(choosy_girls[i].get_name());
			throw e;
		}

		} catch(make_couple_exception &e) {
			e.message();
		}
	}

	fclose(couple_file);
	fclose(fptr);
}

void algorithms::tdays_gifting_coupling(vector <couple> couples, vector <geek_boy> geek_boys, vector <generous_boy> generous_boys, vector <miser_boy> miser_boys, 
							vector <normal_girl> normal_girls, vector <choosy_girl> choosy_girls, vector <desperate_girl> desperate_girls,
							vector <essential_gift> essential_gifts, vector <luxury_gift> luxury_gifts, vector <utility_gift> utility_gifts)
{
	int t = -1;

	while (t < 1 || t > 4) {
		try {
			printf("\n\nEnter t for number of gifting days: \n");
			scanf("%d", &t);
			if (t < 1 || t > 4) {
				tdays_limit_exception e;
				throw e;
			}
		} catch(tdays_limit_exception &e) {
			e.message();
		}
	}

	for (int i = 0; i < t; ++i)
	{
		printf("\nDay %d:\n", i + 1);

		algorithms::gifting(couples, essential_gifts, luxury_gifts, utility_gifts);

		printf("\nAfter giftings on Day %d: \n", i + 1);

		algorithms::breakup_least_k_happiest_couples(couples, geek_boys, generous_boys, 
							miser_boys, normal_girls, choosy_girls, desperate_girls);

	}
}

void algorithms::search_default_couple(vector <couple> couples, string boy_name)
{
	printf("\n\nSearching for %s's girlfriend using default naive search algorithm based on unsorted vector...\n", boy_name.c_str());

	for (int i = 0; i < couples.size(); ++i)
	{
		if (boy_name == couples[i].cboy.get_name().c_str()) {
			printf("%s's girlfriend is %s \n", couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str());
			return;
		}
	}

	printf("%s has no girlfriend :( \n", boy_name.c_str());
	return;
}

void algorithms::search_sorted_couple(vector <couple> &couples, string boy_name)
{
	printf("\n\nSearching for %s's girlfriend using search algorithm based on binary search on sorted vector...\n", boy_name.c_str());

	int min_i = 0, i, j;

	string min_str = couples[0].cboy.get_name().c_str();

	for (i = 0; i < couples.size() - 1; ++i)
	{
		min_str = couples[i].cboy.get_name().c_str();

		for (j = 0; j < couples.size(); ++j)
		{
			if (strcmp(min_str.c_str(), couples[j].cboy.get_name().c_str()) < 0) {
				min_str = couples[j].cboy.get_name().c_str();
				min_i = j;
			}
		}

		couple temp = couples[i];
		couples[i] = couples[min_i];
		couples[min_i] = temp;
	}

	for (int i = 0; i < couples.size(); ++i)
	{
		if (boy_name == couples[i].cboy.get_name().c_str()) {
			printf("%s's girlfriend is %s \n", couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str());
			return;
		}
	}

	printf("%s has no girlfriend :( \n", boy_name.c_str());
	return;
}

void algorithms::search_hashed_couple(vector <couple> couples, string boy_name)
{
	printf("\n\nSearching for %s's girlfriend using search algorithm based on hash tables...\n", boy_name.c_str());

	for (int i = 0; i < couples.size(); ++i)
	{
		if (boy_name == couples[i].cboy.get_name().c_str()) {
			printf("%s's girlfriend is %s \n", couples[i].cboy.get_name().c_str(), couples[i].cgirl.get_name().c_str());
			return;
		}
	}

	printf("%s has no girlfriend :( \n", boy_name.c_str());
	return;
}