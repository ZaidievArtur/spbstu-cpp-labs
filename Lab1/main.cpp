#include <iostream>
#include <cmath>

double input (double &a, double &b, double &c){
    std::cout<<"Enter the numbers a, b and c in the format: \"ax^2 +bx + c\": ";
    std::cin >>a >> b >> c;
}

double discriminant(double a,double b,double c){
    double d;
    d = (b*b) - (4 * a * c);
    return d;
}

int main()
{
    double a,b,c;
    input(a,b,c);

    double d = discriminant(a, b, c);
    std::cout<<"Your dis = "<<d;
}
