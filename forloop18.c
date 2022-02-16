#include<stdio.h>

int main()
{
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    printf("the factorial of %d is %d",number,fact(number));
    return 0;


}

int fact(int n)


{
   if(n>=1)
      return n*fact(n-1);
      else 
      return 1;
    

}
    
