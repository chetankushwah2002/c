#include<stdio.h>
#include<conio.h>
int main ()
{
int n;
clrscr();
do
{
printf("enter number : ");
scanf("%d", &n);
printf("%d \n", n);
if(n % 7 == 0) //multiple of 7
{
break;
}
}
while(1);
printf("thank you \n");
getch();
return 0;
}

