#include"eval_polynome.h"
#include<stdio.h>
#include<stdlib.h>


int main(int argc ,char *argv[])
{
	float a,p;
	float*poly;
	int i,n;
	printf("entrer un nombre pour l'evaluation\n");
	scanf("%f",&a);
	printf("entrer le nombre de monome\n");
	scanf("%d",&n);
	poly=(float*)malloc(sizeof(float)*n);
	poly=lire_tableau(n,poly);
	afficher(n,poly);
	p=evaluation(poly,a,n);
	printf("%f\n",p);
	return 0;
}
