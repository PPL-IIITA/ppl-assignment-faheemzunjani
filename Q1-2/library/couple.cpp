#include "couple.hpp"

using namespace data;

/* Constructor */
// couple::couple()
// {
// 	this->cboy = boy("copy_boy",0,0,0,0,"x","x");
// 	this->cgirl = girl("copy_girl",0,0,0,'x',"x","x");
// }

couple::couple(geek_boy &copy_boy, normal_girl &copy_girl)
{
	this->cboy.copy(copy_boy);
	this->cgirl.copy(copy_girl);
	this->happiness = 0;
	this->compatibility = 0;
}

/* Accessors */
int couple::get_happiness()
{
	return this->happiness;
}

int couple::get_compatibility()
{
	return this->compatibility;
}

/* Mutators */

void couple::set_happiness()
{

}

void couple::set_compatibility()
{
	
}