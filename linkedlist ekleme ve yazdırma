#include <stdio.h>
#include <stdlib.h>

struct dugum{
    int sayi;
    struct dugum *sonraki
};
void listeyiyaz(struct dugum *baslangic)
{
    struct dugum *e;
    for(e=baslangic;e!=NULL;e=e->sonraki)
    {
        printf("%d\n",e->sayi);
    }
    printf("\n");
}
int main()
{
    struct dugum *yeni;

    struct dugum *bas=NULL;
    struct dugum *son=NULL;
    
    //ilk elemani eklemek
    yeni=malloc(sizeof(struct dugum));
    yeni->sayi=40;

    yeni->sonraki=NULL;
    bas=son=yeni;

    listeyiyaz(bas);
    
    //sona eleman eklemek
    yeni=malloc(sizeof(struct dugum));
    yeni->sayi=50;

    yeni->sonraki=NULL;
    son->sonraki=yeni;
    son=yeni;

    listeyiyaz(bas);

    //basa eleman eklemek
    yeni=malloc(sizeof(struct dugum));
    yeni->sayi=10;

    yeni->sonraki=bas;
    bas=yeni;

    listeyiyaz(bas);
    return 0;
}
