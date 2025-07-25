#ifndef CPU_BOUND_PROCESS_EXECUTION_HPP
#define CPU_BOUND_PROCESS_EXECUTION_HPP

#include "process-service.hpp"
#include "queue-service.hpp"

#define CPU_INSTRUCTIONS_IN_MS 200

double weightFunction(int priority);

void executeCpuBoundProcess(Process* process, int timeSlice, QueueService& q);

#endif // CPU_BOUND_PROCESS_EXECUTION_HPP