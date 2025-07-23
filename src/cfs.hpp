#ifndef CFS_HPP
#define CFS_HPP

#include <vector>
#include <ctime>
#include "process-service.hpp"
#include "process-log.hpp"
#include "queue-service.hpp"
#include "cpu-bound-process-execution.hpp"
#include "io-bound-process-execution.hpp"

class cfs {
private:
    void createProcessLog(std::vector<ProcessLog*> &logs, long long startTime, long long endTime, int pid);

public:
    std::vector<ProcessLog*> schedule(std::vector<Process*> processList);
};

#endif // CFS_HPP