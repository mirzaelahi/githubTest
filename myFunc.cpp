#include <stdio.h>

int myFunc(int x){
    x = x + x;
    x -= x;
    return x*x;
}

