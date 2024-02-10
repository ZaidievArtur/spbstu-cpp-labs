#include <iostream>
#include <cmath>

double input (double &a, double &b, double &c){
    std::cout<<"Enter the numbers a, b and c in the format: \"ax^2 +bx + c\": ";
    std::cin >>a >> b >> c;
}

int main()
{
    double a,b,c;
    input(a,b,c);
    std::cout<<a<<b<<c;
}
