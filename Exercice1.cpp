#include<stdio.h>
#include<string.h>
#define max 100
typedef struct{ int tab[max] ;
int Sommet;

}Pile;
Pile P1,P2,P3;
/************************************/
void PilePush(Pile *P,int x)
{ if (P->Sommet>=max-1)
printf(" Stack overflow : dépassement de la capacité");

else {

P->Sommet=P->Sommet+1;
P->tab[P->Sommet]=x;

}

}
int PilePop(Pile *P)
{ int x;
if (P->Sommet<0) printf(" Stack Underflow ");
else { x=P->tab[P->Sommet]; P->Sommet=P->Sommet-1;

return x;

}

}
void PileInitialisation(Pile *P)
{ P->Sommet=-1; }
int PileVide(Pile *P)
{ return (P->Sommet<0);
}
int PileSommet(Pile *P)
{ return(P->Sommet);
}
/***********************************/
main()
{
int nb,i,e;
PileInitialisation(&P1);
PileInitialisation(&P2);
PileInitialisation(&P3);
printf("Entrer la valeur de nb:\n");
scanf("%d",&nb);
for(i=1;i<=nb;i++)
{ printf("Entrer un entier:\n");
scanf("%d",&e);
PilePush(&P1,e);
}

Université Sultan Moulay Slimane Filières : GI+ARI
EST – Beni Mellal Module : Structures de données

2023/2024

while(!PileVide(&P1))
{ e=PilePop(&P1);
if(e%2==0) PilePush(&P3,e);
else PilePush(&P2,e);
}
while(!PileVide(&P3))
{ e=PilePop(&P3);
PilePush(&P2,e);
}
//Affichage du contenu de P2 après la traitement
for(i=0;i<=P2.Sommet;i++)
{ printf(" %d \n",P2.tab[i]);
}
}
