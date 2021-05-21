#include <stdio.h>
int main()
{
   char name[50], name1 [50];
   int i, e, eng, math, sci, avg, tot, eng1, math1, sci1, avg1, tot1;

   FILE *fptr,*fptr1;
   fptr = (fopen("C:\student.txt", "a"));
   fptr1 = (fopen("C:\\student1.txt", "a"));
   if(fptr,fptr1 == NULL)
   {
       printf("Error!");
       return(1);
   }
   
    {
	 
	  printf("\nName: ");
      scanf("%s", name);
   
      printf("Math: ");
      scanf("%d", &math);
      printf("Sci: ");
      scanf("%d", &sci);
      printf("Eng: ");
      scanf("%d", &eng);
      
      tot = eng+math+sci;
      avg = tot/3;
  
      printf("\nName: ");
      scanf("%s", name1);

      printf("Math: ");
      scanf("%d", &math1);
      printf("Sci: ");
      scanf("%d", &sci1);
      printf("Eng: ");
      scanf("%d", &eng1);
 
      tot1 = eng1+math1+sci1;
      avg1 = tot1/3;

      fprintf(fptr,"\nName: %s \n", name);
      fprintf(fptr,"Eng: %i \n", eng);
      fprintf(fptr,"Math: %i \n", math);
      fprintf(fptr,"Sci: %i \n", sci);
      fprintf(fptr,"\n\nTotal Grade  %i \n", tot);
      fprintf(fptr,"Total Average  %i \n", avg);
      
	  fprintf(fptr1,"\nName: %s \n", name1);
      fprintf(fptr1,"Eng: %i \n", eng1);
      fprintf(fptr1,"Math: %i \n", math1);
      fprintf(fptr1,"Sci: %i \n", sci1);
      fprintf(fptr1,"\n\nTotal Grade  %i \n", tot1);
      fprintf(fptr1,"Total Average  %i \n", avg1);
   }

   fclose(fptr);
   return 0;
} 