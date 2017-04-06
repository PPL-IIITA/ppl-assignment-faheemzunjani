#ifndef NORMAL_GIRL_H
#define NORMAL_GIRL_H
#include "generic_girl.hpp"
#include <string>

namespace data {
    //! Normal Girl class 
    /*!
        Normal Girl class which contains attributes to describe a normal girl. 
    */
    class normal_girl: public generic_girl {
        public:
            //! Parameterised constructor
            /*!
              \param name_id Name of girl.
              \param attractiveness Attractiveness of girl.
              \param maintainance_cost Maintainance cost of girl.
              \param iq Intelligence of girl.
              \param criteria Criteria of girl.
            */
            normal_girl(std::string name_id, int attractiveness, 
                        double maintainance_cost, int iq, char criteria);
    };
}                

#endif