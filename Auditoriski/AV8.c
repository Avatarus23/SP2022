#include <stdio.h>

//int stepen(int m, int n)
//{
//    if(n==0)
//    {
//        return 1;
//    }
//    else
//    {
//        return m*stepen(m, n-1);
//    }
//}
//int faktoriel(int n)
//{
//    if(n==1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n*faktoriel(n-1);
//    }
//}
//int zbir_broevi(int n)
//{
//    if(n==0)
//    {
//        return 0;
//    }
//    else
//    {
//        return n+zbir_broevi(n-1);
//    }
//}
//int zbir_cifri(int n)
//{
//    if(n==0)
//    {
//        return 0;
//    }
//    else
//    {
//        return n%10+zbir_cifri(n/10);
//    }
//}
//long fibonaci(long n)
//{
//    if(n==1 || n==2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fibonaci(n-1) + fibonaci(n-2);
//    }
//}
//int main()
//{
//    int m,n;
//    scanf("%d",&m);
//    printf("%l",fibonaci(m));
//    return 0;
//}

//Задача: Да се најде минимален елемент на низа
//int min(a[])
//{
//
//
//}
//int main()
//{
//    int n;
//    printf("Vnesi broj na elementi na niza: ");
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    min=min(a[n]);
//    printf("%d",min);
//
//    return 0;
//}


//1. Да се пресмета збирот: \[ 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)! \] притоа:
//• користете рекурзивна функција за пресметување на збирот на првите k природни броеви.
//• користете рекурзивна функција за пресметување на факториел на еден природен број.
//int faktoriel(int n)
//{
//    if(n==0)
//    {
//        return 1;
//    }
//    else
//    {
//        return n*faktoriel(n-1);
//    }
//
//}
//int zbir(int n)
//{
//    if(n==0)
//    {
//        return 0;
//    }
//    else
//    {
//        return n+zbir(n-1);
//    }
//}
//int main()
//{
//    int n;
//    int rezultat=0;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        if(i==n){
//            printf("%d! = ",zbir(i));
//            break;
//        }
//        printf("%d! + ",zbir(i));
//        rezultat += faktoriel(zbir(i));
//    }
//    printf("%d",rezultat);
//    return 0;
//}

//2. Да се напише програма која за даден природен број ја пресметува разликата
//помеѓу најблискиот поголем од него прост број и самиот тој број.
//Програмата треба да користи рекурзивна функција за наоѓање на соодветниот
//прост број, која пак треба да користи рекурзивна функција за проверка дали
//даден број е прост број.

//int prost(int n, int i);
//int prv_prost(int n);
//int main()
//{
//    int n;
//    int razlika;
//    scanf("%d",&n);
//    razlika=prv_prost(n)-n;
//    printf("%d - %d = %d",prv_prost(n),n,razlika);
//
//    return 0;
//}
//int prost(int n, int i)
//{
//    if(i==n/2)
//    {
//        return 1;
//    }
//    else
//    {
//        if(n%i==0){
//            return 0;
//        }
//        else
//        {
//            return prost(n,i+1);
//        }
//    }
//}
//int prv_prost(int n)
//{
//    if(prost(n+1,3)){
//        return n+1;
//    }
//    else
//    {
//        return prv_prost(n+1);
//    }
//}

//3. Да се напише програма што ќе ја испишува вредноста на n-тиот член на низата дефинирана со:
//\[ \begin{array}{l} x_1 = 1\\ x_2 = 2\\ \vdots\\ x_n = \frac{n - 1}{n}x_{n - 1} + \frac{1}{n}x_{n - 2} \end{array} \]
// NE TE SFAKJAM .!.

//4. Да се напише рекурзивна функција која ќе го пресметува збирот на цифрите на еден број.
//int zbir_cifri(int n)
//{
//    if(n==0)
//        return 0;
//    else
//        return n%10+zbir_cifri(n/10);
//}

//5. За даден број n, да се напише рекурзивна функција која ќе ги изброи
//појавувањата на цифрата 8. Притоа, доколку до некоја цифра 8 има уште една
//цифра 8 веднаш лево од неа, нејзиното појавување се брои двојно.
//int osmici(int n)
//{
//    if(n==0)
//        return 0;
//    if(n%10 == 8 && n/10%10 == 8)
//        return 2 + osmici(n/10);
//    if(n%10 == 8)
//        return 1 + osmici(n/10);
//    return osmici(n/10);
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    printf("%d",osmici(n));
//    return 0;
//}

//6. Да се напише програма која што за дадена низа од природни броеви (која што
//се внесува од тастатура) ќе го отпечати најголемиот заеднички делител (НЗД)
//на нејзините елементи. Програмата задолжително треба да содржи
//рекурзивна функција за пресметување на НЗД на два природни броја
//int NZD(int n, int m)
//{
//    if(m==0){
//        return n;
//    }
//    else
//        return NZD(m, n%m);
//}
//int main()
//{
//    int n;
//    int nzd;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    nzd=NZD(a[0],a[1]);
//    for (int i=2; i<n; i++){
//        nzd = NZD(nzd,a[i]);
//    }
//    printf("NZD na elementite na ovaa niza e %d",nzd);
//
//    return 0;
//}

//7. Да се напише програма која за дадена низа од цели броеви (која се внесува од
//тастатура), ќе го отпечати најмалиот заеднички содржател (НЗС) на нејзините
//елементи. Програмата треба задолжително да содржи рекурзивна функција за
//пресметување на НЗС на два броја.
int NZS()
