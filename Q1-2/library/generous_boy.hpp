#ifndef GENEROUS_BOY_H
#define GENEROUS_BOY_H

#include <string>

namespace data {
    //! Generous Boy class 
    /*!
        Generous Boy class which contains attributes to describe a generous boy. 
    */
    class generous_boy {
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
            generous_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
                double budget, int iq);

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
              \param happiness Happiness of boy to set.
            */
            void set_happiness(int happiness);
            
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

            //! Change commit_type Mutator
            /*!
              \param type New type of the boy.
            */
            void change_commit_type(std::string type);

            //! Commitability checker method
            /*!
              \param maintainance_cost Maintainance cost of the girl.
              \param attractiveness  Attractiveness of the girl.
              \return 1 if they can commit, 0 otherwise
            */
            int can_commit(double maintainance_cost, int attractiveness);
    };
}                

#endif