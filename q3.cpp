#include <iostream>
#include <string>
#include <math.h>
//inform compiler of functions existance before they are called in main
double perimeter(double length);
double area(double length);

int main() {
    double length;
    std ::cout <<"Enter the length of the square:"; // ask user for length of square and store in variable length
    std ::cin >> length;
    std ::cout <<"The perimeter of the square is: " << perimeter(length) << std ::endl;
   std ::cout <<"The area of the square is: " << area(length) << std ::endl;
    return 0;

}
//Function to calculate the perimeter of a square given the length of one side
double perimeter(double length) {
    return 4* (length);
}
//Function to calculate the area of a square given the length of one side
double area(double length) {
    return pow(length, 2);
}