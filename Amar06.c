#include <stdio.h>
#include <math.h>

int main()
{
  double degres,radian,sinus,cosinus;

  printf("Entrez un angle en degres : ");
  scanf("%lf",&degres);

  radian = degres*M_PI/180;

  cosinus = cos(radian);

  sinus = sin(radian);

  printf("Cosinus de %lf : %lf\n",degres,cosinus);

  printf("Sinus de %lf : %lf\n",degres,sinus);

  return 0;
}
