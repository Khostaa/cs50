#include <stdio.h>

int main()
{
    int list[3];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    for(int i=0; i<4 ; i++)
    {
        printf("%d \n", list[i]);
    }
    
    return 0;
}