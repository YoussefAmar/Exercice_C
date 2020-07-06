#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void CreerMatrice(int[3][3],int,int);
void AfficherMatrice(int[3][3],int,int);
void SommeMatrices(int[3][3],int[3][3],int,int,int[3][3]);


int main()
{
    int tab1[3][3],tab2[3][3],col=0,lig=0,matrice3[3][3];

srand((time(NULL)));
printf("\n1er matrice : \n");
CreerMatrice(tab1,lig,col);
AfficherMatrice(tab1,lig,col);
printf("\n2eme matrice : \n");
CreerMatrice(tab2,lig,col);
AfficherMatrice(tab2,lig,col);
printf("\nSomme des matrices : \n");
SommeMatrices(tab1,tab2,lig,col,matrice3);
AfficherMatrice(matrice3,lig,col);

getch();

return 0;

}

void CreerMatrice(int matrice[3][3],int ligne,int colonne)

{
   for(ligne=0;ligne<3;ligne++)

   {
       for(colonne=0;colonne<3;colonne++)
       {

         matrice[ligne][colonne]=( 10-rand()%21);


       }

       printf("\n");

   }

   return;
}

void AfficherMatrice(int matrice[3][3],int ligne, int colonne)

{
     for(ligne=0;ligne<3;ligne++)

   {
       for(colonne=0;colonne<3;colonne++)
       {
           printf("%d\t",matrice[ligne][colonne]);

       }

       printf("\n");

   }

    return;

}

void SommeMatrices(int matrice1[3][3],int matrice2[3][3],int ligne,int colonne,int matrice3[3][3])

{

    for(ligne=0;ligne<3;ligne++)
    {
        for(colonne=0;colonne<3;colonne++)
        {
            matrice3[ligne][colonne]= matrice1[ligne][colonne]+ matrice2[ligne][colonne];

        }

    }

    return;


}

