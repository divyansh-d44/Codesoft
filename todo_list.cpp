#include<iostream>
#include<vector>
using namespace std;
void displayTodoList(const vector<string>& todoList) {
    cout << "To-Do List:" << endl;
    
    for (size_t i = 0; i < todoList.size(); ++i) {
        

        cout << i + 1 << ". " << todoList[i] << endl;
       break;
    }
}
int main() {
    vector<string> todoList;

    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Remove task" << endl;
        cout << "3. Display tasks" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the task to add: ";
            string task;
            cin.ignore();
            getline(cin, task);
            todoList.push_back(task);
            cout << "Task added!" << endl;
        } else if (choice == 2) {
            if (!todoList.empty()) {
                displayTodoList(todoList);
                cout << "Enter the task number to remove: ";
                int taskNumber;
                cin >> taskNumber;
                if (taskNumber >= 1 && taskNumber <= todoList.size()) {
                    todoList.erase(todoList.begin() + taskNumber - 1);
                    cout << "Task removed!" << endl;
                } else {
                    cout << "Invalid task number." << endl;
                }
            } else {
                cout << "The to-do list is empty." << endl;
            }
        } else if (choice == 3) {
            if (!todoList.empty()) {
                displayTodoList(todoList);
            } else {
                cout << "The to-do list is empty." << endl;
            }
        } else if (choice == 4) {
            break; 
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    cout << "Goodbye!" << endl;

    return 0;
}