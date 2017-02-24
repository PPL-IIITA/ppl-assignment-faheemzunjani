#include <string>

namespace data {
    class choosy_girl {
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
           choosy_girl(std::string name_id, int attractiveness, 
                       double maintainance_cost, int iq, char criteria);
            void set_happiness(int happiness);
            void change_status(char status);
            void change_status(char status, std::string commit_to);
            int can_commit(double budget);
    };
}                
