#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
     int A, B, somme, diff, produit, quotient;

    printf("Exercice 2 : \n\n");

    printf("Valeur de A :\n");

    scanf("%d",&A);

    printf("Valeur de B :\n");

    scanf("%d",&B);

    somme = A+B;

    printf("\n%d + %d = %d",A,B,somme);

    diff = A-B;

    printf("\n%d - %d = %d",A,B,diff);

    produit= A*B;

    printf("\n%d x %d = %d",A,B,produit);

    quotient = A / B;

    printf("\n%d / %d = %d",A,B,quotient);

    getch();

    return 0;
}
