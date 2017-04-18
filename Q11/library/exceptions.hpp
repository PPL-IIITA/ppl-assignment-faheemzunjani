#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <vector>
#include <cstdio>
#include "geek_boy.hpp"
#include "generous_boy.hpp"
#include "miser_boy.hpp"
#include "normal_girl.hpp"
#include "desperate_girl.hpp"
#include "choosy_girl.hpp"
#include "couple.hpp"
#include "essential_gift.hpp"
#include "luxury_gift.hpp"
#include "utility_gift.hpp"

using namespace std;
using namespace data;

//! namespace exceptions contains algorithmic functions
/*!
    exceptions namespace contains all the algorithmic functions.
*/
namespace exceptions {
	//! make_couple_exception class 
    /*!
        make_couple_exception class which handles exceptions in make_couple algorithm
    */
	class make_couple_exception
	{
	public:
		string name; /*!< Name of the girl */

		//! Parameterised make_couple_exception constructor
            /*!
              \param message Error message to be displayed
            */
		make_couple_exception(string girl_name);

		//! Message method of the class which prints the error message with the girl's name
		void message();
	};

}







#endif