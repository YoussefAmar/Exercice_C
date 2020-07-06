#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

  int valeur,produit=1,cpt=0;

  printf("Entrez une valeur : ");
  scanf("%d",&valeur);

 if(valeur==0)
 {
   printf("0 n'est pas une puissance de 2");
 }

while(produit<valeur)

{

    produit = produit*2;

    cpt++;

}

if(produit!=valeur)

{
    printf("Ce nombre n'est pas puissance de 2");
}
else
{
 printf("\n%d = 2^%d",valeur,cpt);
 }

 getch();

 return 0;

}

