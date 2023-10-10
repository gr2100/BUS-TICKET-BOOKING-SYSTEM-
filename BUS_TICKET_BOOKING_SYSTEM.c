#include <conio.h>
#include <math.h>
#include <stdio.h>
int
main () 
{
 
int ta, tc, choice;
 
int r;
 
int c, C;
 
printf
 
("####################################################################################
####################################\n");
printf("GAYATHRI RA2111029010033") 
printf (" \t\t\t\tWELCOME !!!\n");
 
printf (" \t\t\tBus Ticket Booking System\n");
 
printf (" \t\t\tSTOPING TO STOPING CHILDREN ADULT\n");
 
printf
 (" \t\t\t (Per Person-CHILDREN) (Per Person-ADULT) (Train departure Timings)\n");
 
printf
 (" \t\t\tChennai-Banglore(route 1)-- Rs.100 Rs.200 16:50\n");
 
printf
 (" \t\t\tChennai-kochi(route 2) -- Rs.90 Rs.150 20.35\n");
 
printf
 (" \t\t\tChennai-Hyderabad(route 3)-- Rs.120 Rs.300 16.10\n");
 
printf
 (" \t\t\tBanglore-Chennai(route 4)-- Rs.100 Rs.200 12.45\n");
 
printf
 (" \t\t\tkochi-Chennai (route 5)-- Rs.90 Rs.150 22.30\n");
 
printf
 (" \t\t\tHyderabad-Chennai(route 6)-- Rs.120 Rs.300 18.20\n");
 
printf
 
("####################################################################################
###################################\n\n");
 
for (int i = 1; i <= 10; i++)
 
 {
 
printf ("\nSelect Your Choice\n");
 
printf ("1.Adult+Children");
 
printf ("\n2.Adult");
 
printf ("\nyour choice :");
 
scanf ("%d", &choice);
 
switch (choice)
{
case 1:
 
printf ("Enter Route Number ");
 
scanf ("%d", &r);
 
printf ("\nHow many seats you want for adult : ");
 
scanf ("%d", &ta);
 
printf ("\nHow many seats for children :");
 
scanf ("%d", &tc);
 
if (r == 1)
 
 {
 
c = tc * 100;
 
C = ta * 200;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Children=RS.%d", tc, c);
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", c + C);
 
break;
 
}
 
 else if (r == 2)
 
 {
 
c = tc * 90;
 
C = ta * 150;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Children=RS.%d", tc, c);
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", c + C);
 
break;
 
}
 
 else if (r == 3)
 
 {
 
c = tc * 120;
 
C = ta * 300;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Children=RS.%d", tc, c);
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", c + C);
 
break;
 
}
 
 else if (r == 4)
 
 {
 
c = tc * 100;
 
C = ta * 200;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Children=RS.%d", tc, c);
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", c + C);
 
break;
 
}
 
 else if (r == 5)
 
 {
 
c = tc * 90;
 
C = ta * 150;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Children=RS.%d", tc, c);
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", c + C);
 
break;
 
}
 
 else if (r == 6)
 
 {
 
c = tc * 120;
 
C = ta * 300;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Children=RS.%d", tc, c);
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", c + C);
 
break;
 
}
case 2:
 
printf ("Enter Route Number ");
 
scanf ("%d", &r);
 
printf ("\nHow many seats you want for adult : ");
 
scanf ("%d", &ta);
 
if (r == 1)
 
 {
 
C = ta * 200;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =Rs.%d", C);
 
break;
 
}
 
 else if (r == 2)
 
 {
 
C = ta * 150;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", C);
 
break;
 
}
 
 else if (r == 3)
 
 {
 
c = tc * 120;
 
C = ta * 500;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =%d", C);
 
break;
 
}
 
if (r == 4)
 
 {
 
C = ta * 200;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =Rs.%d", C);
 
break;
 
}
 
if (r == 5)
 
 {
 
C = ta * 150;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =Rs.%d", C);
 
break;
 
}
 
if (r == 6)
 
 {
 
C = ta * 300;
 
printf ("Thank You for using of Ticket Booking System!");
 
printf ("\nThe Bill To Be paid is");
 
printf ("\nCost for %d Adult =Rs.%d", ta, C);
 
printf ("\nTotal Cost =Rs.%d", C);
 
break;
 
}
 
getch ();
}
 
}}