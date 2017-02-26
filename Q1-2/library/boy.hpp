#ifndef BOY_H
#define BOY_H
#include <string>
#include "geek_boy.hpp"

namespace data {
    class boy {
        private:
            std::string name_id;
            int attractiveness;
            int min_attractiveness_req;
            int happiness;
            double budget;
            int iq;
            char status;
            std::string commit_type;
            std::string commit_to;

        public:
            /* Constructor */
            boy();
            boy(std::string name_id, int attractiveness, int min_attractiveness_req,
                double budget, int iq, std::string commit_type, std::string commit_to);
            void copy(geek_boy &copy_boy);

            /* Accessors */
            std::string get_name();
            double get_budget();
            int get_attract();
            int get_min_attract_req();
            int get_happiness();
            int get_iq();
            char get_status();
            std::string get_commit_type();
            std::string get_commit_to();

            /* Mutators */
            void set_happiness(double gift_cost, int girl_happiness, int girl_iq);
            void change_status(char status);
            void change_status(char status, std::string commit_to);

            /* Miscelleneous Methods */
            int can_commit(double maintainance_cost, int attractiveness);
    };
}                

#endif