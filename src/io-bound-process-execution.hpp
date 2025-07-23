#ifndef IO_BOUND_PROCESS_EXECUTION_HPP
#define IO_BOUND_PROCESS_EXECUTION_HPP

#include "process-service.hpp"
#include "io-bound-process-execution.hpp"
#include <iostream>
#include <thread>
#include <time.h>
#include "cpu-bound-process-execution.hpp"

void handleIoBoundProcess(Process* process, int ioWaitTime, QueueService& q);

#endif