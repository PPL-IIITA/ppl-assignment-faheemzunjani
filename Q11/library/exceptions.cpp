#include "exceptions.hpp"
#include <cstdio>

using namespace std;
using namespace data;
using namespace exceptions;

make_couple_exception::make_couple_exception(string girl_name)
{
	this->name = girl_name;
}

void make_couple_exception::message()
{
	printf("No compatible boyfriend found for %s in the database.\n", this->name.c_str());
}

void breakup_too_few_exception::message()
{
	printf("Fewer than k couples to breakup. Try a smaller k.\n");
}

void breakup_too_few_exception::compatible_message()
{
	printf("No compatible boyfriends in database for other broken up girls.\n");
}

void tdays_limit_exception::message()
{
	printf("t-days limit exceeded. Please enter a t between 1 and 4.\n");
}