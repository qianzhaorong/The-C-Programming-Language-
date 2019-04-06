#include <stdio.h>

int max;

int main(){
    
    extern int max;
    
    max = 1;
    printf("%d\n", max);
}
