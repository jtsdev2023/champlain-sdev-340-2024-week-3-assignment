// champlain-sdev-340-2024-week-3-assignment-1-class.cpp

#include "../include/champlain-sdev-340-2024-week-3-assignment-1-class.h"


// constructor
Employee::Employee(
    std::string nameFirst, std::string nameLast, int efficiency,
    double salary, const std::vector<std::string>& notes
) : nameFirst(nameFirst), nameLast(nameLast), efficiency(efficiency),
    salary(salary), notes(notes) {};

// deconstructor
Employee::~Employee() {};

// getters
std::string Employee::getNameFirst() const { return nameFirst; };
std::string Employee::getNameLast() const { return nameLast; };
int Employee::getEfficiency() const { return efficiency; };
double Employee::getSalary() const { return salary; };
// vector from STL
const std::vector<std::string>& Employee::getNotes() const { return notes; };

// this is all a result from web search on how to error check efficency rating
void Employee::setEfficiencyRating(int efficiency) {
    if (efficiency < 1 || efficiency > 5) {
        throw std::out_of_range("Employee efficiency rating must be between 1 and 5");
    };

    this->efficiency = efficiency;
};

// print values
void Employee::printValues() {
    // check that efficiency rating is between 1 and 5
    setEfficiencyRating(efficiency);
    std::cout << std::endl;
    std::cout << "Employee Details" << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "First Name: " << nameFirst << std::endl;
    std::cout << "Last Name: " << nameLast << std::endl;
    std::cout << "Efficiency Rating: " << efficiency << std::endl;
    // could not figure out how to implement Python-style string formatting in c++
    // wanted to write salary using dollar sign and commas
    std::cout << "Salary: $" << salary << std::endl;
    std::cout << std::endl;
};