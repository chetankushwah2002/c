void main()
{
int i,j,n;
clrscr();
printf("enter a no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 for(j=1;j<=n-i+1;j++)
 {
 printf(" *");
 }
 printf("\n");
 for(j=1;j<=i;j++)
 printf(" ");
 }
 getch();
 }