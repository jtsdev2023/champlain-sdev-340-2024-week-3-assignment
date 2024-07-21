// champlain-sdev-340-2024-week-3-assignment-1-main.cpp


#include "champlain-sdev-340-2024-week-3-assignment-1-class.h"


int main() {
    // create an employee object
    Employee employee(
        "John", "Doe", 100,
        100000, {"lorem ipsum 1", "lorem ipsum 2", "lorem ipsum 3"}
    );

    // print values
    employee.printValues();

    return 0;
};
