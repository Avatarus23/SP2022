#include <stdio.h>

//1. Да се напише програма која за две низи кои се внесуваат од тастатура ќе
//провери дали се еднакви или не. На екран да се испачати резултатот од
//споредбата. Максимална големина на низите е 100.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n],b[n];
//    int f=1;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&b[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]!=b[i])
//        {
//            f=0;
//            break;
//        }
//    }
//    if(f==1)
//    {
//        printf("nizite se isti");
//    }
//    else if (f==0)
//        printf("nizite se razlicni");
//
//    return 0;
//}

//2. Да се напише програма која за низа чии елементи се внесуваат од тестатура, ќе
//го пресмета збирот на парните елементи, збирот на непарните елементи, како
//и односот помеѓу бројот на парни и непарни елементи. Резултатот да се
//испечати на екран.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    int zp=0,zn=0,bp=0,bn=0;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]%2==0)
//        {
//            zp+=a[i];
//            bp++;
//        }
//        else if(a[i]%2!=0)
//        {
//            zn+=a[i];
//            bn++;
//        }
//    }
//    printf("Zbir na parni: %d\n",zp);
//    printf("Zbir na neparni: %d\n",zn);
//    printf("Odnos pomegju parni i neparni: %.2f\n",(float)bp/bn);
//    return 0;
//}

//3. Да се напише програма која ќе го пресмета скаларниот производ на два
//вектори со по n координати. Бројот на координати n, како и координатите на
//векторите се внесуваат од стандарден влез. Резултатот да се испечати на екран.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n],b[n];
//    int zbir=0;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&b[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        zbir+=a[i]*b[i];
//    }
//    printf("Skalarniot proizvod e: %d\n",zbir);
//    return 0;
//}

//4. Да се напише програма која ќе провери дали дадена низа од n елементи која се
//чита од стандарден влез е строго растечка, строго опаѓачка или ниту строго
//растечка ниту строго опаѓачка. Резултатот да се испечати на екран.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    int rastecka=1,opagjacka=1;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n-1;i++)
//    {
//        if(a[i]>=a[i+1])
//        {
//            rastecka=0;
//            break;
//        }
//    }
//    for(int i=0;i<n-1;i++)
//    {
//        if(a[i]<=a[i+1])
//        {
//            opagjacka=0;
//            break;
//        }
//    }
//    if(rastecka==0 && opagjacka==0)
//        printf("Nitu rastecka nitu opagjacka");
//    else if(rastecka==1)
//        printf("Rastecka");
//    else if(opagjacka==1)
//        printf("Opagjacka");
//
//    return 0;
//}

//5. Да се напише програма за ротирање на елементите на една низа за едно место
//во десно. На крај, да се испечати на екран ротираната низа. Елементите од
//низата се читаат од стандарден влез.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    int temp;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    temp=a[n-1];
//    for(int i=n;i>0;i--)
//    {
//        a[i]=a[i-1];
//    }
//    a[0]=temp;
//    for(int i=0;i<n;i++)
//        printf("%d ",a[i]);
//
//    return 0;
//}

//6. Да се напише програма за ротирање на елементите на една низа за m местa во
//десно. На крај, да се испечати на екран ротираната низа. Елементите од низата
//и бројот на ротирања се читаат од стандарден влез.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    int m;
//    int temp;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    printf("Vnesi broj na pomestuvanja: ");
//    scanf("%d",&m);
//    for(int j=0;j<m;j++)
//    {
//        temp=a[n-1];
//        for(int i=n;i>0;i--)
//        {
//            a[i]=a[i-1];
//        }
//        a[0]=temp;
//    }
//    for(int i=0;i<n;i++)
//        printf("%d ",a[i]);
//    return 0;
//}

//7. Да се напише програма која што ќе ги избрише дупликатите од една низа. На
//крај, да се испечати на екран новодобиената низа. Елементите од низата се
//читаат од стандарден влез.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    int izbrisani=0;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n-izbrisani;i++)
//    {
//      for(int j=i+1;j<n-izbrisani;j++)
//      {
//          if(a[i]==a[j])
//          {
//              for(int k=j;k<n-1-izbrisani;k++)
//                a[k]=a[k+1];
//              izbrisani++;
//              --j; //??
//          }
//      }
//    }
//    n-=izbrisani;
//    for(int i=0;i<n;i++)
//        printf("%d ",a[i]);
//    return 0;
//}
