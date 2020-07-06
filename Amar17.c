#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void Banniere(int, int, int);
void AjouterCredit(int*);
void Jouer(int*,int*,int*,char,char,char);

int main()
{
    int credit=0,joue=0,gagne=0,choix=0,again=0;

    char x='A',y='A',z='A';

    srand(time(NULL));

    do

    {

    do
    {

    printf("Que voulez vous faire : \n");
    printf("1.Afficher le score\n2.Rajouter de l'argent\n3.Jouer (1 EUR necessaire)\n4.Quitter\n\n");
    printf("Choix : ");
    scanf("%d",&choix);
    }

    while(choix<1||choix>4);

    switch (choix)
    {
        case 1: Banniere(credit,joue,gagne);
                    break;

        case 2: AjouterCredit(&credit);
                    break;

        case 3: if(credit<=0)
                {
                printf("Vous n'avez pas d'argent\n\n");
                break;
                }
                  else
                {
        Jouer(&credit,&joue,&gagne,x,y,z);
                    break;
                }

        case 4: printf("Etes-vous sur de vouloir partir?\n1.Oui\t2.Non\n\n");
                printf("Choix : ");
                scanf("%d",&again);
    }


}

while(again!=1);

}

void Banniere(int credit, int joue, int gagne)

{
    printf("\nCredit restant : %d EUR\tCredit accumule : %d EUR\nNombre d'essai : %d\tVictoire : %d\n\n",credit,credit+joue,joue,gagne);

    return;

}

void AjouterCredit(int*credit)
{
    int choix;


     do
    {

    printf("Que voulez vous faire : \n\n");
    printf("\n1.Rajouter 5 EUR\n2.Rajouter 10 EUR\n3.Rajouter 20 EUR\n4.Rajouter 50 EUR\n5.Ne rien ajouter\n\n");
    printf("Choix : ");
    scanf("%d",&choix);
    }

    while(choix<1||choix>5);

    switch (choix)
    {
        case 1: *credit+=5;
                    break;

        case 2: *credit+=10;
                    break;

        case 3: *credit+=20;
                    break;

        case 4: *credit+=50;
                    break;

        case 5: break;
    }

    return;
}

void Jouer(int*credit,int*joue,int*gagne, char x,char y,char z)

{
    printf("A A A +100 EUR\tB B B +50 EUR\tC C C + 20 EUR\tD D D + 10 EUR\n\n");

do
{

    *credit-=1;
    *joue+=1;

    x = 65+rand()%4;
    z = 65+rand()%4;
    y = 65+rand()%4;

    printf("Votre score :\t%c %c %c\n\n",x,y,z);

    if(x=='A'&&y=='A'&&z=='A')
    {
        printf("BRAVOOOOOO\n\n");
        *credit+=100;
        printf("Vos credits : %d EUR\n\n",*credit);
        *gagne=+1;
    }
    else if(x=='B'&&y=='B'&&z=='B')
    {
        printf("Tres bien\n\n");
        *credit+=50;
        printf("Vos credits : %d EUR\n\n",*credit);
        *gagne+=1;
    }
    else if(x=='C'&&y=='C'&&z=='C')
    {
        printf("Bien\n\n");
        *credit+=20;
        printf("Vos credits : %d EUR\n\n",*credit);
        *gagne+=1;
    }

    else if(x=='D'&&y=='D'&&z=='D')
    {
        printf("Pas mal\n\n");
        *credit+=10;
        printf("Vos credits : %d EUR\n\n",*credit);
        *gagne+=1;
    }
    else
    {
        printf("Perdu\n\n");
    }

    getch();

}
    while(*credit!=0);

    printf("\nPlus d'argent\n\n");

    return;

}
