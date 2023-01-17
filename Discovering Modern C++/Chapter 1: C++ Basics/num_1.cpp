#include <iostream>

const double pi = 3.1415;

double circle_area(double radius);

double circle_perimeter(double radius);

void print_circle(double radius);

int main()
{
    double radius_1 = 1.0;
    double radius_2 = 5.4;
    print_circle(radius_1);
    print_circle(radius_2);
}

double circle_area(double radius)
{
    return pi * radius * radius;
}

double circle_perimeter(double radius)
{
    return 2 * pi * radius;
}

void print_circle(double radius)
{
    std::cout << "Circle of radius " << radius
              << " has perimeter " << circle_perimeter(radius)
              << " and area " << circle_area(radius) << std::endl;
}