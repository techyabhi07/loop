// enter start number
// 9
// enter end number
// 19
// 9 10 11 12 13 14 15 16 17 18 19

#include<stdio.h>

int main(){
    int number; //declaration
    printf("Enter a number:");
    scanf("%d", &number);

    int startNum = 0;//0
    

    // while(1){

    //     printf("%d ", startNum);
    //     startNum += 1;

    //     if (startNum == number){
    //         break;
    //     }

    // }

    for (int i=0; i<number; i++){

         printf("%d ", startNum);
         startNum++;

    }

    


    return 0;
}