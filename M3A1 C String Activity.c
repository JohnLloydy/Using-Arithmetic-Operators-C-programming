#include <stdio.h>
#define SIZE 10 
int main()
{
    char string1[150];
    int  vowels, consonant, i;
   printf("Input a sentence: ");
   gets(string1);  
   i=0;
    while(string1[i]!='\0')
    {
        if(string1[i]=='a' ||string1[i]=='e' ||string1[i]=='i' ||string1[i]=='o' ||string1[i]=='u')
            string1[i]=string1[i]-32;
        i++;
    }
    printf("String Converted:");
    puts(string1);
    printf("\nString Length:%d",i);
    
}