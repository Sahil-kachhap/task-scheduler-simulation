# task-scheduler-simulation
This project is a simulation of the Completely Fair Scheduler (CFS), a process scheduling algorithm used in the Linux kernel. The simulation demonstrates how CFS manages CPU-bound and I/O-bound tasks by maintaining fairness and prioritizing tasks based on their vruntime and weight.

## Overview
The Completely Fair Scheduler (CFS) is designed to provide fair CPU time to all tasks by using a virtual runtime (vruntime) metric. Tasks with lower vruntime are prioritized, ensuring that higher-priority tasks (those with higher weight) get more CPU time. This simulation implements a simplified version of CFS, focusing on:

CPU-bound tasks: Tasks that primarily use the CPU.
I/O-bound tasks: Tasks that frequently wait for I/O operations.

## Simulation
<img width="1705" height="828" alt="process-gantt-chart" src="https://github.com/user-attachments/assets/f4b9eb79-77db-4963-9e42-e0300e7e6a65" />
