// champlain-sdev-340-2024-week-3-assignment-1-manager.cpp

#include "../include/champlain-sdev-340-2024-week-3-assignment-1-manager-class.h"


// manager class constructor
Manager::Manager(
    std::string nameFirst, std::string nameLast, int efficiency,
    double salary, std::vector<std::string> notes,
    std::string title, std::string department
) : Employee(nameFirst, nameLast, efficiency, salary, notes),
    title(title), department(department) {};

// manager class deconstructor
Manager::~Manager() {};

// getters
std::string Manager::getTitle() const { return title; };
std::string Manager::getDepartment() const { return department; };

// print values
void Manager::printValues() {
    setEfficiencyRating(getEfficiency());
    std::cout << std::endl;
    Employee::printValues();
    std::cout << "Title: " << title << std::endl;
    std::cout << "Department: " << department << std::endl;
    std::cout << std::endl;
};
