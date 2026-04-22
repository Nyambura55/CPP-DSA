#include <iostream>
#include <string>
// condition to ensure the user input is a letter and whether it is uppercase or lowercase
void letters(char letter) {
if (letter >= 'a' && letter <= 'z') {
    std ::cout <<"The letter is lowercase." << std ::endl;
}
else if (letter >= 'A' && letter <= 'Z') {
    std ::cout <<"The letter is uppercase." << std ::endl;
}
else {
    std ::cout <<"The character entered is not a letter." << std ::endl;
}
}

int main () {
    char letter;
    std ::cout <<"Enter a letter:";
    std ::cin >> letter;
    letters(letter);
}
