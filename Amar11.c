#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
  double degres,radian,sinus,cosinus,tangente,cotangente;
  int choix,var;
do
{
  printf("Entrez un angle en degres : ");
  scanf("%lf",&degres);

  if(degres<0||degres>360)
  {
      printf("Veuillez entrez un angle compris entre 0 et 360 degres\n");
  }

}

while(degres<0||degres>360);

  radian = degres*M_PI/180;

  do
  {
do
{
if(degres==90||degres==270)
{
printf("\n1.Calculer le sinus\n2.Calculer le cosinus\n4.Calculer la cotangente\n");
}
else if(degres==0||degres==180)
{
    printf("\n1.Calculer le sinus\n2.Calculer le cosinus\n3.Calculer la tangente\n");
}
else
{
  printf("\n1.Calculer le sinus\n2.Calculer le cosinus\n3.Calculer la tangente\n4.Calculer la cotangente\n");
}
  printf("\nChoix : ");
  scanf("%d",&var);


  if(var!=1&&var!=2&&var!=3&&var!=4)
  {
      printf("Choississez une des options proposees\n");
  }

}
while(var!=1&&var!=2&&var!=3&&var!=4);

  switch(var)

  {

  case 2 : cosinus = cos(radian);
  printf("Cosinus de %lf : %lf\n",degres,cosinus);
  break;

  case 1 : sinus = sin(radian);
  printf("Sinus de %lf : %lf\n",degres,sinus);
  break;

  case 3 :
      if(degres==90||degres==270)
  {
      printf("Invalide\n");
      break;
  }
else{
      tangente = tan(radian);
      printf("Tangente de %lf : %lf\n",degres,tangente);
      break;
    }

  case 4 :
    if(degres==0||degres==180)
{
    printf("Invalide\n");
    break;
}
    else
        {
   tangente = tan(radian);
   cotangente = 1/tangente;
   printf("Cotangente de %lf : %lf\n",degres,cotangente);
   break;
        }
  }

  getch();

  printf("\nCalculer une autre valeur trigonometrique de %lf degres?\n",degres);
  printf("1.Oui/2.Non : ");
  scanf("%d",&choix);
  }
  while(choix==1);

  return 0;
}

