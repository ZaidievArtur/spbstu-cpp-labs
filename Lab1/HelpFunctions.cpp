#include <iostream>
#include <cmath>
#include <vector>
#include "HelpFunctions.h"


void input (double &a, double &b, double &c){
    std::cout<<"Enter the numbers a, b and c in the format: \"ax^2 +bx + c\": ";
    std::cin >>a >> b >> c;
}

std::vector<double> solution(double a,double b,double c,std::vector<double> res){
    double discriminant = (b*b) - (4.0 * a * c);
    if (discriminant == 0){
        double x = -b/(2*a);
        res.push_back(x);
    }
    if (discriminant >0) {
        double x1 = (-b-sqrt(discriminant))/(2.0 * a);
        double x2 = (-b+sqrt(discriminant))/(2.0 * a);
        res.push_back(x1);
        res.push_back(x2);
    }
    return res;
}
void print(std::vector<double> roots){
    if (roots.empty()) std::cout<<"No roots"<<std::endl;
    else if (roots.size() == 1) std::cout<<"Only one root: x = "<<roots[0]<<std::endl;
    else if (roots.size() == 2) std::cout<<"Your roots: x1 = "<<roots[0]<<" and x2 = "<<roots[1]<<std::endl;
}
