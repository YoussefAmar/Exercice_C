#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{
    printf("Exercice 1:\n\n");

    FILE*card;

    printf("Nom : Amar\nPrenom : Youssef\nNumero de gsm : 0494590840\nAddresse Mail : youssefamar@icloud.com\nFutur developpeur C# ");

    card=fopen("Carte.txt","w");

  if(card==NULL)

    printf("Erreur d'ouverture\n");

  else
    {
    printf("\n\nFichier cree");

    fprintf(card,"Nom : Amar\nPrenom : Youssef\nNumero de gsm : 0494590840\nAddresse Mail : youssefamar@icloud.com\nFutur developpeur C# ");

    fclose(card);

    }

    getch();

    return 0;
}
