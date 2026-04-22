#include <iostream>
#include <string>
#include <math.h>

int main() {
    // declaring the variables for radius and pi
    double radius;
    double pi = 3.14159;
    // Asking a user to enter the radius of the sphere and storing the value in the variable radius
    std ::cout <<"Enter the radius of the sphere:";
    std ::cin >> radius;
    //declaring a variable to store the volume of the sphere
    double volume = (4.0/3.0) * pi * pow(radius, 3);
    // Outputting the result to the user
    std ::cout <<"The volume of the sphere with radius " << radius << " is " << volume << std ::endl;
    return 0;
}