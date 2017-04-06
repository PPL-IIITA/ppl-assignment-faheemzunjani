#ifndef MISER_BOY_H
#define MISER_BOY_H
#include "generic_boy.hpp"
#include <string>

namespace data {
    //! Miser Boy class 
    /*!
        Miser Boy class which contains attributes to describe a miser boy and inherits the Generic Boy class. 
    */
    class miser_boy: public generic_boy {
        public:
            //! Parameterised constructor
            /*!
              \param name_id Name of boy.
              \param attractiveness Attractiveness of boy.
              \param min_attractiveness_req Minimum attractiveness of the girl required by the boy.
              \param budget Budget of boy.
              \param iq Inteeligence of boy.
              \param commit_type Type of boy.
              \param commit_to Name of girl committed to.
            */
            miser_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
                double budget, int iq);
    };
}                

#endif