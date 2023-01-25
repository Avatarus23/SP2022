#include <stdio.h>
#include <string.h>
#include <ctype.h>

//1. Да се напише функција што ќе одредува колку пати даден знак се наоѓа во
//даден стринг. Знакот за споредување и стрингот се внесуваат од тастатура.

//int bukva(char *a, char n)
//{
//    int brojac=0;
//    int x = strlen(a);
//    for(int i=0;i<x;i++){
//        if(a[i]==n){
//            brojac++;
//        }
//    }
//    return brojac;
//}
//
//int main()
//{
//    char a[100];
//    fgets(a,100,stdin);
//    char n;
//    scanf("%c",&n);
//    printf("znakot %c se pojavuva %d pati.",n,bukva(a,n));
//    return 0;
//}

//2. Да се напише функција што ќе ја одредува должината на една текстуална низа.
//Да се даде итеративно и рекурзивно решение.

//int dolzina(char *a)
//{
//    if(*a != '\0'){
//        return 1 + dolzina(a+1);
//    }
//    else{
//        return -1;
//    }
//}
//
//int main()
//{
//    char a[100];
//    fgets(a,100,stdin);
//    printf("Dolzinata na stringot e: %d",dolzina(a));
//    return 0;
//}

//3. Да се напише програма која ќе ја отпечати поднизата на дадена текстуална
//низа (што се внесува од тастатура) определена со позицијата и должината, што
//како параметри се внесуваат од тастатура. Поднизата започнува од знакот што
//се наоѓа на соодветната позиција во текстуалната низа, броејќи од лево

//void pecati(char *a, int pozicija, int dolzina)
//{
//    char niza2[100];
//    strncpy(niza2,a+pozicija-1,dolzina);
//    printf("%s",niza2);
//}
//
//int main()
//{
//    char a[100];
//    fgets(a,100,stdin);
//    int poz, dolz;
//    scanf("%d %d",&poz,&dolz);
//    pecati(a,poz,dolz);
//    return 0;
//}

//5. Да се напише функција која ќе одредува дали една текстуална низа е подниза
//на друга текстуална низа.



int main()
{
    int niza[100];
    fgets(niza,100,stdin);


    return 0;
}









