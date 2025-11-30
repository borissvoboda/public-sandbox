// in ubuntu sudo apt install gcc
// to compile run gcc <filename>

#include <stdio.h>

int main(void) {

    // declaration
    // int length, width;
    // float speed;
    // double volume;

    //good to initiate w/ some known values
    int length = 0;
    int width = 5;
    float speed = 20.5f; //without f, the compiler would consider it a double.
    double volume = 2.5;

    printf("Hell!\n");
    return 0;
}