#include <iostream>
using namespace std;

const int MAX_TASK = 100;

struct Tasks {
    int id;
    bool status;
    string description;
};

Tasks task[MAX_TASK];

int choice;
int taskCount = 0;

void addTask() {
    if(taskCount > MAX_TASK) {
        cout << "cant add more tasks";
    } else {
        Tasks newTask;
        newTask.id = taskCount + 1;
        cout << "Enter task description";
        cin >> newTask.description;
        newTask.status = false;
        task[taskCount] = newTask;
        taskCount++;
        cout << "task added";
    }
}

void listTask() {
    if(taskCount = 0) {
        cout << "there are no tasks available";
    } else {
        cout << "tasks";
            for(int i = 0; i < taskCount; i++) {
            cout << task[i].id << ". " << task[i].description;
        }
    }
}

void displayMenu() {
    cout << "\nMENU\n";
    cout << "1 - Add a Task\n";
    cout << "2 - List Tasks\n";
    cout << "3 - Exit\n";
}

int main() {
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                listTask();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Unavailable, try again...\n";
        }
    } while (choice != 4);

    return 0;
}
