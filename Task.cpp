//
// Created by Student on 10/04/2025.


//

#include "Task.h"



Task::Task(std::string desc) : description(desc), isDone(false) {}

void Task::markDone() {
    isDone = true;
}

bool Task::getStatus() const {
    return isDone;
}

std::string Task::getDescription() const {
    return description;
}

void Task::printTask(int index) const {
    std::cout << index + 1 << ". [" << (isDone ? "V" : " ") << "] " << description << std::endl;
}