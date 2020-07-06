#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void EncoderContact(char[30],char[30],char[30],char[30]);
void EcrireContact(char[30],char[30],char[30],char[30],FILE*);
FILE*CreerFichier(char[30]);

int main()
{
    char nom[30],prenom[30],tel[30],email[30];
    FILE*fichier;
    EncoderContact(&nom[30],&prenom[30],&tel[30],&email[30]);
    fichier=CreerFichier(&nom[30]);
    EcrireContact(&nom[30],&prenom[30],&tel[30],&email[30],fichier);

}

void EncoderContact(char nom[30],char prenom[30],char tel[30],char email[30])
{
    printf("Nom : ");
    scanf("%s",nom);
    printf("Prenom : ");
    scanf("%s",prenom);
    printf("numero de gsm : ");
    scanf("%s",tel);
    printf("email : ");
    scanf("%s",email);

    return;
}

void EcrireContact(char nom[30],char prenom[30],char tel[30],char email[30],FILE*fichier)
{

    if (fichier==NULL)
        {

        printf("Erreur d'ouverture\n");

        }

        else

        {
            fprintf(fichier,"Nom : %s\n",nom);
            fprintf(fichier,"Prenom : %s\n",prenom);
            fprintf(fichier,"Numero de gsm : %s\n",tel);
            fprintf(fichier,"email : %s\n",email);

            fclose(fichier);

        }

        return;
}

FILE*CreerFichier(char nom[30])

{

    char nomacces[35],chemin[50];
    strcpy(nomacces,nom);
    strcat(nomacces,".txt");
    FILE*fichier=NULL;

   do

{

        printf("\nEntrez le chemin d'acces complet vers le dossier : ");
        scanf("%s",chemin);
        strcat(chemin,"\\");
        strcat(chemin,nomacces);
        printf("\n%s\\",chemin);

}

while(!(fichier=fopen(chemin,"w")));

return fichier;

}
