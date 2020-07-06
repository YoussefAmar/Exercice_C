#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int ChaineVersOctet(unsigned char[],unsigned char*);
int ParitePaire(unsigned char);

int main()
{

int choix;

do
{

unsigned char chaine[9], octet = 0;


printf("Encoder un octet : ");

scanf("%s",chaine);

if(ChaineVersOctet(&chaine[0],&octet) != 0 )

{
    printf("Vrai\n");

    printf("%X\n",octet);

    if (ParitePaire(octet) == 1)
    {
        printf("Nombre de 1  est paire\n");
    }

    else
    {
        printf("Nombre de 1 est impaire\n");
    }
}
else
{
    printf("Faux\n");
}


printf("Voulez vous recommencez? \n1.Oui/2.Non\n");

scanf("%d",&choix);

}
    while(choix==1);

    getch();

    return 0;

}

int ChaineVersOctet(unsigned char chaine[9],unsigned char* octet)

{
    int cpt, back;

    short b = 1;

    for(cpt=0;cpt<8;cpt++)
    {

      if(chaine[cpt] != '0'&& chaine[cpt] != '1')

      {
        back = 0;
        break;
      }

      else  if(chaine[cpt] == '1' )

      {
        back = 1;
       *octet = *octet | b;
      }

      b<<=1;

    }


        return (back);

}

int ParitePaire(unsigned char octet)

{

int i,cpt=0;

short b = 1;

for(i=0;i<8;i++)

{
    if((octet & b))

    {
       cpt++;
    }

    octet>>=1;
}

if(cpt%2==0)

{
     return(1);

}

else
{
    return(0);
}

}
