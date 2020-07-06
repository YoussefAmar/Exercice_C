#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
  double degres,radian,sinus,cosinus,tangente,cotangente;
  int choix,var,verif;

  printf("Entrez un angle en degres : ");
  scanf("%lf",&degres);

  radian = degres*M_PI/180;

  do
  {

  printf("\n1.Calculer le sinus\n2.Calculer le cosinus\n3.Calculer la tangente\n4.Calculer la cotangente\n");
  printf("\nChoix : ");
  scanf("%d",&var);

  switch(var)

  {

  case 2 : cosinus = cos(radian);
  printf("Cosinus de %lf : %lf\n",degres,cosinus);
  break;

  case 1 : sinus = sin(radian);
  printf("Sinus de %lf : %lf\n",degres,sinus);
  break;

  case 3 : verif=((int)degres - 90)% 180;
  if(verif==0)
  {
      printf("La tangente n'est pas calculable\n");
      break;
  }
  else
  {
      tangente = tan(radian);
      printf("Tangente de %lf : %lf\n",degres,tangente);
      break;
  }

  case 4 : verif= ((int)degres % 180);

  if(verif==0)
{
    printf("La cotangente n'est pas calculable\n");
    break;
}
else
{
   tangente = tan(radian);
   cotangente = 1/tangente;
   printf("Cotangente de %lf : %lf\n",degres,cotangente);
   break;
}
  default : printf("Non reconnu\n");
  }

  getch();

  printf("\nCalculer une autre valeur trigonometrique de %lf degres?\n",degres);
  printf("1.Oui/2.Non : ");
  scanf("%d",&choix);
  }
  while(choix==1);

  return 0;
}

