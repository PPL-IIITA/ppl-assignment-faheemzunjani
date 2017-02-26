#ifndef UTILITY_H
#define UTILITY_H

#include <vector>
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

namespace utility {
	//! Read_boys_data utility function to read boys data from boys.dat
    /*!
      \param geek_boys Vector of the geek boys.
      \param generous_boys Vector of the generous boys.
      \param miser_boys Vector of the miser boys.
    */
	void read_boys_data(vector <geek_boy> &geek_boys, vector <generous_boy> &generous_boys, 
					vector <miser_boy> &miser_boys);

	//! Read_girls_data utility function to read girls data from girls.dat
    /*!
      \param normal_girls Vector of the normal girls.
      \param choosy_girls Vector of the choosy girls.
      \param desperate_girls Vector of the desperate girls.
    */
	void read_girls_data(vector <normal_girl> &normal_girls, vector <choosy_girl> &choosy_girls, 
					 vector <desperate_girl> &desperate_girls);

	//! Read_couples_data utility function to read couples data from couples.dat
    /*!
      \param couples Vector of the couples.
    */
	void read_couples_data(vector <couple> &couples);

	//! Read_girls_data utility function to read girls data from girls.dat
    /*!
      \param essential_gifts Vector of the essential gifts.
      \param luxury_gifts Vector of the luxury gifts.
      \param utility_gifts Vector of the utility gifts.
    */
	void read_gifts_data(vector <essential_gift> &essential_gifts, vector <luxury_gift> &luxury_gifts, 
						 vector <utility_gift> &utility_gifts);

	//! print_k_happiest_couples utility function to print k happiest couples
    /*!
      \param couples Vector of the couples.
    */
	void print_k_happiest_couples(vector <couple> &couples);

	//! print_k_compatible_couples utility function to print k most compatible couples
    /*!
      \param couples Vector of the couples.
    */
	void print_k_compatibile_couples(vector <couple> &couples);
}

#endif