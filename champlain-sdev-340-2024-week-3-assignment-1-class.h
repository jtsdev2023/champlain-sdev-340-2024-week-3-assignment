// champlain-sdev-340-2024-week-3-assignment-1-class.h

#pragma once

#include <format>
#include <locale>
#include <string>
#include <vector>
#include <iomanip>
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
        // web searched the heck out of this one to come up with how to do this
        // try... catch blocks and error handling seem easier in Python for sure
        // feel like the assignment is asking for error handling
        // this is easy to implement without error checking
        void setEfficiencyRating(int efficiency);
        virtual int getEfficiency() const;
        virtual double getSalary() const;
        const std::vector<std::string>& getNotes() const;

        // print values
        void printValues();
};

