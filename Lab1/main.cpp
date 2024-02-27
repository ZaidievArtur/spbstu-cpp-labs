#include <iostream>
#include <vector>
#include "HelpFunctions.h"


int main()
{
    double a,b,c;
    std::vector<double> res;

    input(a,b,c);
    res = solution(a,b,c,res);
    print(res);
}
