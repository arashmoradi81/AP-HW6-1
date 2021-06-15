#include <iostream>
#include "Pet.h"

Pet::Pet():Animal() {}

void Pet::fall() {
    std::cout << " $$$$ Domestic Animal fell $$$$" << std::endl;
}
