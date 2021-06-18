#include <stdio.h>
#include <stdlib.h>

int main ()

{
  FILE *text;

  int a,b;
  char str[100]; char str1; char fname[100];



    //INPUT//
    printf("\n (Write a Program that Appended Multiple Lines in a Text File) \n\n");
	printf( " Input the file location : "); //Program Asks the user how many lines to be appended//
	scanf("%s",fname);

    text = fopen(fname, "a");

   if(text==NULL)

    {
      printf(" Error to open the file!");
      return (1);
    }




    printf( "\n Input how many lines to be appended: "); //Program Asks the user how many lines to be appended//
    scanf("%d", &b);



    //TEXT//
    for (a = 0 ; a < b+1 ; a++)

    {
    fgets(str, sizeof str, stdin);
    fputs(str, text);
    }

    fclose (text);



    //OUTPUT//
    text = fopen (fname, "r"); //<--- Reads the "Inside of the text.txt"//
    printf("\n Inside of the '%s' is: ",fname);

    str1 = fgetc(text);



    //END//
    while

        (str1 != EOF)
    {
        printf ("%c", str1);
        str1 = fgetc(text);
    }

        fclose (text);



    return 0;

}