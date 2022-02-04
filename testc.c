
#include<stdio.h>

int main()
{
 
    char s[1000],c;
	int count=0;  
  
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    count=check(s,c);
    printf("character '%c' occurs %d times \n ",c,count);
 
	return 0;
 
     
     
}
