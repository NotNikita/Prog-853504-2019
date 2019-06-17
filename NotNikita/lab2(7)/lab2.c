#include <stdio.h>


int main()
{
       printf("Welcome to Priorbank\n");
       int cycle=1;
       int choice=0;
       float todayDoll= 0.4809;
       float todayEuro= 0.4301;
       float todayRubl= 31.0501;
       while(cycle)
          {
          printf("1- Enter BYN\n2- Show currency table\n3- Todays Profit\n4- Contacts\n0- Exit\n");
	  scanf("%d", &choice);
	  
	  switch(choice)
	  {
	   case 1:
		   {
		    printf("\e[1;1H\e[2J");
	                
		    float input;
		    float output=0;
		    printf("Enter:   ");
		    scanf("%f", &input);
                    printf("\n\n Dollar = %.3f\n\n Euro = %.3f\n\n Rub = %.3f\n\n", input*todayDoll, input*todayEuro, input*todayRubl);

		   };break;
    	   
	   case 2: 
		   {
		    printf("\e[1;1H\e[2J");

		    printf("\nB/S\t BUY\tSELL\n");
		    printf("-------------------------------------------------\n");
		    printf("USD\t%.3f\t %.3f\n\n", 1/todayDoll, 1/todayDoll +0.05);
		    printf("EUR\t%.3f\t %.3f\n\n", 1/todayEuro, 1/todayEuro +0.007);
		    printf("RUB\t%.3f\t %.3f\n\n\n", 1/todayRubl*100, 1/todayRubl*100 +0.06);
		   };break;
	   case 3:
		   {
	   	    printf("\e[1;1H\e[2J");

		    printf("\nProfir list:\n\nDollar = 0.05\nEuro = 0.007\nRub = 0.06(for 100)\n\nThe most profit from $$$\n\n");
		   };break;
	   case 4:
		   {
	   	    printf("\e[1;1H\e[2J");

		    printf("\nCreated 2019;\nMark 10 is enough\n\n");
		   };break;
 	   case 0: cycle =0;break;
	  }
          
        }	  
	  printf("\e[1;1H\e[2J");
	 

       return 0;       
}
