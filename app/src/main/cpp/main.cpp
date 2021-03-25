#include <iostream>
#include "test.h"
extern int lineno;

void testprint(Test);

int main () {
    std::cout << "Using a Test object ourselves: ";
    Test t;
    t.print();

    std::cout << "Calling generated source function: ";
    testprint(t);

    std::cout << "Printing extern Lineno=" << lineno << std::endl;
    return 0;
}
