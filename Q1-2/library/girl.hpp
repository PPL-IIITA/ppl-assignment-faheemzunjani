#ifndef GIRL_H
#define GIRL_H
#include <string>
#include "normal_girl.hpp"

namespace data {
    class girl {
        private:
            std::string name_id;
            int attractiveness;
            int happiness;
            double maintainance_cost;
            int iq;
            char status;
            char criteria;
            std::string commit_type;
            std::string commit_to;

        public:
            /* Constructor */
            girl();
            girl(std::string name_id, int attractiveness, 
                double maintainance_cost, int iq, char criteria, 
                std::string commit_type, std::string commit_to);
            void copy(normal_girl &copy_girl);
            
            /* Accessors */
            std::string get_name();
            double get_maint_cost();
            int get_attract();
            int get_happiness();
            int get_iq();
            char get_status();
            char get_criteria();
            std::string get_commit_type();
            std::string get_commit_to();

            /* Mutators */
            void set_happiness(double gift_cost, int gift_value);
            void change_status(char status);
            void change_status(char status, std::string commit_to);

            /* Miscellaneous Methods */
            int can_commit(double budget);
    };
}                

#endif