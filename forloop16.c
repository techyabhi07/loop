

#include<stdio.h>

int main()
{
    int i, num, count_p=0, count_n=0, count_z=0;
    int arr[100];
    
    printf("Enter Numbers: ");
    scanf("%d", &num);



    for(i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<num;i++)
    {
      
        if(arr[i]>0)
        {
            count_p++;
        }
        else if(arr[i]<0)
        {
            count_n++;
        }
        


    }




    printf("Positive Numbers: %d\n", count_p);
    printf("Negative Numbers: %d\n", count_n);
    printf("zero numbers:%d\n",num-count_p-count_n);
}

