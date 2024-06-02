/** Header files */
#include <stdio.h>

/** Exercise 3.31 - a */
int main(void) {
    int x = 5;
    int y = 8;

    if (y == 8)
        puts("@@@@@");
    
    if (x == 5)
        puts("$$$$$");
    
    else
        puts("#####");
    
    puts("&&&&&");

    return 0;
}