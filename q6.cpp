#include <iostream>
#include <string>
#include <math.h>

int main()  {
    double values[5];
    double sum = 0;
    double average;
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter value " << i + 1 << ": "; //To help user keep track of number of inputs
        std ::cin >> values[i]; //output user values
        sum += values[i]; // accumulate inputs
    }
    average = sum / 5;

    std ::cout <<"The average of the values is: " << average << std ::endl;
    return 0;

}