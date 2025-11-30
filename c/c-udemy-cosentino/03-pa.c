// in ubuntu sudo apt install gcc
// to compile run gcc <filename>

#include <stdio.h>

int main(void) {

    // int i = 10;
    // print("The address of i is: %p\n", &i); // p for pointer & for address;
    // printf("The value of i is: %d");

    // Pointers
    // point to memory loc.
    int i = 10;
    int *p = &i;

    printf("The address of i is %p\n" ,p);
    printf("The value of i is %d\n" ,*p);  // dereferencing - I am returning value
    printf("The value of i is %d\n" ,i);  

/*
Why pointers?
Memory manip. 



*/





    return 0;
}