#include <stdio.h>
#include <stdlib.h>
#define Table "Table"
int main()
{
  int numero,jour,mois,annee,quantite;
  float prixHT, totalHT, TVA=0.21, TTC,produit,TTCr=0;
  FILE*Facture;

printf("Numero de facture : ");
scanf("%d",&numero);

printf("Jour/mois/annee : ");
scanf("%d/%d/%d",&jour,&mois,&annee);

printf("Prix unitaire HT : ");
scanf("%f",&prixHT);

printf("Quantite : ");
scanf("%d",&quantite);

totalHT = prixHT*quantite;

printf("Le prix total acheter vaut %f EUR\n",totalHT);

produit= (TVA*totalHT);

TTC = totalHT + produit;

if(quantite>=20)

{
    TTCr = 0.9*TTC;
}
else
{
    TTCr = TTC;
}

printf("Le prix total TTC vaut %f EUR\n",TTC);
printf("Le prix total TTC avec remise vaut %f EUR\n",TTCr);
Facture=fopen("Facture.txt","w");

if (Facture==NULL)

    printf("Erreur d'ouverture");

    else

    {
        fprintf(Facture,"Facture n°%d\n",numero);
        fprintf(Facture,"Date : %d/%d/%d\n",jour,mois,annee);
        fprintf(Facture,"\nDESIGNATION\tPRIX UNITAIRE HT\tQUANTITE\tPRIX TOTAL HT\n");
        fprintf(Facture,"Table\t\t%12.2f EUR\t%8d\t%9.2f EUR\n",prixHT,quantite,totalHT);
        fprintf(Facture,"\t\t\t\t\tTVA (21%%)\t%9.2f EUR\n",produit);
        fprintf(Facture,"\t\t\t\t\tPRIX TOTAL TTC\t%9.2f EUR\n",TTC);

        if(quantite>=20)
        {
            fprintf(Facture,"\t\t\t\t\tRemise de 10%%\t\t  OUI\n");
        }
        else
        {
            fprintf(Facture,"\t\t\t\t\tRemise de 10%%\t\t  NON\n");
        }
        fprintf(Facture,"\t\t\t\t\tPRIX A PAYER\t%9.2f EUR\n",TTCr);

        fclose(Facture);
    }

    return 0;
}
