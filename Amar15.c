#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Encodervecteur(int*, int);
void Affichervecteur(int*,int);
int ProduitVecteurs (int*,int*,int);

int main()
{
    int tab1[10],cpt=0,tab2[10];

    Encodervecteur(&tab1[cpt],cpt);
    Affichervecteur(&tab1[cpt],cpt);
    Encodervecteur(&tab2[cpt],cpt);
    Affichervecteur(&tab2[cpt],cpt);
    printf("Le produit scalaire vaut %d",ProduitVecteurs(&tab1[cpt],&tab2[cpt],cpt));

    getch();

    return 0;
}

void Encodervecteur(int*tab,int cpt)
{

    for(cpt=0;cpt<10;cpt++)
    {
        printf("Encoder l'elements %d : ",cpt+1);
        scanf("%d",&tab[cpt]);
    }

    printf("\n");

    return;
}

void Affichervecteur(int*tab,int cpt)

{
    for(cpt=0;cpt<10;cpt++)
    {
       printf("Valeur : %d en %d \n",tab[cpt],cpt+1);

    }

    printf("\n");

    return;
}

int ProduitVecteurs(int*x,int*y,int cpt)

{
    int scalaire;

    for(cpt=0;cpt<10;cpt++)

    {
        scalaire+=x[cpt]*y[cpt];
    }

    return scalaire;
}
