#include <stdio.h>
#include <stdlib.h>

struct dugum{
    int deger;
    struct dugum *sonraki;
};
int main()
{
    struct dugum *ilksayi=(struct dugum*)malloc(sizeof(struct dugum));
    ilksayi->deger=5;

    ilksayi->sonraki=(struct dugum*)malloc(sizeof(struct dugum));
    ilksayi->sonraki->deger=6;

    ilksayi->sonraki->sonraki=(struct dugum*)malloc(sizeof(struct dugum));
    ilksayi->sonraki->sonraki->deger=7;

    ilksayi->sonraki->sonraki->sonraki=NULL;

    printf("Listedeki elemanlar:\n");
    printf("Ilk sayi:%d\n",ilksayi->deger);
    printf("Ikinci sayi:%d\n",ilksayi->sonraki->deger);
    printf("Ucuncu sayi:%d\n",ilksayi->sonraki->sonraki->deger);

    //Dongu ile ekrana yazdirma
    printf("Listedeki elemanlar:\n");
    struct dugum *sayi_ptr=ilksayi;
    while(sayi_ptr!=NULL)
    {
        printf("%d\n",sayi_ptr->deger);
        sayi_ptr=sayi_ptr->sonraki;
    }
    return 0;
}
