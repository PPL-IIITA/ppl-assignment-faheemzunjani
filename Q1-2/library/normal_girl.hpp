#ifndef NORMAL_GIRL_H
#define NORMAL_GIRL_H
#include <string>

namespace data {
    class normal_girl {
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
            //normal_girl();
            normal_girl(std::string name_id, int attractiveness, 
                        double maintainance_cost, int iq, char criteria);
            
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
            void set_happiness(int happiness);
            void change_status(char status);
            void change_status(char status, std::string commit_to);

            /* Miscellaneous Methods */
            int can_commit(double budget);
    };
}                

#endif