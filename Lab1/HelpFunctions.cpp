#include <iostream>
#include <cmath>
#include "HelpFunctions.h"


double input (double &a, double &b, double &c){
    std::cout<<"Enter the numbers a, b and c in the format: \"ax^2 +bx + c\": ";
    std::cin >>a >> b >> c;
}

double discriminant(double a,double b,double c){
    double d;
    d = (b*b) - (4 * a * c);
    return d;
}

void solution(double a,double b,double c){
    double d = discriminant(a,b,c);
    if (d < 0) std::cout<<"No roots"<<std::endl;
    if (d == 0){
        double x = -b/(2*a);
        std::cout<<"Only one root: x = "<<x<<std::endl;
    }
    if (d >0) {
        double x1 = (-b-sqrt(d))/(2*a);
        double x2 = (-b+sqrt(d))/(2*a);
        std::cout<<"Your roots: x1 = "<<x1<<" and x2 = "<<x2<<std::endl;
    }

}
