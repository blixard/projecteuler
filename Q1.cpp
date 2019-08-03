//Shubhaprasa Padhy
//regd no : 19410121001
//phone no : 9040370706
//multiples of 3 and 5
//Find the sum of all the multiples of 3 or 5 below 1000
#include<iostream.h>
#include<conio.h>
void main ()
{clrscr();
long int sum=0;
for(int i=1;i<=1000;i++)
{if(i%3==0||i%5==0)
{sum=sum+i;}}
cout<<sum;
getch();}
