// Vivian Ma, vm8ufh, 3/2, postfixCalculator.h

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <iostream>
#include <stack>
#include <cstdlib>
#include "postfixCalculator.h"
using namespace std;

class postfixCalculator{
public:
    postfixCalculator();
    
    void add();
    void sub();
    void div();
    void mult();
    void neg();
    void pushNum(int value);
    void removeTop();
    int topValue(); // returns the top value

private:
    stack<int> exp;


};

#endif 


