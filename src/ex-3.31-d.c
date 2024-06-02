/** Header files */
#include <stdio.h>

/** Exercise 3.31 - d */
int main(void) {
    int x = 5;
    int y = 7;

    if (x == 5)
        puts("#####");

    if (y == 8)
        puts("@@@@@");

    else
    {
        puts("$$$$$");
        puts("&&&&&");   
    }

    return 0;
}