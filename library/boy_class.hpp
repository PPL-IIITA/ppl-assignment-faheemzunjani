#include <string>

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
            boy(std::string name_id, int attractiveness, int min_attractiveness_req,
                double budget, int iq, std::string commit_type);
            double get_budget();
            void set_happiness(int happiness);
            void change_status(char status);
            void change_status(char status, std::string commit_to);
            int can_commit(double maintainance_cost, int attractiveness);
    };
}                
