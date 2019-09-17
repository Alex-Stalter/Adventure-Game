#include <iostream>
#include "Run.h"

int main() {
    Run* x = new Run(5);
    x->calculate();
    std::cout <<x->answer()<< std::endl;
    return 0;
}