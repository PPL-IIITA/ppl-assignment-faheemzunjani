#ifndef GIRL_H
#define GIRL_H
#include <string>
#include "normal_girl.hpp"

namespace data {
    //! Girl class 
    /*!
        Girl class which contains attributes to describe a girl. 
        Couple class contains object of Girl class to describe a committed girl
    */
    class girl {
        private:
            std::string name_id; /*!< Name of the girl */
            int attractiveness;  /*!< Attractiveness of the girl */
            int happiness; /*!< Happiness of the girl */
            double maintainance_cost;  /*!< Maintainance cost of the girl */
            int iq;                     /*!< IQ (intelligence) of the girl */
            char status;            /*!< Commitment status of the girl */
            char criteria; /*!< Criteria of the girl */
            std::string commit_type; /*!< Commit type of the girl */
            std::string commit_to; /*!< girl committed to */

        public:
            //! Default girl constructor
            /*!
              Default constructor for the container of Girl object within Couple class
            */
            girl();

            //! Parameterised girl constructor
            /*!
              \param name_id Name of girl.
              \param attractiveness Attractiveness of girl.
              \param maintainance_cost Maintainance cost of girl.
              \param iq Intelligence of girl.
              \param criteria Criteria of girl.
            */
            girl(std::string name_id, int attractiveness, 
                double maintainance_cost, int iq, char criteria, 
                std::string commit_type, std::string commit_to);
            
            //! name_id Accessor method
            /*!
              \return name_id of girl
            */
            std::string get_name();
            //! maintainance_cost Accessor method
            /*!
              \return maintanance_cost of girl
            */
            double get_maint_cost();

            //! attractiveness Accessor method
            /*!
              \return attractiveness of girl
            */
            int get_attract();

            //! happiness Accessor method
            /*!
              \return happiness of girl
            */
            int get_happiness();

            //! iq Accessor method
            /*!
              \return iq of girl
            */
            int get_iq();

            //! status Accessor method
            /*!
              \return status of girl
            */
            char get_status();

            //! criteria Accessor method
            /*!
              \return criteria of girl
            */
            char get_criteria();

            //! commit_type Accessor method
            /*!
              \return commit_type of girl
            */
            std::string get_commit_type();

            //! commit_to Accessor method
            /*!
              \return commit_to of girl
            */
            std::string get_commit_to();

            //! Set happiness Mutator
            /*!
              \param gift_cost Total cost of gifts received.
              \param gift_value Total value of gifts received.
            */
            void set_happiness(double gift_cost, int gift_value);

            //! Change status to single Mutator
            /*!
              \param status Status of the girl.
            */
            void change_status(char status);

            //! Change status to committed Mutator
            /*!
              \param status Status of the girl.
              \param commit_to Girl committed to.
            */
            void change_status(char status, std::string commit_to);

            /* Miscellaneous Methods */
            int can_commit(double budget);

            void copy(normal_girl &copy_girl);
    };
}                

#endif