#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  int i,j,p;

printf("   x");

for(j=1;j<=10;j++)

{
    printf("%4.d",j);

}

printf("\n");

for(i=1;i<=10;i++)
{

    printf("%4.d",i);

    for(j=1;j<=10;j++)
{


    p = j*i;

    printf("%4.d",p);

}

printf("\n");

}

    getch();

    return 0;
}

