// champlain-sdev-340-2024-week-3-assignment-1-manager.h

#pragma once
#include "champlain-sdev-340-2024-week-3-assignment-1-employee-class.h"

// manager class
class Manager : public Employee
{
    private:
        // declare variables
        std::string title;
        std::string department;

    public:
        // constructor
        Manager(
            std::string nameFirst, std::string nameLast, int efficiency,
            double salary, std::vector<std::string> notes,
            std::string title, std::string department
        );

        // destructor
        ~Manager();

        // getters
        std::string getTitle() const;
        std::string getDepartment() const;

        // print values
        void printValues();
};