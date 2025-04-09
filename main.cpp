#include <iostream>
using namespace std;

#include <vector>
#include "Task.h"
#include "menu.h"



int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<Task> tasks;
    int choice;

    while (true){
        showMenu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string desc;
            cout << "Enter task description: ";
            getline(cin, desc);
            tasks.push_back(Task(desc));
            cout << "Task added!\n";

        } else if (choice == 2) {
            int index;
            cout << "Enter task number to mark as done: ";
            cin >> index;
            if (index >= 1 && index <= tasks.size()) {
                tasks[index-1].markDone();
                cout << "Task marked as done!\n";
            } else {
                cout << "Invalid task number.\n";
            }

        } else if (choice == 3) {
            int index;
            cout << "Enter task number to delete: ";
            cin >> index;
            if (index >= 1 && index <= tasks.size()) {
                tasks.erase(tasks.begin() + index -1);
                cout << "Task deleted.\n";
            } else {
                cout << "Invalid task number.\n";
            }

        } else if (choice == 4) {
            cout << "\nYour Tasks:\n";
            if (tasks.empty()) {
                cout << "No tasks yet.\n";
            } else {
                for (int i = 0; i < tasks.size(); ++i) {
                    tasks[i].printTask(i);
                }
            }

        } else if (choice == 5) {
            cout << "Goodbye!\n";
            break;

        } else {
            cout << "Invalid choice. Try again.\n";
        }




    }



    return 0;
}
