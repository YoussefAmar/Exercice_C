#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int notes=0,i,labo[7];
    float progralabo=0,algo,prograth,uealgo;
    FILE*Bulletin;

    for(i=1;i<8;i++)
    {

    printf("Labo %d : ",i);
    scanf("%d",&labo[notes]);

    progralabo = progralabo + (float) labo[notes];
    notes++;

    }

    progralabo = progralabo*4/7;

    printf("AA programmation labo 1 : %f\n",progralabo);

    printf("AA algorithmique 1 : ");

    scanf("%f",&algo);

    printf("AA Programmation theorie 1 : ");
    scanf("%f",&prograth);

    uealgo= (algo + prograth) / 2;

    printf("UE Programmation 1 : %f\n",progralabo);

    printf("UE Algorithmique et programmation : %f\n",uealgo);

    Bulletin=fopen("Bulletin.txt", "w");

    if (Bulletin==NULL)

        printf("Erreur d'ouverture\n");

        else

        {
            fprintf(Bulletin,"Labo 1 : %d/5 \nLabo 2 : %d/5\nLabo 3 : %d/5\nLabo 4 : %d/5\nLabo 5 : %d/5\nLabo 6 : %d/5\nLabo 7 : %d/5\n",labo[0],labo[1],labo[2],labo[3],labo[4],labo[5],labo[6],labo[7]);
            fprintf(Bulletin,"AA Programmation Labo 1 : \t\t\t%5.1f/20\n",progralabo);
            fprintf(Bulletin,"AA Algorithmique 1 : \t\t\t\t%5.01f/20\n",algo);
            fprintf(Bulletin,"AA Programmation theorie 1 : \t\t\t%5.01f/20\n",prograth);
            fprintf(Bulletin,"UE Programmation 1 : \t\t\t\t%5.f/20\n",progralabo);
            fprintf(Bulletin,"UE Algorithmique et programmation 1 : \t\t%5.f/20\n",uealgo);

            fclose(Bulletin);

        }

        return 0;
}
