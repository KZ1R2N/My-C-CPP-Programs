// C program to illustrate BEEP() function

#include <stdio.h>
#include "windows.h"
#include <stdlib.h>

// Driver Code
int main()
{

    // Function that beeps a sound of
    // frequency 750 for 0.8 sec
    BEEP(750, 800);

    getchar();
    return 0;
}
