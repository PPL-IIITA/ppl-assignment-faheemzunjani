#ifndef GEEK_BOY_H
#define GEEK_BOY_H
#include <string>

namespace data {
    class geek_boy {
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
            //geek_boy();
            geek_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
                double budget, int iq);

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
            void set_happiness(int happiness);
            void change_status(char status);
            void change_status(char status, std::string commit_to);

            /* Miscelleneous Methods */
            int can_commit(double maintainance_cost, int attractiveness);
    };
}                

#endif