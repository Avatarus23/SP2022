#include <stdio.h>
#define PI 3.14

//1.1.3. Да се напише програма во која со посебна функција се пресметува куб n^3 за вчитан природен број n
//int kub(int n)
//{
//    return n * n * n;
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int rezultat = kub(n);
//    printf("%d",rezultat);
//    return 0;
//}

//1. Да се напишат соодветни функции за пресметување на дијаметар, периметар и
//плоштина на круг чиј што радиус се предава како аргумент. Потоа да се
//напише и програма во која за внесен (од тастатура) радиус ќе се повикаат овие
//функции за да се пресметаат дијаметарот, периметарот и плоштината на
//соодветниот круг.
//double dijametar(double r)
//{
//    return 2*r;
//}
//double perimetar(double r)
//{
//    return 2*r*PI;
//}
//double plostina(double r)
//{
//    return r*r*PI;
//}
//
//int main()
//{
//    double radius;
//    scanf("%lf",&radius);
//    double D = dijametar(radius);
//    double L = perimetar(radius);
//    double P = plostina(radius);
//    printf("Dijametarot e: %.2f; Perimetarot e: %.2f; Plostinata e: %.2f",D,L,P);
//
//    return 0;
//}

//2. Да се напише програма која што ќе ги отпечати сите четирицифрени природни
//броеви кои се деливи со збирот на двата броја составени од првите две цифри и
//од последните две цифри на четирицифрениот број. На крајот треба да
//отпечати и колку вакви броеви се пронајдени.
//int zbir(int n)
//{
//    int zbir= n/100 + n%100;
//    return zbir;
//}
//int main()
//{
//    int brojac=0;
//    for(int i=1000;i<10000;i++){
//        int delitel = zbir(i);
//        if(i%delitel==0)
//        {
//            printf("%d ",i);
//            brojac++;
//        }
//    }
//    printf("\n");
//    printf("%d",brojac);
//
//    return 0;
//}

//3. Да се напише програма која за даден природен број ја пресметува разликата
//помеѓу најблискиот поголем од него прост број и самиот тој број.
//Пример: Ако се внесе 573, програмата треба да испечати 577 – 573 = 4
//int prost(int n)
//{
//    for (int i=2;i*i<=n;i++){
//        if(n%i==0){
//            return 0;
//        }
//    }
//    return 1;
//}
//int prv_pogolem_prost(int n)
//{
//    n++;
//    while(prost(n)==0)
//    {
//        n++;
//    }
//    return n;
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int pogolem_prost = prv_pogolem_prost(n);
//    printf("%d - %d = %d",pogolem_prost,n,pogolem_prost-n);
//    return 0;
//}

//4. Да се напише програма што ќе ги отпечати сите прости броеви помали од 10000
//чиј што збир на цифри е исто така прост број. На крајот да се отпечати колку
//вакви броеви се пронајдени.
//int prost(int n)
//{
//    for(int i=2;i*i<=n;i++){
//        if(n%i==0){
//            return 0;
//        }
//    }
//    return 1;
//}
//int zbir_cifri(int n)
//{
//    int temp=n;
//    int suma=0;
//    while(temp)
//    {
//        suma+=temp%10;
//        temp/=10;
//    }
//    return suma;
//}
//int main()
//{
//    int brojac=0;
//    for(int i=2;i<10000;i++){
//        if(prost(i) && prost(zbir_cifri(i)))
//        {
//            printf("%d ", i);
//            brojac++;
//        }
//    }
//    printf("\n\n");
//    printf("%d", brojac);
//
//    return 0;
//}

//5. Да се напише програма што ќе ги отпечати сите парови прости броеви помали
//од 1000 што се разликуваат меѓу себе за 2. На крај да се отпечати и нивниот
//број.
//int prost(int n)
//{
//    for(int i=2;i*i<=n;i++)
//    {
//        if(n%i==0){
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int brojac=0;
//    for(int i=1;i<1000;i++){
//        if(prost(i) && prost(i+2)){
//            printf("%d %d \n", i, i+2);
//            brojac++;
//        }
//    }
//    printf("%d",brojac);
//    return 0;
//}

//6. Да се пресмета збирот:
//1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!
//Користете функција за пресметување на збирот на првите k природни броеви. Користете функција за пресметување факториел на еден природен број k
int faktoriel(int n)
{
    int fak=1;
    for(int i=1;i<=n;i++){
        fak*=i;
    }
    return fak;
}
int zbir(int n)
{
    int zbir=0;
    while(n)
    {
        zbir+=n;
        n--;
    }
    return zbir;
}
int main()
{
    int n;
    int resenie=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==n){
            printf("%d! = ",(zbir(i)));
            break;
        }
        printf("%d! + ",zbir(i));

        resenie+=faktoriel(zbir(i));
    }
    printf("%d",resenie);
}
