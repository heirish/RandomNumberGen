#include <time.h>
#include <stdlib.h>
#include "numberGenerator.hpp"

std::set<int> NumberGenerator::getNumbers(int count, int rangeLeft, int rangeRight)
{
    std::set<int> retSet;
    srand(time(NULL));
    for(int i=0; retSet.size() < count; i++) {
        retSet.insert(rangeLeft + rand() % (rangeRight - rangeLeft +1));
    } 
    return retSet;
}
