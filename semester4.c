#include<stdio.h>

int main()
{
    int a=5;
    int b=10;

    {
        int a=2;a++;b++;}

        printf("%d%d",a,b);
    
    
 return 0;
}