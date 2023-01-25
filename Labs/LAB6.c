#include <stdio.h>

//1. parni broevi vo niza +1 neparni -1
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]%2==0)
//        {
//            a[i]++;
//        }
//        else if(a[i]%2!=0)
//        {
//            a[i]--;
//        }
//    }
//    for(int i=0;i<n;i++)
//        printf("%d ",a[i]);
//
//    return 0;
//}

//2.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    int k;
//    scanf("%d",&k);
//    int brojac=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]>k)
//        {
//            brojac++;
//        }
//        if(a[i]<k)
//        {
//            int temp=a[i-brojac];
//            a[i-brojac]=a[i];
//            a[i]=temp;
//        }
//    }
//    for(int i=0;i<n;i++)
//        printf("%d ",a[i]);
//    return 0;
//}
//SO REDENJE NA CLENOVITE VO NOVA NIZA
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n];
//    int b[n];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    int k;
//    scanf("%d",&k);
//    int brojac=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]<k)
//        b[brojac++]=a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]>=k)
//        b[brojac++]=a[i];
//    }
//    for(int i=0;i<brojac;i++)
//        printf("%d ",b[i]);
//    return 0;
//}

//3.
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    int brojac=0, max=0;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(a[i][j]>a[i][j-1])
//            {
//                brojac++;
//            }
//            else
//            {
//                brojac=1;
//            }
//            if(brojac>max)
//            {
//                max=brojac;
//            }
//        }
//    brojac=0;
//    }
//    printf("%d",max);
//    return 0;
//}
//OD DEA
//int main() {
//    int a[100][100];
//    int newNiza[100];
//    int tracker=0;
//    int n, brojac=0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; ++i) {
//        for(int j=0; j < n; j++ )
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    int flag1=1;
//    int max;
//    for (int i = 0; i < n; ++i) {
//        brojac=0;
//        //int flag=1;
//        for(int j=0; j < n-1; j++ )
//        {
//
//               if(a[i][j]<a[i][j+1])
//               {
//                   brojac++;
//                   //flag=0;
//               }
//        }
//        if(brojac!=0)
//        {
//            newNiza[tracker++]= brojac+1;
//            //printf("%d\n", brojac+1);
//        } else
//        {
//            newNiza[tracker++]= brojac;
//            //printf("%d\n", brojac);
//        }
//    }
//    for(int i=0; i < tracker ; i++)
//    {
//         if(newNiza[0]<newNiza[i])
//         {
//             newNiza[0]=newNiza[i];
//         }
//        //printf("%d ", newNiza[i]);
//    }
//    if(newNiza[0]==0)
//    {
//        printf("1");
//        return  0;
//    } else
//    printf("%d", newNiza[0]);
//    return 0;
//}
