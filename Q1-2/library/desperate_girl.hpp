#ifndef DESPERATE_GIRL_H
#define DESPERATE_GIRL_H
#include <string>

namespace data {
    //! Desperate Girl class 
    /*!
        Desperate Girl class which contains attributes to describe a desperate girl. 
    */
    class desperate_girl {
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
            //! Parameterised constructor
            /*!
              \param name_id Name of girl.
              \param attractiveness Attractiveness of girl.
              \param maintainance_cost Maintainance cost of girl.
              \param iq Intelligence of girl.
              \param criteria Criteria of girl.
            */
            desperate_girl(std::string name_id, int attractiveness, 
                          double maintainance_cost, int iq, char criteria);
            
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
              \param happiness Happiness to set
            */
            void set_happiness(int happiness);
            
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

            //! Commitability checker method
            /*!
              \param budget budget of the boy.
              \return 1 if they can commit, 0 otherwise
            */
            int can_commit(double budget);
    };
}                

#endif