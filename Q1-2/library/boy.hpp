#ifndef BOY_H
#define BOY_H
#include <string>
#include "geek_boy.hpp"

namespace data {
    //! Boy class 
    /*!
        Boy class which contains attributes to describe a boy. 
        Couple class contains object of Boy class to describe a committed boy
    */
    class boy {
        private:
            std::string name_id; /*!< Name of the boy */
            int attractiveness;  /*!< Attractiveness of the boy */
            int min_attractiveness_req; /*!< Minimum attractiveness of the girl required by the boy */
            int happiness;          /*!< Happiness of the boy */
            double budget;             /*!< Budget of the boy */
            int iq;                     /*!< IQ (intelligence) of the boy */
            char status;            /*!< Commitment status of the boy */
            std::string commit_type; /*!< Type of the boy */
            std::string commit_to; /*!< Girl who the boy is committed to */

        public:
            //! Default boy constructor
            /*!
              Default constructor for the container of Boy object within Couple class
            */
            boy();

            //! Parameterised boy constructor
            /*!
              \param name_id Name of boy.
              \param attractiveness Attractiveness of boy.
              \param min_attractiveness_req Minimum attractiveness of the girl required by the boy.
              \param budget Budget of boy.
              \param iq Inteeligence of boy.
              \param commit_type Type of boy.
              \param commit_to Name of girl committed to.
            */
            boy(std::string name_id, int attractiveness, int min_attractiveness_req,
                double budget, int iq, std::string commit_type, std::string commit_to);

            //! name_id Accessor method
            /*!
              \return name_id of boy
            */
            std::string get_name();

            //! budget Accessor method
            /*!
              \return budget of boy
            */
            double get_budget();

            //! attractiveness Accessor method
            /*!
              \return attractiveness of boy
            */
            int get_attract();

            //! min_attractiveness_req Accessor method
            /*!
              \return min_attractiveness_req of boy
            */
            int get_min_attract_req();

            //! happiness Accessor method
            /*!
              \return happiness of boy
            */
            int get_happiness();

            //! iq Accessor method
            /*!
              \return iq of boy
            */
            int get_iq();

            //! status Accessor method
            /*!
              \return status of boy
            */
            char get_status();

            //! commit_type Accessor method
            /*!
              \return commit_type of boy
            */
            std::string get_commit_type();

            //! commit_to Accessor method
            /*!
              \return commit_to of boy
            */
            std::string get_commit_to();

            //! Set happiness Mutator
            /*!
              \param gift_cost Total cost of gifts given.
              \param attractiveness Happiness of girl.
              \param iq Inteeligence of girl.
            */
            void set_happiness(double gift_cost, int girl_happiness, int girl_iq);
            
            //! Change status to single Mutator
            /*!
              \param status Status of the boy.
            */
            void change_status(char status);

            //! Change status to committed Mutator
            /*!
              \param status Status of the boy.
              \param commit_to Girl committed to.
            */
            void change_status(char status, std::string commit_to);

            //! Commitability checker method
            /*!
              \param maintainance_cost Maintainance cost of the girl.
              \param attractiveness  Attractiveness of the girl.
              \return 1 if they can commit, 0 otherwise
            */
            int can_commit(double maintainance_cost, int attractiveness);
            
            //! Copy the attributes of passed object to current object
            /*!
              \param copy_boy Boy object to copy from.
            */
            void copy(geek_boy &copy_boy);
    };
}                

#endif