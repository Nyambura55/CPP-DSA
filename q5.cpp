#include <iostream>
#include <string>
#include <math.h>

int main() {
    //declaration of variables x and y
    double x =  0;
    double y = 20;
    //The repeating loop.
    do{
       y = y - 4;
       x = x + (2.0/y);
    } while (y>6); //Condition for the loop to continue running

    // Outputting final value of x to user
    std ::cout <<"The final value of x is: " << x << std ::endl;
    return 0;
}