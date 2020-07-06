#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int nombre,verif;

    printf("Exercice 3 :\n\n");

    printf("Encodez un nombre : ");

    scanf("%d",&nombre);

    FILE*Nombre;

    Nombre=fopen("Nombre.txt","w");

    if (Nombre==NULL)

    printf("Erreur d'ouverture\n");

    else
        {
         fprintf(Nombre,"%d",nombre);

         fclose(Nombre);

         Nombre=fopen("Nombre.txt","r");

         fscanf(Nombre,"%d",&verif);

         printf("Verification : %d",verif);

         fclose(Nombre);
        }

        getch();

        return 0;
}
