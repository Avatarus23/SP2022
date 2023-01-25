#include <stdio.h>
#define MAX 100

//1. Да се напише функција која за низа од N цели броеви ќе ги пронајде почетокот
//и должината на најголемата растечка подниза.

//void podniza(int a[], int n, int *pozicija, int *dolzina)
//{
//    int indeks, golemina;
//    *pozicija=0;
//    *dolzina=1;
//    for(int i=0;i<n;i++){
//        indeks=i;
//        golemina=1;
//        while(a[i]<a[i+1]){
//            golemina++;
//            i++;
//            if(i==n)
//                break;
//        }
//        if(golemina>*dolzina){
//            *dolzina = golemina;
//            *pozicija = indeks;
//        }
//    }
//}
//int main()
//{
//    int n;
//    int poz, dolz;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    podniza(a,n,&poz,&dolz);
//    printf("%d\n",poz);
//    printf("%d\n",dolz);
//    return 0;
//}

//2. Да се напише програма која влезната низа \[ a_0, a_1, … a_{n-1} \]
//ќе ја трансформира во излезната низа: \[ b_0, b_1, b_2, …, b_{n-1} \]
//на следниот начин: \[ b_0 = a_0 + a_{n-1} b_1 = a_1 + a_{n-2} . . . b_{n-1} = a_{n-1} + a_0 \]

//int glupa_niza(int *a, int n)
//{
//    int brojac1=0;
//    int brojac2=n-1;
//    for(;brojac1<brojac2;brojac1++,brojac2--){
//        *(a+brojac1) += *(a+brojac2);
//        *(a+brojac2) = *(a+brojac1);
//    }
//    if (n%2){
//        *(a+n/2) *= 2;
//    }
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    glupa_niza(&a, n);
//    for(int i=0;i<n;i++){
//        printf("%d ",a[i]);
//    }
//    return 0;
//}


