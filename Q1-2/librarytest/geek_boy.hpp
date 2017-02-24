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
            geek_boy(std::string name_id, int attractiveness, int min_attractiveness_req,
                double budget, int iq);
            double get_budget();
            void set_happiness(int happiness);
            void change_status(char status);
            void change_status(char status, std::string commit_to);
            int can_commit(double maintainance_cost, int attractiveness);
    };
}                

#endif