#include <stdio.h>
#include <stdlib.h>

typedef struct LDC
{
    int data;
    struct LDC *next;
    struct LDC *prev;
}LDC;
int taille;
LDC *debut , *fin;

void Initialisation(){
    debut = NULL;
    fin =NULL;
    taille = 0;
}
int insertListevide(int *data )
{
    LDC *b;
    b =(LDC *)malloc(sizeof(LDC));
    if ((b =(LDC *)malloc(sizeof(LDC))==NULL))
     return -1;
    b =(LDC *)malloc(sizeof(LDC));
    b->data = data;
    b->next = NULL;
    b->prev = NULL;
    debut = b;
    fin = b; 
    taille ++ ;
    return 0;
}

void afficherListe(){
    LDC *temp;
    temp = debut;
    while(temp != NULL)
    {
        printf("--- %d \n",temp->data);
        temp = temp->next;
    }
}
void main()
{
    LDC *L1=NULL;
    insertListevide(7);
    afficherListe();
}