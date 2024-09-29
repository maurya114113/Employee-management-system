#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
public:
    string name;

    Employee(string n) : name(n) {}
};

void addEmployee(vector<Employee>& employees, string name) {
    employees.push_back(Employee(name));
    cout << "Employee " << name << " added successfully." << endl;
}

void showEmployees(const vector<Employee>& employees) {
    if (employees.empty()) {
        cout << "No employees to show." << endl;
        return;
    }
    cout << "List of employees:" << endl;
    for (const auto& emp : employees) {
        cout << emp.name << endl;
    }
}

int main() {
    vector<Employee> employees;
    int choice;
    string name;

    do {
        cout << "\nMenu:\n1. Add Employee\n2. Show Employees\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter employee name: ";
                cin >> name;
                addEmployee(employees, name);
                break;
            case 2:
                showEmployees(employees);
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
