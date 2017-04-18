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