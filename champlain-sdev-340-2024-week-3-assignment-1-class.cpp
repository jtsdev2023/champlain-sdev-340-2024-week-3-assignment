// champlain-sdev-340-2024-week-3-assignment-1-class.cpp

#include "champlain-sdev-340-2024-week-3-assignment-1-class.h"


// constructor
Employee::Employee(
    std::string nameFirst, std::string nameLast, int efficiency,
    double salary, const std::vector<std::string>& notes
) : nameFirst(nameFirst), nameLast(nameLast), efficiency(efficiency),
    salary(salary), notes(notes) {}

// deconstructor
Employee::~Employee() {}

// getters
std::string Employee::getNameFirst() const { return nameFirst; }
std::string Employee::getNameLast() const { return nameLast; }
int Employee::getEfficiency() const { return efficiency; }
double Employee::getSalary() const { return salary; }
const std::vector<std::string>& Employee::getNotes() const { return notes; }

// print values
void Employee::printValues() const {
    std::cout << "First Name: " << nameFirst << std::endl;
    std::cout << "Last Name: " << nameLast << std::endl;
    std::cout << "Efficiency Rating: " << efficiency << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Employee Notes:" << std::endl;
    for (std::string note : notes) {
        std::cout << note << "." << std::endl;
    }
    std::cout << std::endl;
}