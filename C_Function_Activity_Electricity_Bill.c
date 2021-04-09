#include <stdio.h>
int main()
{  
   int id, unit;
   float chg, surchg=0, gramt,bill;

   printf("Input Customer ID :");
   scanf("%d",&id);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   if (unit <199 )
	chg = 1.50;
   else	if (unit>250 && unit<400)
		chg = 1.60;
	else if (unit>450 && unit<600)
			chg = 1.85;
		else 
			chg = 2.00;
   gramt = unit*chg;
   if (gramt>400)
	surchg = gramt*10/100.0;
   bill = gramt+surchg;
   if (bill  < 100)
	bill =100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID#                        :%d\n",id);
   printf("unit Consumed                       :%d\n",unit);
   printf("Unit Charges @P. %.2f  per unit     :%.2f\n",chg,gramt);
   printf("Surchage Amount                     :%.2f\n",surchg);
   printf("Total Costumer Bill                 :%8.2f\n",bill);

}