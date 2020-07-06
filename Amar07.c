#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int notes=0,i,labo[7],varlabo,varalgo;
    float progralabo=0,algo,prograth,uealgo,moyenne;
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

    uealgo = (algo + prograth) / 2;

    moyenne = (uealgo+progralabo) /2;

    printf("UE Programmation 1 : %f\t ",progralabo);

    if(progralabo>=10)
    {
        printf("A\n");
        varlabo=1;
    }
    if(progralabo<=8)
    {
        printf("NA\n");
        varlabo=2;
    }
    if(progralabo>8&&progralabo<10)
    {

        printf("\n1.A/2.NA : ");
        scanf("%d",&varlabo);
        if(varlabo==1)
        {
            printf("A\n");
        }
        if(varlabo==2)
        {
            printf("NA\n");
        }

        }

    printf("UE Algorithmique et programmation : %f\t",uealgo);

       if(uealgo>= 10)
    {
    printf("A\n");
    varalgo=1;
    }

    if(uealgo<8)
    {
    printf("NA\n");
    varalgo=2;
    }
    if(uealgo>8&&uealgo<10)
    {
        printf("\n1.A/2.NA : ");
        scanf("%d",&varalgo);
        if(varalgo==1)
        {
        printf("A\n");
        }
        if(varalgo==2)
        {
        printf("NA\n");
        }
    }

    printf("Moyenne des UE : %.f",moyenne);

    Bulletin=fopen("Bulletin.txt", "w");

    if (Bulletin==NULL)

        printf("Erreur d'ouverture\n");

        else

        {
            fprintf(Bulletin,"Labo 1 : %d/5 \nLabo 2 : %d/5\nLabo 3 : %d/5\nLabo 4 : %d/5\nLabo 5 : %d/5\nLabo 6 : %d/5\nLabo 7 : %d/5\n",labo[0],labo[1],labo[2],labo[3],labo[4],labo[5],labo[6]);
            fprintf(Bulletin,"AA Programmation Labo 1 : \t\t\t%5.1f/20\n",progralabo);
            fprintf(Bulletin,"AA Algorithmique 1 : \t\t\t\t%5.01f/20\n",algo);
            fprintf(Bulletin,"AA Programmation theorie 1 : \t\t\t%5.01f/20\n",prograth);
            fprintf(Bulletin,"UE Programmation 1 : \t\t\t\t%5.f/20",progralabo);

            if(varlabo==1)
            {
                fprintf(Bulletin,"\tA\n");
            }
            if(varlabo==2)
            {
                fprintf(Bulletin,"\tNA\n");
            }
            fprintf(Bulletin,"UE Algorithmique et programmation 1 : \t\t%5.f/20",uealgo);
            if(varalgo==1)
            {
                fprintf(Bulletin,"\tA\n");
            }
            if(varalgo==2)
            {
                fprintf(Bulletin,"\tNA\n");
            }

            if(uealgo<8&&progralabo<8)
            {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tTres insuffisant",moyenne);
            }
            if(varlabo==1&&varalgo==2)
            {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tInsuffisant",moyenne);
            }
            if(varlabo==2&&varalgo==1)
            {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tInsuffisant",moyenne);
            }
            if(varlabo==1&&varalgo==1)
            {
                if(8<=moyenne&&moyenne<12)
                {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tPassable",moyenne);
                }
                if(12<=moyenne&&moyenne<14)
                {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tSatisfaisant",moyenne);
                }
                if(14<=moyenne&&moyenne<16)
                {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tBien",moyenne);
                }
                if(16<=moyenne&&moyenne<18)
                {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tTres bien",moyenne);
                }
                if(18<=moyenne&&moyenne<20)
                {
                fprintf(Bulletin,"Moyenne : \t\t\t\t\t%5.f/20\tExcellent",moyenne);
                }
            }
                fclose(Bulletin);
        }

        getch();

        return 0;

}

