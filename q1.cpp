#include <iostream>
#include <math.h>
#include <string>

int main() {
    // declaring the variables for days and seconds in a day
    int days;
    int secsInaDay = 86400;
// Asking a user to enter the days who's seconds they want to know and storing the value in the variable days
    std ::cout <<"Enter the number of days:";
    std ::cin >> days;
    //declaring a variable to store the product of days and seconds in a day
    int product = days * secsInaDay;
// Outputting the result to the user
    std ::cout <<"The number of seconds in " << days << " days is " << product << std ::endl;
    return 0;
}