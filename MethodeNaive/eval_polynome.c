#include"eval_polynome.h"
#include<stdio.h>
#include<stdlib.h>

int puissance(float a,int i)
{
	int j,p=1;
	if(a==0)
	{
		p=1;
	}
	else if(a>0)
	{
		for(j=0;j<i;j++)
		{
			p=p*a;
		}
	}
	return p;
}
float evaluation(float*poly,float a,int i)
{
	int j;
	float val=0;
	for(j=0;j<i;j++)
	{
		val=val+(poly[i]*puissance(a,i));
	}
	return val;
}

//2
float*lire_tableau(int n,float*tab)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("entrer la valeur %d du polynome dans l'ordre decroissant de puissance\n",i+1);
		scanf("%f",&tab[i]);
	}
	return tab;
}
float afficher(int n,float*tab)
	{
	int i;
	printf("le polynome est\n");
	for(i=0;i<n;i++)
	{
			printf("%f\t",tab[i]);
	}
	printf("\n");
}
