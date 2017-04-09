#ifndef ALGORITHMS_H
#define ALGORITHMS_H

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

//! namespace algorithms contains algorithmic functions
/*!
    algorithms namespace contains all the algorithmic functions.
*/
namespace algorithms {
	//! make_couples algorithmic function to form couples from boys and girls
    /*!
      \param geek Vector of the geek boys.
      \param generous Vector of the generous boys.
      \param miser Vector of the miser boys.
      \param normie Vector of the normal girls.
      \param choosy Vector of the choosy girls.
      \param despo Vector of the desperate girls.
    */
	void make_couples(vector <geek_boy> &geek, 
					vector <generous_boy> &generous, vector <miser_boy> &miser,
					vector <normal_girl> &normie, 
					 vector <choosy_girl> &choosy, vector <desperate_girl> &despo);
	
	//! gifting algorithmic function to perform gifting between couples by given algorithm
    /*!
      \param couples Vector of the couples.
      \param essential_gifts Vector of the essential gifts.
      \param luxury_gifts Vector of the luxury gifts.
      \param utility_gifts Vector of the utility gifts.
    */
	void gifting(vector <couple> &couples, vector <essential_gift> &essential_gifts,
						vector <luxury_gift> &luxury_gifts, vector <utility_gift> &utility_gifts);

  //! breakup_least_k_happiest_couples algorithmic function to break up least k happiest couples and allot the girls new boyfriends.
    /*!
      \param couples Vector of the couples.
      \param geek Vector of the geek boys.
      \param generous Vector of the generous boys.
      \param miser Vector of the miser boys.
      \param normie Vector of the normal girls.
      \param choosy Vector of the choosy girls.
      \param despo Vector of the desperate girls.
    */
  void breakup_least_k_happiest_couples(vector <couple> couples, vector <geek_boy> geek_boys, 
            vector <generous_boy> generous_boys, vector <miser_boy> miser_boys, 
            vector <normal_girl> normal_girls, vector <choosy_girl> choosy_girls, 
            vector <desperate_girl> desperate_girls);

}

#endif