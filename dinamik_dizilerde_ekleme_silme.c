#include <stdio.h>
#include <stdlib.h>

void yaz(int dizi[],int N);

int main()
{
    int i;
    int N=5;
    int *dizi=(int*)malloc(N*sizeof(int));
    dizi[0]=5;
    dizi[1]=10;
    dizi[2]=3;
    dizi[3]=5;
    dizi[4]=7;
    int yeni=111;
    
    //sona ekleme
    N++;
    dizi=(int*)realloc(dizi,N*sizeof(int));
    dizi[N-1]=yeni;
    printf("Sona eklendiginde:");
    yaz(dizi,N);
    
    //sondan silme
    N--;
    dizi=(int*)realloc(dizi,N*sizeof(int));
    printf("Sondan silindiginde:");
    yaz(dizi,N);
    
    //basa ekleme
    N++;
    dizi=(int*)realloc(dizi,N*sizeof(int));
    for(i=N-1;i>0;i--)
    {
        dizi[i]=dizi[i-1]; //tum elemanlar bir ileri alınıyor
    }
    dizi[0]=yeni;
    printf("Basa eklendiginde:");
    yaz(dizi,N);
    
    //bastan silme
    for(i=0;i<N-1;i++)
    {
        dizi[i]=dizi[i+1]; //tum elemanlar bir geri alınıyor
    }
    N--;
    dizi=(int*)realloc(dizi,N*sizeof(int));
    printf("Bastan silindiginde:");
    yaz(dizi,N);
    return 0;
}
void yaz(int dizi[],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\n");
}
