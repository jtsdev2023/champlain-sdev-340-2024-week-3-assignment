// champlain-sdev-340-2024-week-3-assignment-1-class.h

#pragma once

#include <string>
#include <vector>
#include <iostream>


class Employee
{
    private:
        // declare variables
        std::string nameFirst; std::string nameLast; int efficiency;
        double salary; std::vector<std::string> notes;

    public:
        // constructor
        Employee(
            std::string nameFirst, std::string nameLast, int efficiency,
            double salary, const std::vector<std::string>& notes
        );

        // destructor
        ~Employee();

        // getters
        std::string getNameFirst() const;
        std::string getNameLast() const;
        virtual int getEfficiency() const;
        virtual double getSalary() const;
        const std::vector<std::string>& getNotes() const;

        // print values
        void printValues() const;
};

