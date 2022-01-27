#include<stdio.h>

int main(){
   
    int num1, num2;
  
  printf("Enter first number: ");
  scanf("%d", &num1);
  
  printf("Enter second number: ");
  scanf("%d", &num2);
  
  


    int startNum=num1;
    

    while(1){

        printf("%d\n",startNum);
        startNum += 1;

        if (startNum == num2+1){ 
            break;
        }



    }
return 0;
}