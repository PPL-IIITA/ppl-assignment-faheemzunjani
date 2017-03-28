#include <cstdio>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	FILE * fptr;
	time_t t;
	int j, price, value, rating, difficulty, utility_value;
	char t_name[5];
	char utility_classes[4][20] = {"tools\0", "stationary\0", "beauty\0", "health\0"};

	srand((unsigned) time(&t));

	fptr = fopen("../data/essential_gifts.dat", "w");

	for (int i = 0; i < 200; i++) {
		t_name[0] = (char)(rand()%26 + 'a');
		t_name[1] = (char)(rand()%26 + 'a');
		t_name[2] = (char)(rand()%26 + 'a');
		t_name[3] = (char)(rand()%26 + 'a');
		t_name[4] = '\0';

		price = rand()%400 + 100;
		value = rand()%4 + 1;

		fprintf(fptr, "%s %d %d\n", t_name, price, value);
	}

	fclose(fptr);

	fptr = fopen("../data/luxury_gifts.dat", "w");

	for (int i = 0; i < 50; i++) {
		t_name[0] = (char)(rand()%26 + 'a');
		t_name[1] = (char)(rand()%26 + 'a');
		t_name[2] = (char)(rand()%26 + 'a');
		t_name[3] = (char)(rand()%26 + 'a');
		t_name[4] = '\0';

		price = rand()%1000 + 1000;
		value = rand()%3 + 8;
		rating = rand()%11;
		difficulty = rand()%11;

		fprintf(fptr, "%s %d %d %d %d\n", t_name, price, value, rating, difficulty);
	}

	fclose(fptr);

	fptr = fopen("../data/utility_gifts.dat", "w");

	for (int i = 0; i < 100; i++) {
		t_name[0] = (char)(rand()%26 + 'a');
		t_name[1] = (char)(rand()%26 + 'a');
		t_name[2] = (char)(rand()%26 + 'a');
		t_name[3] = (char)(rand()%26 + 'a');
		t_name[4] = '\0';

		price = rand()%500 + 500;
		value = rand()%3 + 5;
		utility_value = rand()%11;
		j = rand()%4;

		fprintf(fptr, "%s %d %d %d %s\n", t_name, price, value, utility_value, utility_classes[j]);
	}

	fclose(fptr);
}