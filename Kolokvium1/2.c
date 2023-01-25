#include <stdio.h>
#include <math.h>

//int main()
//{
//    int n,cifra,brojac=0;
//    int proiz=1;
//    int zbir=0;
//    scanf("%d",&n);
////    if(n%2!=0)
////    {
////        n++;
////    }
////    printf("%d\n",n); //proveruvam dali brojot mi go zgolemuva za 1 ako e neparen
//    for(int i=10;i<=n;i++)
//    {
//        if(i%2==0)
//        {
//          int temp=i;
//        while(temp>0)
//        {
//            cifra=temp%10;
//            if(cifra%2==0)
//                proiz*=cifra;
//            else
//                zbir+=cifra;
//            temp=temp/10;
//        }
//        if(i==n)
//        {
//           if(i%zbir==0 && i%proiz==0)
//            {
//            printf("%d\n",i);
//            brojac++;
//            }
//        }
//        }
//    }
//    printf("Takvi broevi ima: %d",brojac);
//
//    return 0;
//}

//int main()
//{
//    int a, b, c;
//    while(scanf("%d %d %d", &a,&b,&c));
//    if(a>b)
//    {
//        int temp=a;
//        a=b;
//        b=temp;
//    }
//    if(a>c)
//    {
//        int temp=a;
//        a=c;
//        c=temp;
//    }
//    if(b>c)
//    {
//        int temp=b;
//        b=c;
//        c=temp;
//    }
//    printf("%d %d %d",a,b,c);
//    return 0;
//}

//int main()
//{
//    int dino;
//    int bobi;
//    int ema;
//    int stefan;
//    int neno;
//    int treva=500;
//    printf("Kolku zema dino");
//    scanf("%d",&dino);
//
//        if(dino<treva)
//        {
//            printf("Dino zemi uste");
//        }
//        else
//                printf("DINO E ZADOVOLEN");
//
//    return 0;
//}

//int main()
//{
//    int x,n;
//    int nema;
//    int cifri=0;
//    int broj;
//    int ostatok;
//    scanf("%d %d",&x,&n);
//    int temp=x;
//    while(temp)
//    {
//        cifri++;
//        temp/=10;
//    }
//    printf("%d",cifri);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//
//        int temp=broj;
//        while(temp)
//        {
//            ostatok=temp % (int) pow(10,cifri);
//            if(ostatok==x)
//            {
//                printf("%d",broj);
//            }
//            temp/=10;
//        }
//    }
//    return 0;
//}

//Задача 4 (втора задача од прв колоквиум 2019)
//Од тастатура се внесуваат два едноцифрени броја C1 и C2 (1 <= C1, C2 <= 9).
//Потоа се внесува природен број N, кој означува колку броеви ќе се внесат во продолжение.
//Потоа се внесуваат N-те природни броеви. За секој од внесените броеви програмата треба да го
//испечати бројот кај кој цифрата C1 од внесениот број е заменетa со цифра C2, како и неговиот следбеник.
//Забелешка: За освојување на 80% од поените може да претпоставите дека внесените броеви не завршуваат на нула.
//int main()
//{
//    int c1,c2,n;
//    scanf("%d %d %d",&c1,&c2,&n);
//    int broj, nbroj, ostatok;
//    int help;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&broj);
//        int pbroj=broj;
//        nbroj=0;
//        help=1;
//        while(pbroj)
//        {
//            ostatok=pbroj%10;
//            if(ostatok==c1)
//            {
//                nbroj+=c2*help;
//            }
//            else
//            {
//                nbroj+=ostatok*help;
//            }
//
//            help=help*10;
//            pbroj=pbroj/10;
//        }
//        printf("%d %d\n",nbroj,nbroj+1);
//    }
//    return 0;
//}

//int main()
//{
//    int n,x;
//    scanf("%d %d",&n,&x);
//    int cifra, cifra2;
//    int nbroj;
//    for(int i=n-1;i>0;i--)
//    {
//        int broj=i;
//            while(broj)
//            {
//                cifra=broj%10;
//                int broj2=x;
//                while(broj2)
//                {
//                    cifra2=broj2%10;
//                    if(cifra==cifra2)
//                        {
//                            break;
//                        }
//                    broj2/=10;
//                }
//                broj/=10;
//                nbroj=broj;
//            }
//        printf("%d",nbroj);
//        break;
//    }
//    return 0;
//}

//int main()
//{
//    int n;
//    int zbirCifri;
//    int max,max2=0;
//    while (scanf("%d",&n))
//    {
//        int broj=n;
//        zbirCifri=0;
//        int cifra;
//        while(broj)
//        {
//            cifra=broj%10;
//            zbirCifri+=cifra;
//            broj/=10;
//        }
////        printf("%d\n",zbirCifri);
//        int broj2=n;
//        max=0;
//        while(broj2)
//        {
//            cifra=broj2%10;
//            if(cifra>max)
//            {
//                max=cifra;
//            }
//            broj2/=10;
//        }
////        printf("%d\n",max);
//        printf("%d:%d\n",n,zbirCifri+max2);
//        max2=max;
//    }
//    return 0;
//}

//IVITKA ZADACA
//int main()
//{
//    int broj,cifri=0;
//    scanf("%d",&broj);
//    int temp;
//    temp=broj;
//    while(temp)
//    {
//        cifri++;
//        temp/=10;
//    }
//    int pola1=broj/(int)pow(10,cifri/2);
//    int pola2=broj%(int)pow(10,cifri/2);
//
////    printf("%d %d",pola1,pola2);
//
//    int temp2;
//    int cifra;
//    temp2=pola2;
//    int pola2Obratno=0;
//    while(temp2)
//    {
//        cifra=temp2%10;
//        pola2Obratno=pola2Obratno*10+cifra;
//        temp2/=10;
//    }
////    printf("%d",pola2Obratno);
//    int cifra1;
//    int cifra2;
//    int cifra_zbir=0;
//    int zbir;
//    while(pola1!=0 && pola2Obratno!=0)
//    {
//        cifra1=0;
//        cifra2=0;
//        cifra1=pola1%10;
//        cifra2=pola2Obratno%10;
//        zbir=cifra1+cifra2;
//        if(zbir>9)
//        {
//            zbir=zbir%10;
//        }
//        cifra_zbir=cifra_zbir*10+zbir;
//        pola1/=10;
//        pola2Obratno/=10;
//    }
//    printf("%d",cifra_zbir);
//    return 0;
//}
