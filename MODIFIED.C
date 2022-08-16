//Multiplexer//
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int m,n,a[100],b,c=0,i,binary,base=1,rem;
 clrscr();
 printf("***** 2^n:1 MULTIPLEXER *****\n");
 //In 2^n:1 Multiplexer there are n select lines//
 printf("\nEnter the no. of select lines(n<=4):");
 scanf("%d",&n);
 //2^n Input values for a 2^n:1 Multiplexer//
 m=pow(2,n);
 printf("\nEnter %d input values:",m);
 for(i=0;i<m;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nEnter %d select lines as one binary number:",n);
 scanf("%d",&b);
 //Conversion of binary to decimal//
 binary = b;
 while(b>0)
 {
  rem=b%10;
  c = c + rem*base;
  b = b/10;
  base=base*2;
 }
 printf("\nThe decimal value of %d is %d",binary,c);
 //Printing the required Output//
 printf("\nThe required output is %d",a[c]);
 getch();
}
