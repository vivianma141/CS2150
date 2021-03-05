// Vivian Ma, vm8ufh, 3/2, testPostfixCalc.cpp


#include <iostream>
#include <cstdlib>
#include <string>
#include <stack>
#include "postfixCalculator.h"

class postfixCalculator;

int main ()
{
    postfixCalculator p;
    string s;

    while (cin >> s)
    {

      if (s == "-" && s.size() == 1)
       {
	  
            p.sub();
        }
        else if (s == "+")
        {
            p.add();
        }
	else if (s == "/")
        {
            p.div();
        }
	else if (s == "*")
        {
            p.mult();
        }
	else if (s == "~")
        {
	    p.neg();
        }
        else
        {
	  p.pushNum(stol(s));
        }
        
    }
    cout << p.topValue() << endl;

    return 0;
}
