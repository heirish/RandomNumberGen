#ifndef __NUMBER_GENERATOR_H__
#define __NUMBER_GENERATOR_H__

#include <set>

class NumberGenerator {
public:
    static std::set<int> getNumbers(int count, int rangeLeft, int rangeRight);    
};
#endif //__NUMBER_GENERATOR_H__
