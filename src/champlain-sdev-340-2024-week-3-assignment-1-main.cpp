// champlain-sdev-340-2024-week-3-assignment-1-main.cpp


#include "../include/champlain-sdev-340-2024-week-3-assignment-1-class.h"


int main() {
    // test 1
    Employee employee1(
        "John", "Doe", 1,
        100000.00, {"lorem ipsum 1", "lorem ipsum 2", "lorem ipsum 3"}
    );

    // print values
    employee1.printValues();

    // test 2
    Employee employee2(
        "Jane", "Doe", 5,
        250000, {"lorem ipsum 1",}
    );

    // print values
    employee2.printValues();

    // test 3
    // pass invalid efficiency rating
    Employee employee3(
        "Agent", "47", 15,
        40000.00, {"lorem ipsum 1", "lorem ipsum 2",}
    );

    // print values
    employee3.printValues();

    return 0;
};
