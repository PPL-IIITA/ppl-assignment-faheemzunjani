#include <string>

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
            girl(std::string name_id, int attractiveness, int maintainance_cost,
                 int iq, char criteria, std::string commit_type);
            void set_happiness(int happiness);
            void change_status(char status);
            void change_status(char status, std::string commit_to);
            int can_commit(double budget);
    };
}                
