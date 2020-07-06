#include <stdio.h>
#include <stdlib.h>
#define Table "Table"
float PrixTotal(float, int);
float TVA(float, float);
int Remise(float*, int*,int*, float* );
void EncoderDate(int*, int*, int*);
int DateValide(int , int , int );

int main()
{
  int numero,jour,mois,annee,quantite,quantimin=20;
  float prixHT,TVAc=0.21,totalHT,prixTVA,TTC,reduc=0.9;
  FILE*Facture;

printf("Numero de facture : ");
scanf("%d",&numero);

EncoderDate(&jour,&mois,&annee);

printf("\nPrix unitaire HT : ");
scanf("%f",&prixHT);

printf("Quantite : ");
scanf("%d",&quantite);

printf("Le prix total acheter vaut %f EUR\n",PrixTotal(prixHT, quantite));

totalHT = PrixTotal(prixHT, quantite);

printf("Montant de la TVA : %f EUR\n",TVA(PrixTotal(prixHT, quantite),TVAc));

prixTVA = TVA(PrixTotal(prixHT, quantite),TVAc);

TTC = totalHT + prixTVA;

printf("Le prix total TTC vaut %f EUR\n",TTC);

Remise(&TTC,&quantite,&quantimin,&reduc);

printf("Le prix total TTC avec remise vaut %f EUR\n",TTC);
Facture=fopen("Facture.txt","w");

if (Facture==NULL)

    printf("Erreur d'ouverture");

    else

    {
        fprintf(Facture,"Facture n°%d\n",numero);
        fprintf(Facture,"Date : %d/%d/%d\n",jour,mois,annee);
        fprintf(Facture,"\nDESIGNATION\tPRIX UNITAIRE HT\tQUANTITE\tPRIX TOTAL HT\n");
        fprintf(Facture,"Table\t\t%12.2f EUR\t%8d\t%9.2f EUR\n",prixHT,quantite,totalHT);
        fprintf(Facture,"\t\t\t\t\tTVA (21%%)\t%9.2f EUR\n",prixTVA);
        fprintf(Facture,"\t\t\t\t\tPRIX TOTAL TTC\t%9.2f EUR\n",TTC);

        if(Remise(&TTC,&quantite,&quantimin,&reduc)==1)
        {
            fprintf(Facture,"\t\t\t\t\tRemise de 10%%\t\t  OUI\n");
        }
        else if(Remise(&TTC,&quantite,&quantimin,&reduc)==0)
        {
            fprintf(Facture,"\t\t\t\t\tRemise de 10%%\t\t  NON\n");
        }
        fprintf(Facture,"\t\t\t\t\tPRIX A PAYER\t%9.2f EUR\n",TTC);

        fclose(Facture);
    }

    return 0;
}

float PrixTotal(float prixHT, int quantite)
{
    float totalHT;

    totalHT = prixHT*quantite;

    return(totalHT);

}

float TVA(float PrixTotal , float TVAc)

{
    float prixTVA;

    prixTVA = PrixTotal*TVAc;

    return(prixTVA);
}

int Remise(float *TTC, int *quantite,int *quantimin, float *reduc )

{
    if(*quantite>=*quantimin)
    {
       *TTC= *TTC**reduc;

        return(1);
    }
    else

    {

        return(0);

    }
}

void EncoderDate(int* jour, int* mois,int*annee)

{

do
    {

printf("Jour/mois/annee : ");
scanf("%d/%d/%d",jour,mois,annee);

    }

while(DateValide(*jour,*mois,*annee)!=1);

    return;
}

int DateValide(int jour, int mois, int annee)

{
    int verif;

    printf("Verification de la validite de la date de %d/%d/%d\n",jour,mois,annee);

    switch(mois)

{

    case 1  :
    case 3  :
    case 5  :
    case 7  :
    case 8  :
    case 10 :
    case 12 : if(jour<1||jour>31)
                {
                    verif = 0;
                }
            else
                {
                    verif = 1;
                }
                 break;

    case 4 :
    case 6 :
    case 9 :
    case 11 : if(jour<1||jour>30)
                {
                    verif = 0;
                }
            else
                {
                    verif = 1;
                }
                break;

    case 2 : if(jour<1||jour>29)

                {
                    verif = 0;
                }

             else if(jour>=1&&jour<=28)
             {
                 verif = 1;
             }

             else if(jour==29)
             {

                if(annee%400==0)

                {
                    verif = 1;
                }

              else if(annee%100==0)
              {
                  verif = 0;
              }
              else if(annee%4==0)
              {
                  verif = 1;
              }
            else
            {
                verif = 0;
            }

}

}
    if(verif==1)
    {
        printf("\nDate valide\n");
    }
else if(verif==0)
{
    printf("\nDate invalide\n");
}

    return(verif);
}
