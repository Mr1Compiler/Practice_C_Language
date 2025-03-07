#include <stdio.h>

int main()
{
    printf("hi");


    int x = 12;
    int *n = &x;


    printf("\n%p\n%d\n", n, *n);

    
    return 0;
}
