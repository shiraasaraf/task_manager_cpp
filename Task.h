//
// Created by Student on 10/04/2025.
//

#ifndef TASK_MANAGER_TASK_H
#define TASK_MANAGER_TASK_H

#include <iostream>
#include <string>

class Task {

private:
    std::string description;
    bool isDone;

public:
    Task(std::string desc);

    void markDone();

    bool getStatus() const;

    std::string getDescription() const;

    void printTask(int index) const;


};


#endif //TASK_MANAGER_TASK_H
