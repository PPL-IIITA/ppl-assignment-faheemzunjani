#ifndef CHOOSY_GIRL_H
#define CHOOSY_GIRL_H
#include "generic_girl.hpp"
#include <string>

namespace data {
    //! Choosy Girl class 
    /*!
        Choosy Girl class which contains attributes to describe a choosy girl. 
    */
    class choosy_girl: public generic_girl {
        public:
            //! Parameterised constructor
            /*!
              \param name_id Name of girl.
              \param attractiveness Attractiveness of girl.
              \param maintainance_cost Maintainance cost of girl.
              \param iq Intelligence of girl.
              \param criteria Criteria of girl.
            */
            choosy_girl(std::string name_id, int attractiveness, 
                       double maintainance_cost, int iq, char criteria);
    };
}                

#endif